#include "GameStageScene.h"
#include "environment.h"

// コンストラクタ
GameStageScene::GameStageScene() { Init(); }

// デストラクタ
// GameStageScene::~GameStageScene() {}

// 初期化処理
void GameStageScene::Init() { 
    player_ = new Player(); 
}

// 更新処理
void GameStageScene::Update() {
  // シーン切り替えの入力処理
  if (inputManager_->GetKeys()[DIK_SPACE] != 0 &&
      inputManager_->GetPreKeys()[DIK_SPACE] == 0) {
    sceneNo = TITLE;
  }

  player_->Update();
}

// 描画処理
void GameStageScene::Draw() {
  Novice::DrawBox(0, 0, kWindowWidth, kWindowHeight, 0.0f, 0xD80000FF,
                  kFillModeSolid);
  Novice::ScreenPrintf(100, 100, "Stage 1");
  Novice::ScreenPrintf(100, 120, "Press Space to Clear");
  player_->Draw();
}

