//**********************************//
//*	GameTitle.h
//*	�^�C�g���V�[��
//*	2017.4.25
//*	N.Shibayama
//**********************************//

#pragma once
#include "GameBase.h"

class GameTitle :public GameBase
{
public:
	GameTitle();	//	�R���X�g���N�^
	~GameTitle();	//	�f�X�g���N�^
	void UpdateGame();	//	�f�[�^�̍X�V
	wchar_t* RenderGame();//	�`�悷��
};