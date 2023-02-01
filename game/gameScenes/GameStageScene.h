#pragma once

#include "Novice.h"
#include "IScene.h"
#include "Player.h"
#include "InputManager.h"

class GameStageScene : public IScene {
private:
  InputManager *inputManager_ = InputManager::GetInstance();
  Player *player_;
  
public:
  GameStageScene();
  //~GameStageScene();
  void Init() override;
  void Update() override;
  void Draw() override;

};