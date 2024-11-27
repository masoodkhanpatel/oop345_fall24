//#include <iostream>
//
//int main() {
//	int arr[10][10] = { {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
//						{11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
//						{21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
//						{31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
//						{41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
//						{51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
//						{61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
//						{71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
//						{81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
//						{91, 92, 93, 94, 95, 96, 97, 98, 99, 100} };
//
//	// print a row
//	for (int i = 0; i < 10; i++) {
//		std::cout << arr[0][i] << " ";
//	}
//	std::cout << std::endl;
//
//	// print everything
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	std::cout << std::endl;
//
//	int temp[10][10];
//	// swap rows with columns
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			temp[i][j] = arr[j][i];
//		}
//	}
//
//	// replace arr with temp
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			arr[i][j] = temp[i][j];
//		}
//	}
//
//	// print everything
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	//dyanmic array 2d array, 5x5
//	int** dynamicArr = new int* [5];
//	for (int i = 0; i < 5; i++) {
//		dynamicArr[i] = new int[5];
//	}
//
//	// fill the array
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			dynamicArr[i][j] = i * j;
//		}
//	}
//
//	// print the array
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			std::cout << dynamicArr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	// delete the array
//	for (int i = 0; i < 5; i++) {
//		delete[] dynamicArr[i];
//	}
//
//	return 0;
//}