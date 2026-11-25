#include "Storage.h"


size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;
bool isStorageCreated = false;
size_t maxStorageSize = 2000;
size_t currentStorage = 0;
size_t currentStorageSize = 0;
double maxPrice = 10000;

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
		std::wcout << L"\n\n\t\tСклад Watermelon\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<< L"Кол-во\t" << L"Цена\t\t\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(40) << nameArr[i]
				<< L"\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
		std::wcout << L"\n\n";
		system("pause");
	}
	else if (mode == 1)
	{
		system("cls");
		std::wcout << L"\n\n\t\tПополнение товаров \"Watermelon\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<< L"Кол-во\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed
				<< std::left << std::setw(40) << nameArr[i]
				<< L"\t" << countArr[i] << L"\n";

		}
		std::wcout << L"\n\n";
		std::wcout << L"Занято на складе " << currentStorage << L" из " << maxStorageSize << L" мест\n";
	}
	else if (mode == 2)
	{
		system("cls");
		std::wcout << L"\n\n\t\tСписание товаров \"Watermelon\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<< L"Кол-во\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed
				<< std::left << std::setw(40) << nameArr[i]
				<< L"\t" << countArr[i] << L"\n";

		}
		std::wcout << L"\n\n";
		std::wcout << L"Занято на складе " << currentStorage << L" из " << maxStorageSize << L" мест\n";
	}
	else if (mode == 3)
	{
		system("cls");
		std::wcout << L"\n\n\t\tИзменение цен \"Watermelon\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<< L"Цена\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed
				<< std::left << std::setw(40) << nameArr[i]
				<< L"\t" << priceArr[i] << L"\n";

		}
		std::wcout << L"\n\n";
	}
	else if (mode == 4)
	{
		system("cls");
		std::wcout << L"\n\n\t\tПереименовать товар \"Watermelon\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<< L"Цена\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed
				<< std::left << std::setw(40) << nameArr[i]
				<< L"\t" << priceArr[i] << L"\n";

		}
		std::wcout << L"\n\n";
	}
	else if (mode == 5)
	{
		system("cls");
		std::wcout << L"\n\n\t\tУдаление товар \"Watermelon\"\n\n";
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
			<< L"Цена\n\n";

		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::fixed
				<< std::left << std::setw(40) << nameArr[i]
				<< L"\t" << priceArr[i] << L"\n";

		}
		std::wcout << L"\n\n";
	}

}

