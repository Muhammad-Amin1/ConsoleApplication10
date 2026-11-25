#include "Accaunt.h"


 size_t userSize = 3;
 size_t currentId = 0;
 std::wstring currentStatus;

std::wstring* loginArr = new std::wstring[userSize]{L"admin",L"user", L"amin"};
std::wstring* passArr = new std::wstring[userSize]{ L"admin",L"user", L"amin" };
std::wstring* statusArr = new std::wstring[userSize]{ L"Superadmin",L"User", L"Admin" };
size_t* userIdArr = new size_t[userSize]{ 0,1,2 };

size_t maxLogin = 12;
size_t minLogin = 5;
size_t maxPass = 14;
size_t minPass = 8;

std::unordered_set<wchar_t> loginSymbols;
std::unordered_set<wchar_t> passSymbols;

void ChangeAccounts()

{
	std::wstring choose;

	while (true)
	{
		system("cls");
		std::wcout << L"\n\n\t\tРедактор учетных записей \"Новое начало\"\n\n";
		std::wcout << L"1 - Создать новый акаунт\n";
		std::wcout << L"2 - Показать всех сотрудников\n";
		std::wcout << L"3 - Изменить пароль\n";
		std::wcout << L"4 - Изменить уровень доступа\n";
		std::wcout << L"4 - Редактировать премии и штрафы сотрудников\n";
		std::wcout << L"4 - Удалить аккаунт\n";
		std::wcout << L"0 - Выход\n";
		std::wcout << L"Ввод: ";

		Getline(choose);

		if (choose == L"1")
		{
			
		}
		else if (choose == L"2")
		{
			
		}
		else if (choose == L"3")
		{
			
		}
		else if (choose == L"4")
		{
			
		}
		else if (choose == L"5")
		{

		}
		else if (choose == L"6")
		{

		}
		else if (choose == L"")
		{
			std::wcout << L"Выход из Редактора учетных записей\n";
		}
		else
		{
			Err();
		}
	}
}

void CreateAccount()
{
	std::wstring chooseLogin, vhoosePass, chooseStatus, choose;

}
