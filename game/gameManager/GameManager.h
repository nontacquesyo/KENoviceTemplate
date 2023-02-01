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
  // シーンを保持するメンバ変数
  std::unique_ptr<IScene> sceneArr_[3]; 

  // キーの入力情報を取得するInputManager
  InputManager* inputManager_ = InputManager::GetInstance();

  // どのステージを呼び出すかを管理する変数
  int sceneNo_;
  int prevSceneNo_;

public:
  // コンストラクタ
  GameManager();
  
  // デストラクタ
  ~GameManager();

  // ゲームループのこと
  int Run();

};

