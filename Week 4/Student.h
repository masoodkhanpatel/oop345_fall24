#include "SID.h"

class Student  {
	SID* id{};
public:
	~Student() {
		delete id;
	};
};


class Section {
	Student* students;
public:
	~Section() {

	}
};