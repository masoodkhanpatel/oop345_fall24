//// Dynamically Allocated 2d Arrays
//// dynamic2D.cpp
//
//#include <iostream>
//#include <iomanip>
//
//class Student {
//public:
//    char* name;
//	Student(const char* n) {
//		name = new char[strlen(n) + 1];
//		strcpy(name, n);
//	}
//};
//
//
//int main()
//{
//    int c, r;
//    int** a;  // points to row addresses
//
//    std::cout << "Number of rows : ";
//    std::cin >> r;
//    std::cout << "Number of columns : ";
//    std::cin >> c;
//
//    a = new int* [r]; // for row addresses
//
//    for (int i = 0; i < r; i++)
//        a[i] = new int[c]; // for elements of row i
//
//    for (int i = 0; i < r; i++)
//        for (int j = 0; j < c; j++)
//            a[i][j] = (i + 1) * (j + 1);
//
//    std::cout << "   ";
//
//    for (int j = 0; j < c; j++)
//        std::cout << std::setw(4) << j + 1;
//    std::cout << std::endl;
//
//    for (int i = 0; i < r; i++)
//    {
//        std::cout << std::setw(3) << i + 1;
//        for (int j = 0; j < c; j++)
//            std::cout << std::setw(4) << a[i][j];
//        std::cout << std::endl;
//    }
//
//    for (int i = 0; i < c; i++)
//        delete[] a[i]; // de-allocate row i
//    delete[] a; // de-allocate pointers to rows
//	// **a is a pointer to a pointer, so we need to delete the pointers to rows first, then delete the pointer to the pointers to rows
//    
//    r = 5;
//    c = 10;
//	Student** students = new Student * [r];
//	for (int i = 0; i < r; i++) {
//		students[i] = new Student[c];
//	}
//
//    // fill students[0], first row with student objects
//	students[0][0] = Student("John");
//
//}