#ifndef _SERVICE_FUNC_HPP_
#define _SERVICE_FUNC_HPP_

#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>
#include <cwctype>

void Getline(std::wstring& str);
bool IsNumber(const std::wstring& str);
bool isNotSame(const std::wstring& str, std::wstring* nameArr, size_t arrSize);
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

template <class ArrType> 
void ArrPushBack(ArrType*& arr, size_t arrSize)
{
	ArrType* temp = new ArrType[arrSize]{};
	for (size_t i = 0; i < arrSize - 1; i++)
	{
		temp[i] = arr[i];
	}
	std::swap(arr, temp);
	delete[]temp;
}




#endif // !_SERVICE_FUNC_HPP_