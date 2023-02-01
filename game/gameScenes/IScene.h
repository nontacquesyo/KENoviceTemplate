#pragma once
#include "environment.h"

// シーン内での処理を行う基底クラス
enum SCENE { TITLE, GAME_STAGE, CLEAR };


class IScene {
protected:
  static int sceneNo ;

public:
  // 継承先で実装される関数
  // 抽象クラスなので純粋仮想関数とする
  virtual void Init() = 0;
  virtual void Update() = 0;
  virtual void Draw() = 0;
  
  int GetSceneNo() { return sceneNo;};
};
