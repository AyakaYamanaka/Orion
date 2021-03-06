//**********************************//
//*	GameOver.h
//*	オーバーシーン
//*	2017.4.25
//*	N.Shibayama & Ayaka.Y
//**********************************//

#pragma once
#include "GameBase.h"
#include "GameMain.h"

class GameOver :public GameBase
{
public:
	GameOver();	//	コンストラクタ
	~GameOver();	//	デストラクタ
	int UpdateGame();	//	データの更新
	wchar_t* RenderGame();//	描画する
};
