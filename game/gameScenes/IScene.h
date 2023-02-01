#pragma once
#include "environment.h"

// �V�[�����ł̏������s�����N���X
enum SCENE { TITLE, GAME_STAGE, CLEAR };


class IScene {
protected:
  static int sceneNo ;

public:
  // �p����Ŏ��������֐�
  // ���ۃN���X�Ȃ̂ŏ������z�֐��Ƃ���
  virtual void Init() = 0;
  virtual void Update() = 0;
  virtual void Draw() = 0;
  
  int GetSceneNo() { return sceneNo;};
};
