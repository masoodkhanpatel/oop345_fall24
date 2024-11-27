//// Two-Dimensional Arrays
//// pass2DArray.cpp
//
//#include <iostream>
//
//#define NCOLS 3
//
//void foo(int a[][NCOLS], int r, int c);
//void foo(int a[][2], int r, int c);
//
//int main()
//{
//	int a[2][NCOLS] = { {11, 12, 13}, {21, 22, 23} }; // static 2D array
//	int b[2][2] = { {1, 2}, {3, 4} }; // static 2D array
//	foo(a, 2, 3); // a[2][3] is passed to foo
//	foo(b, 2, 2); // b[2][2] is passed to foo
//}
//
//void foo(int a[][2], int r, int c)
//{
//	std::cout << "foo(int a[][2], int r, int c)" << std::endl;
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//            std::cout << a[i][j] << ' ';
//        std::cout << std::endl;
//    }
//}
//
//void foo(int a[][3], int r, int c)
//{
//	std::cout << "foo(int a[][3], int r, int c)" << std::endl;
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//            std::cout << a[i][j] << ' ';
//        std::cout << std::endl;
//    }
//}