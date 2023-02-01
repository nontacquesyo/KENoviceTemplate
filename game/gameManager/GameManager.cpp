#include "GameManager.h"

// コンストラクタ
GameManager::GameManager() {
  // 各シーンの配列
  sceneArr_[TITLE] = std::make_unique<TitleScene>();
  sceneArr_[GAME_STAGE] = std::make_unique<GameStageScene>();
  sceneArr_[TITLE] = std::make_unique<TitleScene>();

  //初期シーンの設定
  sceneNo_ = TITLE;
}

// デストラクタ
GameManager::~GameManager() {}

// ゲームループ
int GameManager::Run() {
  while (Novice::ProcessMessage() == 0) {
    // フレームの開始
    Novice::BeginFrame();

    // シーンのチェック
    prevSceneNo_ = sceneNo_;
    sceneNo_ = sceneArr_[sceneNo_]->GetSceneNo();

    //シーン変更チェック
    if (prevSceneNo_ != sceneNo_) {
        sceneArr_[sceneNo_]->Init();
    }

    //// 更新処理
    inputManager_->Update(); // 入力処理
    sceneArr_[sceneNo_]->Update(); // シーンごとの更新処理

    //// 描画処理
    sceneArr_[sceneNo_]->Draw();

    // フレームの終了
    Novice::EndFrame();

    // ESCキーが押されたらループを抜ける
    if (inputManager_->GetPreKeys()[DIK_ESCAPE] == 0 &&
        inputManager_->GetKeys()[DIK_ESCAPE] != 0) {
      break;
    }
  }

  return 0;
}

