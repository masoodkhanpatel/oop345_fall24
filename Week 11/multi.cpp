//#include <iostream>
//
//// typedef unsigned long int ulong;
//#define ulong unsigned long int
//
//class Shape
//{
//public:
//	virtual double volume() const = 0;
//};
//
//class Emitter
//{
//public:
//	virtual ulong emission() const = 0;
//};
//
//class Cube : public Shape
//{
//	double len;
//public:
//	Cube(double a) {
//		len = a;
//	}
//	double volume() const {
//		return len * len * len;
//	}
//};
//
//class LitObj : public Emitter
//{
//	ulong color;
//public:
//	LitObj(ulong c) { color = c; };
//	ulong emission() const {
//		return color;
//	}
//};
//
//class LitCube : public Cube, public LitObj
//{
//public:
//	LitCube(double a, ulong c) : Cube(a), LitObj(c) {}
//
//};
//
//int main()
//{
//	LitCube lc(2, 0xccdd33ffUL);
//
//	std::cout << "volume   = " << lc.volume() << std::endl;
//	std::cout << "emission = " << std::hex << lc.emission() << std::dec << '\n';
//}