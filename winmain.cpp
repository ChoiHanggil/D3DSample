//windows.h
// CPU, RAM, HDD , PRINTER, SCANNER, MODEM(��ȭ��) ��..�������� 
//
// Drect3D
// 1. ����̽� ���� (����̽� ���ؽ�Ʈ ����) Device Context(DC)
// 2. ����ü�� ���� : front back ���� swap - chain
// 3. ����Ÿ������ �ĸ� ���� ����
// 4. ���̹��� + ���ٽǹ��� ����
// 5. �����۶��� ����
// 6. ����Ʈ ���� View port

// 7. �׸��� Ȯ�� 
	// ����Ÿ��
	// ���̽��ٽ� ����
	// 
	
// MVC ����
//

// ��� ����ġ ��
// 0. �ػ󵵴� �ɼ����� ���� - ����
// 0. ������ ���� ĥ�ϱ� ������ ����
// 1. ����ü������ �Ӽ� ����
// 2. ���� ����ÿ� �ݵ�� ��üȭ�� ��� ���� �� ����

// ���� �ػ�
// ����ü��
// ����Ÿ��(����Ÿ�� ��)
// ���̽��ٽ�(���̽��ٽ� ��)
// ����Ʈ

// ������ â ũ�� ���� �޽���
// WM_SIZE, WM_ENTERSIZEMOVE, WM_EXITSIZEMOVE
// ũ�� ���� ����, �޴� ���� ���� �츮�� �Ҹ� ����

#include "D3DFramework.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPreInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	D3DFramework MySample;

	MySample.Initialize(hInstance);

	MySample.GameLoop();

	MySample.Destroy();

	return 0;
}



//DirectX
//	��üȭ��
// 
//