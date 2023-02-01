#pragma once

#include "Novice.h"
#include "InputManager.h"
#include "MyMath.h"

class Player {
private:
  InputManager *inputManager_ = InputManager::GetInstance();

  Vector2 pos_;
  int speed_;
  int width_;
  int height_;

public:
  Player();

  void Init();
  void Update();
  void Draw();
  
  void Move();
};
