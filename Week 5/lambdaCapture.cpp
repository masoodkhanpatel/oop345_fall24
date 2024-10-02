//#include <iostream>
//
//template<typename T>
//int add(int i, T func)
//{
//	return func(i);
//}
//
//template<typename T>
//int sub(int i, T func)
//{
//	return func(i);
//}
//
//int main() {
//	//int a = 3;
//	//std::cout << &a << std::endl;
//	//// [] -> capture list, 
//	//// how to collect variables outside of lambda expression
//
//	//auto incrementNum = [&](int& n) {
//	//	std::cout << &n << std::endl; 
//	//	n++; 
//	//	};
//	//
//	//incrementNum(a);
//	//std::cout << a << std::endl;// guessing: 4, actual: 3
//
//	//int k = 4;
//
//	//auto addk = [&](int i) { 
//	//	k++;
//	//	return i + k; 
//	//	};
//
//	//std::cout << add(10, addk) << std::endl; // 15
//	//std::cout << k << std::endl; // 5
//
//	//auto subk = [&](int i) { 
//	//	k--; // 4
//	//	return i - k; 
//	//	};
//	//std::cout << sub(10, subk ) << std::endl; // 6
//
//	//std::cout << k << std::endl; // 4
//
//	int a = 3, b = 9, c = 33;
//	auto inc = [=,&b,&c](int &abc) {
//		abc++;
//		b++;
//		c++;
//		};
//	inc(a);
//	std::cout << a << " " << b << " " << c;
//
//}