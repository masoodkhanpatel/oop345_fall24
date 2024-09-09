#include <iostream>

class Student {
	int sid;
public:
	Student(int a) {
		sid = a;
	}
	int getSID() {
		return sid;
	}
};

int main() {

	Student s2(56);
	Student* s1 = new Student(23);
	std::cout << s1->getSID() << "\n";
	std::cout << s2.getSID() << "\n";
	//delete s1;
}