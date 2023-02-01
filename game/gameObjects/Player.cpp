#include "Player.h"

Player::Player() { Init(); }

void Player::Init() {
  pos_.x = 100;
  pos_.y = 100;
  speed_ = 2;
  width_ = 25;
  height_ = 25;
}

void Player::Update() { Move(); }

void Player::Draw() { 
    Novice::DrawBox(pos_.x, pos_.y, width_, height_, 0.0f, 0xFFFFFFFF, kFillModeSolid);
}

void Player::Move() {
  if (inputManager_->GetKeys()[DIK_UP] || inputManager_->GetKeys()[DIK_W]) {
    pos_.y -= speed_;
  }

  if (inputManager_->GetKeys()[DIK_DOWN] || inputManager_->GetKeys()[DIK_S]) {
    pos_.y += speed_;
  }

  if (inputManager_->GetKeys()[DIK_LEFT] || inputManager_->GetKeys()[DIK_A]) {
    pos_.x -= speed_;
  }

  if (inputManager_->GetKeys()[DIK_RIGHT] || inputManager_->GetKeys()[DIK_D]) {
    pos_.x += speed_;
  }
}