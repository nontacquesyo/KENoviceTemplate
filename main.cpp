#include <Novice.h>
#include "GameManager.h"
#include "Environment.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
  // ライブラリの初期化
  Novice::Initialize(kWindowTitle, kWindowWidth, kWindowHeight);

  // GameManagerのインスタンスを作成
  GameManager *gameManager = new GameManager();

  // ゲームループ
  gameManager->Run();

  // ライブラリの終了
  Novice::Finalize();
  return 0;
}
