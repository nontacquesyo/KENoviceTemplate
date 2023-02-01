#include "GameManager.h"

// �R���X�g���N�^
GameManager::GameManager() {
  // �e�V�[���̔z��
  sceneArr_[TITLE] = std::make_unique<TitleScene>();
  sceneArr_[GAME_STAGE] = std::make_unique<GameStageScene>();
  sceneArr_[TITLE] = std::make_unique<TitleScene>();

  //�����V�[���̐ݒ�
  sceneNo_ = TITLE;
}

// �f�X�g���N�^
GameManager::~GameManager() {}

// �Q�[�����[�v
int GameManager::Run() {
  while (Novice::ProcessMessage() == 0) {
    // �t���[���̊J�n
    Novice::BeginFrame();

    // �V�[���̃`�F�b�N
    prevSceneNo_ = sceneNo_;
    sceneNo_ = sceneArr_[sceneNo_]->GetSceneNo();

    //�V�[���ύX�`�F�b�N
    if (prevSceneNo_ != sceneNo_) {
        sceneArr_[sceneNo_]->Init();
    }

    //// �X�V����
    inputManager_->Update(); // ���͏���
    sceneArr_[sceneNo_]->Update(); // �V�[�����Ƃ̍X�V����

    //// �`�揈��
    sceneArr_[sceneNo_]->Draw();

    // �t���[���̏I��
    Novice::EndFrame();

    // ESC�L�[�������ꂽ�烋�[�v�𔲂���
    if (inputManager_->GetPreKeys()[DIK_ESCAPE] == 0 &&
        inputManager_->GetKeys()[DIK_ESCAPE] != 0) {
      break;
    }
  }

  return 0;
}

