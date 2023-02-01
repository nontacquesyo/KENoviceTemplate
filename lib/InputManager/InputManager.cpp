#include "InputManager.h"

// コンストラクタは不要
InputManager::InputManager() { num_ = 100; }

// デストラクタも不要
// InputManager::~InputManager() {}

// GetInstance インスタンスにアクセスするための関数
InputManager *InputManager::GetInstance() {
  static InputManager instance ;
  return &instance;
}

// 更新処理
void InputManager::Update() {
  // キー入力を受け取る
  memcpy(preKeys_, keys_, 256);
  Novice::GetHitKeyStateAll(keys_);

}

char *InputManager::GetKeys() { return keys_; }
char *InputManager::GetPreKeys() { return preKeys_; }