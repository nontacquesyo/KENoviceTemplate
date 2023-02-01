#pragma once
#include <memory>
#include "environment.h"

#include "Novice.h"
#include "InputManager.h"

#include "IScene.h"
#include "TitleScene.h"
#include "GameStageScene.h"

class GameManager {

private:
  // �V�[����ێ����郁���o�ϐ�
  std::unique_ptr<IScene> sceneArr_[3]; 

  // �L�[�̓��͏����擾����InputManager
  InputManager* inputManager_ = InputManager::GetInstance();

  // �ǂ̃X�e�[�W���Ăяo�������Ǘ�����ϐ�
  int sceneNo_;
  int prevSceneNo_;

public:
  // �R���X�g���N�^
  GameManager();
  
  // �f�X�g���N�^
  ~GameManager();

  // �Q�[�����[�v�̂���
  int Run();

};

