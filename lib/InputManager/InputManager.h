#pragma once
#include "Novice.h"

// InputManager�̓v���W�F�N�g�Ɉ����΂悢�̂�
// �V���O���g���p�^�[���ō쐬�B
// �V���O���g���p�^�[���ō쐬�����
// ������̃O���[�o���ϐ��Ƃ��Ĉ�����B(�����Ƀ��X�N�ł����邪...)
// �Q�[���p�b�h�ɑΉ������������烁���o�ϐ��𑝂₵�đΉ����悤

class InputManager final{
private:
  // �R���X�g���N�^��private�Ƃ��ĊO������C���X�^���X�����Ȃ��悤�ɂ���B
  // �f�X�g���N�^�����ł�private��
  InputManager() ;
  ~InputManager() = default;

  // �R�s�[�R���X�g���N�^�̋֎~
  InputManager(const InputManager &) = delete;

  // ������Z�q�̃I�[�o�[���[�h���֎~
  const InputManager &operator=(const InputManager &) = delete;

  // �����o�ϐ� �����o�ϐ��͌���_�����ċ�ʂ���
  char keys_[256] = {0};
  char preKeys_[256] = {0};

  int num_;

public:
  // �������������Ȃ��C���X�^���X�ɂ�GetInstance()�֐��o�R�ŃA�N�Z�X����
  static InputManager *GetInstance();

  // �����o�֐�
  // void Init(); // ���񖢎g�p
  void Update();
  // void Draw(); // ���񖢎g�p

  // Getter�o�R�ŃL�[�̓��͏󋵂��擾����
  char *GetKeys();
  char *GetPreKeys();
};
