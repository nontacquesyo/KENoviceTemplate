#include "TitleScene.h"

// コンストラクタ
//TitleScene::TitleScene() { 
//
//}

//// デストラクタ
//TitleScene::~TitleScene() {}

void TitleScene::Init() {}

void TitleScene::Update() {

  if (inputManager_->GetPreKeys()[DIK_SPACE] == 0 &&
      inputManager_->GetKeys()[DIK_SPACE] != 0) {
    sceneNo = GAME_STAGE;
  }
}

void TitleScene::Draw() {
  Novice::ScreenPrintf(100, 100, "Title");
  Novice::ScreenPrintf(100, 120, "Press Space to Start");
}

