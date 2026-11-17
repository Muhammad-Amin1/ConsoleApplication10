#ifndef _STORAGE_HPP_
#define _STORAGE_HPP_

#include "ServiceFunc.h"

extern size_t sizeSt;
extern size_t* idArr;
extern std::wstring* nameArr;
extern size_t* countArr;
extern double* priceArr;

void CreateStorage(int mode = 0);
void ShowStorage(int mode = 0);
extern bool isStorageCreated;

#endif // !_STORAGE_HPP_

