
#include <iostream>
#include "Stack.h"
using namespace std;

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

