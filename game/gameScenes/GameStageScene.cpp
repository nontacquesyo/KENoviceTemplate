#include "GameStageScene.h"
#include "environment.h"

// �R���X�g���N�^
GameStageScene::GameStageScene() { Init(); }

// �f�X�g���N�^
// GameStageScene::~GameStageScene() {}

// ����������
void GameStageScene::Init() { 
    player_ = new Player(); 
}

// �X�V����
void GameStageScene::Update() {
  // �V�[���؂�ւ��̓��͏���
  if (inputManager_->GetKeys()[DIK_SPACE] != 0 &&
      inputManager_->GetPreKeys()[DIK_SPACE] == 0) {
    sceneNo = TITLE;
  }

  player_->Update();
}

// �`�揈��
void GameStageScene::Draw() {
  Novice::DrawBox(0, 0, kWindowWidth, kWindowHeight, 0.0f, 0xD80000FF,
                  kFillModeSolid);
  Novice::ScreenPrintf(100, 100, "Stage 1");
  Novice::ScreenPrintf(100, 120, "Press Space to Clear");
  player_->Draw();
}

