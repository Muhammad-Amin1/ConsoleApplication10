#include "Accaunt.h"


 size_t userSize = 3;
 size_t currentId = 0;
 std::wstring currentStatus;

std::wstring* loginArr = new std::wstring[userSize]{L"admin",L"user", L"amin"};
std::wstring* passArr = new std::wstring[userSize]{ L"admin",L"user", L"amin" };
std::wstring* statusArr = new std::wstring[userSize]{ L"Superadmin",L"User", L"Admin" };
size_t* userIdArr = new size_t[userSize]{ 0,1,2 };