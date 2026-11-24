#include "Supplier.h"

size_t supplierSize = 0;
size_t* supplierIdArr = nullptr;
std::wstring* supplierNameArr = nullptr;
size_t* supplierCountArr = nullptr;
double* supplierPriceArr = nullptr;
bool isSupplierCreated = false;


void CreateSupplier()
{
    if (isSupplierCreated) return;

    const size_t staticSize = 10;
    size_t idStatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10 };
    std::wstring nameStatic[staticSize]
    {
        L"Крушка виде арбуза", L"Тарелке виде арбуза", L"Миска для питомцов виде арбуза",
        L"Миски виде арбуза", L"Чашки виде арбуза", L"Вазы виде арбузов",
        L"Салатницы виде арбуза", L"Чайники виде арбузов", L"горшки виде арбузов", L"Кувшины виде арбузов"
    };
    size_t countStatic[staticSize]{ 500, 500, 500, 500, 500, 500, 500, 500, 500, 500 };
    double priceStatic[staticSize]
    {
        250.05 * 0.8, 200.55 * 0.8, 500 * 0.8, 200 * 0.8, 200 * 0.8,
        550 * 0.8, 250 * 0.8, 350 * 0.8, 450 * 0.8, 460 * 0.8
    };

    supplierSize = staticSize;
    supplierIdArr = new size_t[supplierSize];
    supplierNameArr = new std::wstring[supplierSize];
    supplierCountArr = new size_t[supplierSize];
    supplierPriceArr = new double[supplierSize];

    for (size_t i = 0; i < supplierSize; i++)
    {
        supplierIdArr[i] = idStatic[i];
        supplierNameArr[i] = nameStatic[i];
        supplierCountArr[i] = countStatic[i];
        supplierPriceArr[i] = priceStatic[i];
    }
    isSupplierCreated = true;
}

void ShowSupplier(int mode)
{
    if (!isSupplierCreated) CreateSupplier();

    system("cls");
    std::wcout << L"\n\n\t\tСклад поставщика \"Watermelon\"\n\n";
    std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t\t"
        << L"Кол-во\t" << L"Цена закупки\t\n\n";

    for (size_t i = 0; i < supplierSize; i++)
    {
        std::wcout << supplierIdArr[i] << L"\t" << std::left << std::setw(40)
            << supplierNameArr[i] << L"\t" << supplierCountArr[i]
            << L"\t" << supplierPriceArr[i] << L"\n";
    }
    std::wcout << L"\n\n";
    system("pause");
}

bool SellToShop(size_t id, size_t count)
{
    if (!isSupplierCreated) CreateSupplier();
    if (id >= supplierSize || count == 0 || count > supplierCountArr[id])
        return false;
    supplierCountArr[id] -= count;
    return true;
}

