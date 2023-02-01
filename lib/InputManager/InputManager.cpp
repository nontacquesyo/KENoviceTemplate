#include "InputManager.h"

// �R���X�g���N�^�͕s�v
InputManager::InputManager() { num_ = 100; }

// �f�X�g���N�^���s�v
// InputManager::~InputManager() {}

// GetInstance �C���X�^���X�ɃA�N�Z�X���邽�߂̊֐�
InputManager *InputManager::GetInstance() {
  static InputManager instance ;
  return &instance;
}

// �X�V����
void InputManager::Update() {
  // �L�[���͂��󂯎��
  memcpy(preKeys_, keys_, 256);
  Novice::GetHitKeyStateAll(keys_);

}

char *InputManager::GetKeys() { return keys_; }
char *InputManager::GetPreKeys() { return preKeys_; }