void AddProduct() 
{
	std::wstring chooseId, chooseCount, choose;

	while (true)
	{
		ShowStorage(1);
		std::wcout << L"Введите IDss или \"exit\" для выхода \nВвод: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			return;
		}


		else if (IsNumber(chooseId))
		{
			int id = std::stoi(chooseId) - 1;
			if (id < 0 || id >(int)sizeSt - 1)
			{
				Err();
				continue;
			}

			else
			{

				std::wcout << L"Введите количество товаров: ";
				Getline(chooseCount);

				if (IsNumber(chooseCount))
				{
					std::wcout << L"Введите количество товаров: ";
					size_t count = std::stoull(chooseCount);


					if (count < 0 || count > maxStorageSize - currentStorageSize)
					{
						std::wcout << L"некоректное кол-во ! На складе осталось " << maxStorageSize - currentStorageSize << L"свободного мест\n\n";
						Sleep(1700);
					}
					else
					{
						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L"\t " << countArr[id] << L"-------->" << countArr[id] + count << L"\n\n";
							std::wcout << L"Подтвердить?\n1 - Да\n2 - Нет \n\nВвод: ";
							Getline(choose);

							if (choose == L"1")
							{
								std::wcout << "Товар успешнор пополнен\n\n";
								countArr[id] += count;
								currentStorageSize += count;
								Sleep(1500);
								break;

							}
							else if (choose == L"2")
							{
								std::wcout << L"Отмена пополнение" << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}

							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void removeProduct()
{
	std::wstring chooseId, chooseCount, choose;

	while (true)
	{
		ShowStorage(2);
		std::wcout << L"Введите ID или \"exit\" для выхода \nВвод: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции списания товара\n\n";
			Sleep(1500);
			return;
		}
		else if (true)
		{
			int id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"Введите Кол-во товара для списания: ";
				Getline(chooseCount);
				if (IsNumber(chooseCount))
				{
					size_t count = std::stoi(chooseCount);
					if (count < 0 && count > countArr[id])
					{
						std::wcout << L"Некорректный кол-во на складе осталось "
							<< countArr[id] - count << L" штук";
						Sleep(1500);
					}
					else
					{
						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L"\nИзменения " << countArr[id] << L" ---> "
								<< countArr[id] - count << L"\n";
							std::wcout << L"Потвердить?\n1 - Да \t2 - Нет\nВвод: ";
							Getline(choose);
							if (choose == L"1")
							{
								std::wcout << L"Товар успешно списан\n\n";
								countArr[id] -= count;
								currentStorage -= count;
								Sleep(1500);
								break;
							}
							if (choose == L"2")
							{
								std::wcout << L"Отмена списания" << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void ChangePrice()
{
	std::wstring chooseId, choosePrice, choose;

	while (true)
	{
		ShowStorage(3);
		std::wcout << L"Введите ID или \"exit\" для выхода \nВвод: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции изменение цен\n\n";
			Sleep(1500);
			return;
		}
		else if (true)
		{
			int id = std::stoi(chooseId) - 1;
			if (id < 0 || id > sizeSt - 1)
			{
				Err();
			}
			else
			{
				std::wcout << L"Введите новую стоимость товара: ";
				Getline(choosePrice);
				if (IsNumber(choosePrice))
				{
					double count = std::stoi(choosePrice);
					if (count < 0 && count > maxPrice) 
					{
						std::wcout << L"Некорректный число для изменения"
							<< countArr[id] - count << L" штук";
						Sleep(1500);
					}
					else
					{
						while (true)
						{
							system("cls");
							std::wcout << nameArr[id] << L"\nИзменения " << countArr[id] << L" ---> "
								<< countArr[id] - count << L"\n";
							std::wcout << L"Потвердить?\n1 - Да \n2 - Нет\nВвод: ";
							Getline(choose);
							if (choose == L"1")
							{
								std::wcout << L"Товар успешно списан\n\n";
								priceArr[id] -= count;
								
								Sleep(1500);
								break;
							}
							if (choose == L"2")
							{
								std::wcout << L"Отмена списания" << nameArr[id] << L"\n";
								Sleep(1500);
								break;
							}
							else
							{
								Err();
							}
						}
					}
				}
			}
		}
	}
}

void ChangeStorage()
{
	std::wstring choose;

	while (true)
	{
		system("cls");

		std::wcout << L"1 - Добавить новый товар\n";
		std::wcout << L"2 - Изменить название товара\n";
		std::wcout << L"3 - Удалить товары\n";
		std::wcout << L"4 - Изменить лимит склада\n";
		std::wcout << L"0 - Выход\n";
		std::wcout << L"Ввод: ";

		Getline(choose);

		if (choose == L"1")
		{
			AddNewProduct();
		}
		else if (choose == L"2" && sizeSt > 0)
		{
			ChangeProductName();
		}
		else if (choose == L"3" && sizeSt > 0  )
		{
			DeleteProduct();
		}
		else if (choose == L"4")
		{
			ChangeStorageLimits();
		}
		else
		{
			Err();
		}
	}
}

void AddNewProduct()
{

	std::wstring chooseName, chooseCout, choosePrice, choose;
	size_t cout = 0;
	double price = 0;
	while (true)
	{

		while (true)
		{
			system("cls");
			std::wcout << L"Введите название нового товара или \"exit\" для выхода ";
			Getline(chooseName);
			if (chooseName == L"exit" || chooseName == L"Exit")
			{
				std::wcout << L"Отмена создание нового товара ";
				Sleep(1500);
				return;
			}

			if (chooseName.size() < 3 || chooseName.size() > 40)
			{
				std::wcout << L"Ошыбка длины";
				Sleep(1500);
				continue;
			}

			if (isNotSame(chooseName, nameArr, sizeSt))
			{
				break;
			}

			else
			{
				std::wcout << L"Такой товар уже есть на складе ";
				Sleep(1500);
			}

		}

		while (true)
		{
			system("cls");
			std::wcout << L"Введите стоимость нового товара или \"exit\" для выхода ";
			Getline(choosePrice);

			if (choosePrice == L"exit" || choosePrice == L"Exit")
			{
				std::wcout << L"Отмена создание нового товара ";
				Sleep(1500);
				return;
			}

			if (IsNumber(choosePrice))
			{
				 price = std::stod(choosePrice);

				if (price < 0 || price > maxPrice)
				{
					std::wcout << L"некоректное цена! Максимальная цена: " << maxPrice << L"рублей\n\n";
					Sleep(1700);
				}
				else
				{
					break;
				}
			}

			




		}

		while (true)
		{
			system("cls");
			std::wcout << L"Введите кол-во нового товара или \"exit\" для выхода ";
			Getline(chooseCout);

			if (chooseCout == L"exit" || chooseCout == L"Exit")
			{
				std::wcout << L"Отмена создание нового товара ";
				Sleep(1500);
				return;
			}

			if (IsNumber(chooseCout))
			{
				 cout = std::stoull(chooseCout);


				if (cout < 0 || cout > maxStorageSize - currentStorageSize)
				{
					std::wcout << L"некоректное кол-во ! На складе осталось " << maxStorageSize - currentStorageSize << L"свободного мест\n\n";
					Sleep(1700);
				}
				else
				{
					break;
				}
			}

		}

		while (true)
		{
			system("cls");
			std::wcout << L"Новый товар: " << chooseName << L"\n";
			std::wcout << L"кол-во: " << chooseName << L"\n";
			std::wcout << L"Цена: " << chooseName << L"\n\n";
			std::wcout << L"Подтвердить?\n1 - Да\n2 - Нет\n\nВвод:";

			Getline(choose);

			if (choose == L"1")
			{
				std::wcout << L"Раширение склада";
				for (size_t i = 0; i < 5; i++)
				{
					Sleep(500);
					std::wcout << L" .";
				}
				Sleep(500);

				ArrPushBack(idArr, sizeSt);
				ArrPushBack(nameArr, sizeSt);
				ArrPushBack(countArr,sizeSt);
				ArrPushBack(priceArr,sizeSt);
				sizeSt++;
				idArr[sizeSt - 1] = sizeSt;
				nameArr[sizeSt - 1] = sizeSt;
				countArr[sizeSt - 1] = sizeSt;
				priceArr[sizeSt - 1] = sizeSt;
				currentStorageSize += cout;
				//:)
				std::wcout << L"\nТовар успешно добавлин";
				Sleep(1600);
				break;



			}
			else if (choose == L"2")
			{
				std::wcout << L"Отмена";
				Sleep(1500);
				break;
			}
			else if (choose == L"3")
			{
				AddProduct();
			}
			else if (choose == L"4")
			{
				removeProduct();
			}
			else if (choose == L"5")
			{

			}
			
		}

	}
}

void ChangeProductName()
{
	std::wstring chooseId, chooseName,chooseCout, choose;

	while (true)
	{
		ShowStorage(4);
		std::wcout << L"Введите ID или \"exit\" для выхода \nВвод: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершение операции товара ";
			Sleep(1500);
			return;
		}


		else if (IsNumber(chooseId))
		{
			int id = std::stoi(chooseId) - 1;
			if (id < 0 || id >(int)sizeSt - 1)
			{
				Err();
				continue;
			}

			else
			{

				Getline(chooseName);

				if (chooseName.size() < 3 || chooseName.size() > 40)
				{
					std::wcout << L"Ошыбка длины";
					Sleep(1500);
					continue;
				}

				if (!isNotSame(chooseName, nameArr, sizeSt))
				{
					break;
				}

				else
				{
					while (true)
					{
						system("cls");
						size_t cout = std::stoull(chooseId);
						std::wcout << nameArr[id] << L"\t " << countArr[id] << L"-------->" << chooseName << L"\n\n";
						std::wcout << L"Подтвердить?\n1 - Да\n2 - Нет \n\nВвод: ";
						Getline(choose);

						if (choose == L"1")
						{
							std::wcout << "Товар успешнор пополнен\n\n";
							countArr[id] += cout;
							currentStorageSize += cout;
							Sleep(1500);
							break;

						}
						else if (choose == L"2")
						{
							std::wcout << L"Отмена пополнение" << nameArr[id] << L"\n";
							Sleep(1500);
							break;
						}

						else
						{
							Err();
						}
					}	
				}
			}
		}
	}		
}

void DeleteProduct()

{
	std::wstring chooseId, pass;

	while (true)
	{
		ShowStorage(1);
		std::wcout << L"Введите ID или \"exit\" для выхода \nВвод: ";
		Getline(chooseId);
		if (chooseId == L"exit" || chooseId == L"Exit")
		{
			std::wcout << L"Завершить удаление товара ";
			Sleep(1500);
			return;
		}


		else if (IsNumber(chooseId))
		{
			int id = std::stoi(chooseId) - 1;
			if (id < 0 || id >(int)sizeSt - 1)
			{
				Err();
				continue;
			}

			else
			{
				std::wcout << L"Подтвердить удаление товара: " << nameArr[id] <<
					L"\nВведите пароль супер Администратора: ";

				Getline(pass);

				if (pass == passArr[0])
				{
					std::wcout << L"Удаление товара";
					for (size_t i = 0; i < 5; i++)
					{
						Sleep(500);
						std::wcout << L" .";
					}

					Sleep(500);
					currentStorageSize -= countArr[id];

					ArrDeleteByIndex(idArr, sizeSt, id);
					ArrDeleteByIndex(nameArr, sizeSt, id);
					ArrDeleteByIndex(countArr, sizeSt, id);
					ArrDeleteByIndex(priceArr, sizeSt, id);
					sizeSt--;

					for (size_t i = id; i < sizeSt;i++)
					{
						idArr[i] = i + 1;
					}
					std::wcout << L"\n\nТовар успешно удален\n\n";
					Sleep(1500);

					if (sizeSt < 1)
					{
						std::wcout << L"Склад пуст";
						Sleep(1500);
						return;
					}
					continue;
				}
				else
				{
					Err();
				}	
			}
		}
	}
}

void ChangeStorageLimits()
{
	std::wcout << L"\n\nВ процесе разработки\n\n";
	Sleep(1500);
}
