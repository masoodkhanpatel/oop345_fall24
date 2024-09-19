//// Unions
//// union.cpp
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//enum class Months {
//    January,
//    Feb,
//    March,
//    September,
//    October
//};
//
//union Product // some instances have skus, other have upcs, but not both
//{
//    int sku;
//    char upc[13];
//};
//
//int main()
//{
//    Product cereal, tissue;
//
//    Months thisMonth, nextMonth, prevMonth;
//    thisMonth = Months::September;
//    nextMonth = Months::October;
//
//    std::string September;
//
//    std::cout << September;
//
//    cereal.sku = 4789; // upc is invalid for cereal
//    // sku is invalid for tissue
//    std::strcpy(tissue.upc, "0360002607555");
//
//    std::cout << cereal.sku << std::endl;
//    std::cout << tissue.upc << std::endl;
//
//    std::cout << cereal.upc << std::endl;
//    std::cout << tissue.sku << std::endl;
//
//    std::strcpy(cereal.upc, "0360002607555");
//    std::cout << cereal.sku << std::endl;
//    std::cout << cereal.upc << std::endl;
//    std::cout << tissue.upc << std::endl;
//
//}