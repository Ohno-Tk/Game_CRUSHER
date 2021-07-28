/*=============================================================================

		�_[ cloud.h ]

-------------------------------------------------------------------------------

	���@�쐬��
		2016/09/14
			�E�萔��`�ǉ�
				#define MAX_CLOUD	//	�_�̍ő吔
			�E�\���̒ǉ�
				typedef struct
				{
					D3DXVECTOR2 pos;	//	���W
					D3DXVECTOR2 size;	//	�傫��
					float move_X;	//	�ړ���
					bool use;
				}CLOUD;
			�E�v���g�^�C�v�錾�ǉ�
				void InitCloud(void);	//	�_�̏�����
				void UninitCloud(void);	//	�_�̏I��
				void UpdateCloud(void);	//	�_�̍X�V
				void DrawCloud(void);	//	�_�̕`��
				CLOUD *GetCloud( void );	//	�_���̎擾
		2016/09/27
			�E�萔��`�폜
				#define MAX_CLOUD	//	�_�̍ő吔
-------------------------------------------------------------------------------
	���@Update
		2016/09/14
-----------------------------------------------------------------------------*/
#ifndef _CLOUD_H_
#define _CLOUD_H_
/*-----------------------------------------------------------------------------
	�\����
-----------------------------------------------------------------------------*/
typedef struct
{
	D3DXVECTOR2 pos;	//	���W
	D3DXVECTOR2 size;	//	�傫��
	float move_X;	//	�ړ���
	bool use;
}CLOUD;
/*-----------------------------------------------------------------------------
	�v���g�^�C�v�錾
-----------------------------------------------------------------------------*/
void InitCloud(void);	//	�_�̏�����
void UninitCloud(void);	//	�_�̏I��
void UpdateCloud(void);	//	�_�̍X�V
void DrawCloud(void);	//	�_�̕`��
CLOUD *GetCloud( void );	//	�_���̎擾
#endif