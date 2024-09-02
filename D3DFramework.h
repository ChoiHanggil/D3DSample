#pragma once

#define WIN32_LEAN_AND_MEAN   //쓸데없는 코드없고 일반적인 것만 쓴다. 다이어트
#include <Windows.h>
//windows.h
// CPU, RAM, HDD , PRINTER, SCANNER, MODEM(전화선) 등..여러가지 
//

#include <wrl/client.h>
#include <d3d11.h>
#include<string>

class D3DFramework
{
public:
	virtual void Initialize(HINSTANCE hInstance, int width = 800, int height = 600);
	virtual void Destroy();
	virtual void GameLoop();

	LRESULT CALLBACK MessgeHandle(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

private:
	void InitWindow(HINSTANCE hInstance);
	void InitD3D();

protected:
	void OnResize();
	void RenderFrame();
	virtual void Render() {};

private:
	const std:: wstring CLASS_NAME{ L"MyClassName" };
	const std::wstring TiTLE_TEXT{ L"Direct3D Sample" };

protected:
	int mScreenWidth{ 800 };
	int mScreenHeight{ 600 };

	HWND mHwnd{};
	HINSTANCE mInstance{};

	bool mMinimized{ false };
	bool mMaximized{ false };
	bool mResizing{ false };

	Microsoft::WRL::ComPtr<ID3D11Device> mspDevice{};
	Microsoft::WRL::ComPtr<ID3D11DeviceContext> mspDeviceContext;

	//해상도가 바꾸면 전부다 새로 만들어야 된다
	Microsoft::WRL::ComPtr<IDXGISwapChain> mspSwapChain{}; //Interface DX GI(Graphic Infarastructure)
	Microsoft::WRL::ComPtr<ID3D11Texture2D> mspRenderTarget{};
	Microsoft::WRL::ComPtr<ID3D11Texture2D> mspDepthStencil{};
	Microsoft::WRL::ComPtr<ID3D11RenderTargetView> mspRenderTargetView{};
	Microsoft::WRL::ComPtr<ID3D11DepthStencilView> mspDepthStencilView{};
};

static LRESULT CALLBACK WindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);