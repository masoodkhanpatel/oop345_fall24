//// Two-Dimensional Arrays
//// passRow.cpp
//
//#include <iostream>
//
//#define NCOLS 3
//
//void foo(int a[], int c);
//
//int main()
//{
//	int a[2][NCOLS] = { {11, 12, 13}, {21, 22, 23} }; // 2X3 static array
//	foo(a[0], NCOLS); // pass first row, passing 1d array from 2d array
//	foo(a[1], NCOLS); // pass second row, passing 1d array from 2d array
//
//
//}
//
//void foo(int a[], int c) // no need to specify the number of columns
//{
//    for (int i = 0; i < c; i++)
//        std::cout << a[i] << ' ';
//    std::cout << std::endl;
//}