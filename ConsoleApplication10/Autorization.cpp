#include "Autorization.h"

void Start()
{

	while (true)
	{

		if (Login())
		{
			system("pause");
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
			for (size_t i = 0; i < userSize;i++)
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
