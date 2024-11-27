#include <iostream>

template<typename T>
class Data {
	T value;
public:
	Data(T v) : value(v) {}
	T get() const { return value; }
};

template<typename T>
class Node
{
public:
	Data<T> data; // data
	Node* next; // pointer to next node

	Node(int d, Node* n) : data(d), next(n) {}
};

int main()
{
	Node<int>* head = nullptr;

	// Add one element at a time to the head of the chain
	head = new Node<int>(3, head);
	head = new Node<int>(5, head);
	head = new Node<int>(9, head);
	head = new Node<int>(8, head);
	head = new Node<int>(22, head);
	head = new Node<int>(33, head);

	// head -> 8 -> 9 -> 5 -> 3 -> nullptr

	// Display elements from head to tail
	for (Node<int>* p = head; p; p = p->next) // p!= nullptr
		std::cout << p->data.get() << ' ';
	std::cout << std::endl;

	// De-allocate memory one element at a time
	//while (head) // head != nullptr
	//{
	//	Node* temp = head;
	//	head = head->next;
	//	delete temp;

	//}

	//Node* temp = head;
	//head = head->next;
	//delete temp;

	//temp = head;
	//head = head->next;
	//delete temp;

	//while (head) // head != nullptr
	//{
	//	Node* temp = head;
	//	head = head->next;
	//	delete temp;
	//}

//	std::cout << "After deleting all elements:" << std::endl;
//	// Display elements from head to tail
//	for (Node* p = head; p; p = p->next) // p!= nullptr
//		std::cout << p->data << ' ';
//	std::cout << std::endl;
}