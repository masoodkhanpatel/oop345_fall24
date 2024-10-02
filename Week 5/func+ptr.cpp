//// Function Pointers
//// function_pointers.cpp
//
//#include <iostream>
//
//
//// ascending order comparison
//template <typename T>
//bool ascending(T a, T b) { return a > b; }
//
//// descending order comparison
//template <typename T>
//bool descending(T a, T b) { return a < b; }
//
//// bubble sort
//template <typename T>
//void sort(T* a, int n, bool (*comp)(T, T))
//{
//    for (int i = n - 1; i > 0; i--)
//        for (int j = 0; j < i; j++)
//            if (comp(a[j], a[j + 1]))
//            {
//                T temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//}
//
//template <typename T>
//void display(T* a, int n)
//{
//    for (int i = 0; i < n; i++)
//        std::cout << a[i] << ' ';
//    std::cout << std::endl;
//}
//
//bool add(int a, int b) {
//    return a + b;
//}
//
//bool add2(int a, int b) {
//    return a + b;
//}
//
//
//
//int main()
//{
//    int a[] = { 1, 5, 2, 3, 6, 7, 2 }; // 4*7
//    int n = sizeof a / sizeof(int); // (4*7)/4
//
//    bool (*sorts[4])(int, int) = { ascending, descending, add, add2 };
//
//    sort(a, n, sorts[0]);
//    display(a, n);
//
//    sort(a, n, sorts[1]);
//    display(a, n);
//
//}