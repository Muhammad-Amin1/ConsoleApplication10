#include "Storage.h"


size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;
bool isStorageCreated = false;

void CreateStorage(int mode)
{
	if (mode == 0 && !isStorageCreated)
	{
		const size_t staticSize = 10;

		size_t idArrStatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10 };
		std::wstring nameArrStatic[staticSize]
		{
			L"Ритуальная одежда", L"Гроб",
			L"амфора", L"Цветы",
			L"постельное белье", L"лекарства",
			L"Веревка и масло", L"Эфектный выход",
			L"Могила", L"двухйарустный гроб",
		};

		size_t countArrStatic[staticSize]{ 15,20,12,30,12,40,10,100,12,13 };
		double priceArrStatic[staticSize]{ 3500,3500,25000,2000,500,600,1200,10000,30000,7000 };

		sizeSt = staticSize;
		idArr = new size_t[sizeSt];
		nameArr = new std::wstring[sizeSt];
		countArr = new size_t[sizeSt];
		priceArr = new double[sizeSt];

		FillArray(idArr, idArrStatic, sizeSt);
		FillArray(nameArr, nameArrStatic, sizeSt);
		FillArray(countArr, countArrStatic, sizeSt);
		FillArray(priceArr, priceArrStatic, sizeSt);
		
		isStorageCreated = true;
	}
	else if(mode == 1)
	{
		//to do 
	}
	else
	{

		std::wcout << L"Склад уже создан";
		Sleep(1500);

	}
}

void ShowStorage(int mode)
{
	if (mode == 0)
	{
		system("cls");

		std::wcout << L"\n\n\t\t\tТовары\"Новое начало\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t" << L"Кол-во\t" << L"Цена\n\n";
		//	остановились тут
	}



}
