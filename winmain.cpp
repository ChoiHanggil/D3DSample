//windows.h
// CPU, RAM, HDD , PRINTER, SCANNER, MODEM(전화선) 등..여러가지 
//
// Drect3D
// 1. 디바이스 생성 (디바이스 컨텍스트 포함) Device Context(DC)
// 2. 스왑체인 생성 : front back 만들어서 swap - chain
// 3. 렌더타겟으로 후면 버퍼 지정
// 4. 깊이버퍼 + 스텐실버퍼 생성
// 5. 파이퍼라인 설정
// 6. 뷰포트 지정 View port

// 7. 그리기 확인 
	// 렌더타겟
	// 깊이스텐실 버퍼
	// 
	
// MVC 패턴
//

// 모든 스위치 룰
// 0. 해상도는 옵션으로 변경 - 변수
// 0. 윈도우 배경색 칠하기 과정을 생략
// 1. 스왑체인으이 속성 변경
// 2. 게임 종료시에 반드시 전체화면 모드 해제 후 종료

// 가변 해상도
// 스왑체인
// 렌더타겟(렌더타겟 뷰)
// 깊이스텐실(깊이스텐실 뷰)
// 뷰포트

// 윈도우 창 크기 변경 메시지
// WM_SIZE, WM_ENTERSIZEMOVE, WM_EXITSIZEMOVE
// 크기 조절 제한, 메뉴 없음 사운드 띠리링 소리 제거

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
//	전체화면
// 
//