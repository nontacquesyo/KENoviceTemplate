#pragma once

#include "Novice.h"
#include "IScene.h"
#include "InputManager.h"

class TitleScene : public IScene {
private:
  InputManager *inputManager_ = InputManager::GetInstance();

public:
  //TitleScene();
  //~TitleScene();
  void Init() override;
  void Update() override;
  void Draw() override;
};
