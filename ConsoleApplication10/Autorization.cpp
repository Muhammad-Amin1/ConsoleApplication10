#include "Autorization.h"

void Start()
{

	while (true)
	{

		if (Login())
		{
			if (currentStatus == L"SuperAdmin")
			{
				CreateStorage();
				SuperAdminMenu();
			}

			else if (currentStatus == L"Admin")
			{

			}

			else if (currentStatus == L"User")
			{

			}

			else
			{
				std::wcerr << L"\n\n_CURRENT_STATUS_LOGIN_ERROR\n\n";
			}

		}

		else
		{
			system("cls");
			std::wcout << L"\n\n\n\t\tВсего доброго";
			Sleep(1500);
			break;
			
		}

	}

}

bool Login()
{
	std::wstring login, pass;

	while (true)
	{

		system("cls");
		std::wcout << L"\n\n\t\t\tДобро пожаловать!";
		std::wcout << L"\n\n\t\t Новое начало\n\n";
		std::wcout << L"Введите логин или \"exit\" для выхода: ";
		Getline(login);
		if (login == L"exit" || login == L"Exit")
		{
			return false;
		}

		else
		{
			std::wcout << L"Введите пароль: ";
			Getline(pass);
			for (size_t i = 0; i < userSize; i++)
			{
				if (login == loginArr[i] && pass == passArr[i])
				{
					std::wcout << L"Добро пожаловать " << loginArr[i] << L"\n";
					std::wcout << L"Ваш уровень доступа: " << statusArr[i] << L"\n";
					currentId = userIdArr[i];
					currentStatus = statusArr[i];

					Sleep(1500);
					
				}
			}
			return true;

		}
	}

}

void SuperAdminMenu()
{
	std::wstring choose;

	while (true)
	{
		system("cls");

		std::wcout << L"1 - Начать продажу ";
		std::wcout << L"2 - Показать склад";
		std::wcout << L"3 - Пополнить товары";
		std::wcout << L"4 - Списать товарыф";
		std::wcout << L"5 - Изменить товары";
		std::wcout << L"6 - Редактировать склад";
		std::wcout << L"7 - Редактировать сотрудников";
		std::wcout << L"8 - Показать прибыль";
		std::wcout << L"0 - Выход";
		Getline(choose);

		if(choose == L"1")
		{

		}

		else if(choose == L"2")
		{
			ShowStorage();
		}

		else if(choose == L"3")
		{

		}

		else if(choose == L"4")
		{

		}

		else if(choose == L"5")
		{

		}

		else if(choose == L"6")
		{

		}

		else if(choose == L"7")
		{

		}

		else if(choose == L"8")
		{

		}

		else if(choose == L"0")
		{

		}

		else
		{
			Err();
		}
	}
}

void AdminMenu()
{
}

void UserMenu()
{
}
