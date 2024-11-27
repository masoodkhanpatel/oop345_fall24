#include <iostream>

typedef unsigned long ulong;

class Name // vtable for Name class, display()
{
	const char* name;
protected:
	Name(const char* n) {
		name = n;
	};
public:
	virtual void display() const {
		std::cout << "Name::display() : ";
		std::cout << name << std::endl;
	}
};

class NCube : virtual public Name // vtable for NCube class, volume()
	// vptr for NCube points to Name
{
	double len;
public:
	NCube(const char* n, double l) : Name(n) {
		len = l;
	}
	double volume() const {
		return len * len * len;
	}
};

class NLitObj : virtual public Name
	// vtable for NLitObj class, emission()
	// vptr for NLitObj points to Name
{
	ulong color;
public:
	NLitObj(const char* n, ulong c) : Name(n) {
		color = c;
	}
	ulong emission() const {
		return color;
	}
};

class NLitCube : public NCube, public NLitObj
{
public:
	NLitCube(const char* n, double l, ulong c) : NCube(n, l), NLitObj(n, c) {
	}
};

int main()
{
	NCube    sc("a named cube", 2);
	sc.display();

	NLitObj  sl("a named lit object", 0x55bb77aaUL);
	sl.display();

	NLitCube lc("a named lit cube", 2, 0xccFF33FFUL);

	lc.NCube::display();   // through NCube
	lc.NLitObj::display(); // through NLitObj

	// lc.display(); // error: ambiguous
	lc.display();
}

/***
* 
* NCube, inheriting virtually Name
* NLitObj, inheriting virtually Name
* NCube, NLitObj have vptr directing to the same Name
* 
* NLitCube, inheriting NCube, NLitObj
* NLitCube has vptr directing to NCube, NLitObj
* 
* 
* 
***/