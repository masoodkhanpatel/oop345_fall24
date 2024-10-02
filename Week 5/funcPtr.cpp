//
//#include <iostream>
//#include <functional>
//
////template <typename T>
////int add(T a, T b) {
////	return return a+b;
////}
//
//int add(int a, int b) {
//	return  a+b;
//}
//
//int sub(int a, int b) {
//	return  a - b;
//}
//
//int mul(int a, int b) {
//	return a * b;
//}
//
//int callFunction(int a, int b, int (*func)(int, int))
//{
//	return func(a, b);
//}
//
//int callFunction(int a, int b, std::function<int(int,int)> func2)
//{
//	return func2(a, b);
//}
//
//void print_num(int i)
//{
//	std::cout << i << '\n';
//}
//
//int main() {
//	std::cout << callFunction(3, 4, add) << std::endl;
//	std::cout << callFunction(3, 4, sub) << std::endl;
//	std::cout << callFunction(3, 4, mul) << std::endl;
//
//	std::function<int(int, int)> abc = add;
//	std::cout << callFunction(3, 4, abc) << std::endl;
//
//	auto add2 = [](int x, int y) {return x + y; };
//	// auto -> std::function<int(int,int)
//	std::cout << add2(5, 10) << std::endl;
//
//	std::function<void()> f_display_42 = []() { print_num(42); };
//
//}