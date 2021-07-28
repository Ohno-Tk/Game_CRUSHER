/*=============================================================================

		�v���C���[[ player.h ]

-------------------------------------------------------------------------------

	���@�쐬��
		2016/07/28
-------------------------------------------------------------------------------
	���@Update
		2016/07/28
			�E�\���̒ǉ�
				PLAYER
			�E�v���g�^�C�v�錾�ǉ�
				void InitPlayer(void);	//	�v���C���[�̏�����
				void UninitPlayer(void);	//	�v���C���[�̏I��
				void UpdatePlayer(void);	//	�v���C���[�̍X�V
				void DrawPlayer(void);	//	�v���C���[�̕`��
				PLAYER *GetPlayer(void);	//	�v���C���[���̎擾
		2016/08/29
			�E�v���g�^�C�v�錾�ǉ�
				bool *GetGoolFlag( void );	//	�S�[���������ǂ����̏��擾
-----------------------------------------------------------------------------*/
#ifndef _PLAYER_H_
#define _PLAYER_H_
/*-----------------------------------------------------------------------------
	�萔��`
-----------------------------------------------------------------------------*/
#define GRAVITY ( 1.0f )	//	�d��
#define TEX_WIDTH ( 0.5f )	//	��̃e�N�X�`���̉���
#define TEX_HEIGHT ( 0.5f )	//	��̃e�N�X�`���̏c��
/*-----------------------------------------------------------------------------
	�\����
-----------------------------------------------------------------------------*/
typedef struct
{
	D3DXVECTOR2 Pos;	//	���W
	D3DXVECTOR2 OldPos;	//	�O��̍��W
	D3DXVECTOR2 Size;	//	�傫��
	D3DXVECTOR2 Move;	//	�ړ���
	float Direct;	//	����
	float HitMove_Y;	//	�q�b�g�������̈ړ���Y
	bool gool;	//	�S�[��������
	bool Hit;	//	�G�ɓ���������
	bool Jump;	//	�W�����v������
	bool fall;	//	�n�ʂ�艺�ɍs������
	bool bUse;	//	�g�p���Ȃ�true
}PLAYER;
/*-----------------------------------------------------------------------------
	�v���g�^�C�v�錾
-----------------------------------------------------------------------------*/
void InitPlayer(void);	//	�v���C���[�̏�����
void UninitPlayer(void);	//	�v���C���[�̏I��
void UpdatePlayer(void);	//	�v���C���[�̍X�V
void DrawPlayer(void);	//	�v���C���[�̕`��
PLAYER *GetPlayer(void);	//	�v���C���[���̎擾
#endif