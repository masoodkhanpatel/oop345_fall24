//#include <iostream>
//
//class animal {
//public:
//	virtual void makessound() = 0;
//	//virtual void dosomething() = 0;
//};
//
//class animalconc : public animal {
//public:
//	virtual void makessound() {
//
//	};
//};
//
//class dog :public animal {
//public:
//	void makessound() {
//		std::cout << "dog\n";
//	}
//};
//
//class cat :public animal {
//public:
//	void makessound() {
//		std::cout << "cat\n";
//	}
//};
//
//class bird :public animal {
//	void makessound() {
//		std::cout << "bird\n";
//	}
//};
//
//class reptile :public animal {
//	void makessound() {
//		std::cout << "reptile\n";
//	}
//};
//
//class lizard :public reptile {
//	void makessound() {
//		std::cout << "lizard\n";
//	}
//};
//
//
//
//void callsound(animal& abc) {
//	abc.makessound();
//}
//
//int main() {
//	dog a;
//	cat b;
//	bird c;
//	reptile r;
//
//	//a.makessound();
//	//b.makessound();
//
//	callsound(a);
//	callsound(b);
//	callsound(c);
//	callsound(r);
//
//	int i = 9;
//
//	while (i==0) {
//		{
//			i = 9;
//		}
//	}
//}