#include<iostream>
#include "Stack.h"
using namespace std;



Stack::Stack() {
	top = NULL;
}

void Stack::push(double newItem) {
	Item* newItemPtr = new Item;
	newItemPtr->Value = newItem;
	newItemPtr->LastItemPtr = top;
	top = newItemPtr;
}

bool Stack::is_Empty() {
	return top == NULL;
}
void Stack::pop() {
	if (!is_Empty()) {
		Item* temp = top;
		top = top->LastItemPtr;
		delete temp;
	}
	else {
		cout << "Stack is empty";
	}
}

void Stack::display() {
	current = top;
	cout << "[ ";

	while (current != NULL) {
		cout << current->Value << " ";
		current = current->LastItemPtr;
	}

	cout << "] ";
}




