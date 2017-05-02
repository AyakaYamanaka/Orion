//******************************************//
//*	���@�O�FObjectBase.h
//*	���@�e�F�I�u�W�F�N�g�̃x�[�X�N���X
//*	���@�t�F2017.5.2
//*	����ҁFN.Shibayama
//******************************************//

#pragma once

class ObjectBase
{
protected:
	float m_grpX;	//�摜��X���W
	float m_grpY;	//�摜��Y���W
	float m_grpW;	//�摜��W���W
	float m_grpH;	//�摜��H���W
	float m_posX;	//X���W
	float m_posY;	//Y���W
	float m_spdX;	//���xX���W
	float m_spdY;	//���xY���W
	int m_state;	//���

public:
	ObjectBase();	//�R���X�g���N�^
	~ObjectBase();	//�f�X�g���N�^
	virtual void Update();	//�X�V
	virtual void Render();	//�`��

};
