#ifndef _SERVICE_FUNC_HPP_
#define _SERVICE_FUNC_HPP_

#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>

void Getline(std::wstring& str);

inline void Err()
{
	std::wcout << L"Некорректный ввод\n\n";
	Sleep(1500);
}

template <class ArrType>
void FillArray(ArrType* dymanicArr, ArrType* staticArr, size_t commonSize)
{

	for (size_t i = 0; i < commonSize; i++)
	{
		dymanicArr[i] = staticArr[i];
	}
}









#endif // !_SERVICE_FUNC_HPP_