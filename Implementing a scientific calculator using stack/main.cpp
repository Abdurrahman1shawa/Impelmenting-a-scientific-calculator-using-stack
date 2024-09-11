
#include <iostream>
#include "Stack.h"
using namespace std;
//template<class t>
//
//class stack{
//	struct Item
//	{
//		t Value;
//		Item* LastItemPtr;
//	};
//	Item *top, *current;
//
//public:
//	stack() {
//		top = NULL;
//	}
//
//	void push(t newItem) {
//		Item* newItemPtr = new Item;
//		newItemPtr->Value = newItem;
//		newItemPtr->LastItemPtr = top;
//		top = newItemPtr;
//
//	}
//	
//	void is_Empty() {
//		return top == NULL;
//	}
//
//	void pop() {
//		if (!is_Empty()) {
//			Item* temp = top;
//			top = top->LastItemPtr;
//			delete temp;
//		}
//		else {
//			cout << "Stack is empty";
//		}
//
//	}
//
//	void display() {
//		current = top;
//		cout << "[ ";
//
//		while (current != NULL) {
//			cout << current->Value << " ";
//			current = current->LastItemPtr;
//		}
//
//		cout << "] ";
//	}
//
//};
//

int main()
{
    Stack s;
	s.push(12);
	s.push(14);
	s.push(14);
	s.pop();
	s.push(16);
    s.display();
}

