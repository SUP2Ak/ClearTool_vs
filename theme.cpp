#pragma once

#include <Windows.h>

// Ajoutez cette fonction à votre code
void UpdateVisualStyle(HWND hWnd) {
    COLORREF customColor = RGB(31, 31, 31);
    // COLORREF customColor2 = RGB(0, 0, 0);
    // COLORREF customColor3 = RGB(255, 0, 0);

    HBRUSH hCustomBrush = CreateSolidBrush(customColor);
    SetClassLongPtr(hWnd, GCLP_HBRBACKGROUND, reinterpret_cast<LONG_PTR>(hCustomBrush));

    // DeleteObject(hCustomBrush);
}