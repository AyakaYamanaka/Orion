//**********************************//
//*	GameClear.h
//*	�N���A�V�[��
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#pragma once
#include "GameBase.h"

class GameClear :public GameBase
{
public:
	GameClear();	//	�R���X�g���N�^
	~GameClear();	//	�f�X�g���N�^
	void UpdateGame();	//	�f�[�^�̍X�V
	wchar_t* RenderGame();//	�`�悷��
};