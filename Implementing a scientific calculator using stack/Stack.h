
#ifndef Stack_h

#define Stack_h


class Stack {


public:
	struct Item
	{
		double Value;
		Item* LastItemPtr;
	};
	Item* top, * current;
	Stack();
	void push(double newItem);
	void pop();
	bool is_Empty();
	void display();

};

#endif // !1

