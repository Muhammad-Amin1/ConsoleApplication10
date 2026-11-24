#ifndef _STORAGE_HPP_
#define _STORAGE_HPP_

#include "ServiceFunc.h"

extern size_t sizeSt;
extern size_t* idArr;
extern std::wstring* nameArr;
extern size_t* countArr;
extern double* priceArr;

extern bool isStorageCreated;

extern size_t maxStorageSize;
extern size_t currentStorage;
extern size_t currentStorageSize;
extern double maxPrice;

void CreateStorage(int mode = 0);
void ShowStorage(int mode = 0);
void AddProduct();
void removeProduct();
void ChangePrice();

void ChangeStorage();
void AddNewProduct();



#endif // !_STORAGE_HPP_

