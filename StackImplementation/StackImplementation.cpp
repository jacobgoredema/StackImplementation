// StackImplementation.cpp : main project file.

#include "stdafx.h"
#include<iostream>

using namespace System;




# define maxSize 10


class Stack
{
	int top;
	int a[maxSize];

public:
	Stack();
	bool isFull();
	bool isEmpty();
	void Push(int x);
	void Pop();
	void Display();
	void Top();
	void Size();
};

// initialize the top of Stack top using default constructor
Stack::Stack()
{
	top = 0;
}

//if the top of stack is equal to maximum element allowed in stack, its full in size and cant push elements
bool Stack::isFull()
{
	if (top == maxSize)
		return true;
	else
		return false;	
}

//if the top of stack is 0, its empty and nothing to pop from stack
bool Stack::isEmpty()
{
	if (top == 0)
		return true;
	else
		return false;
}

// add elements to stack
void Stack::Push(int x)
{
	if (isFull())
	{
		using namespace std;
		cout << "Stack is full" << endl;
		return;
	}
	else
		// if stack is not full, element is pushed into stack at the top index of stack array.
		a[top] = x;

	top++;
}

// remove elements from the stack
void Stack::Pop()
{
	if (isEmpty())
	{
		std::cout << "There are no items to display." << std::endl;
		return;
	}
	else
		// if stack is not empty elements can be removed out of the stack.
		top--;

	std::cout << "popped " << a[top] << std::endl;

}

//dispay the elements of the stack
void Stack::Display()
{
	int i;
	if (top == 0)
		std::cout << "There are no items to display.";
	else
	{
		std::cout << "Displaying" << std::endl;

		//loop through the elements of the stack
		for (i=0; i < top; i++)
		{
			std::cout << a[i] << std::endl;
		}
	}
}

// display the top most element inthe array of stack
void Stack::Top()
{
	std::cout << "Top is " << a[top - 1] << std::endl;
}

void Stack::Size()
{
	std::cout << "Size of Stack is " << top << std::endl;
}

int main(array<System::String ^> ^args)
{
	Stack stack;
	int character, element, result;

	while (1)
	{
		std::cout << "*===========================================================================================*" << std::endl;
		std::cout << "1.Push	2.POP	3.Display	4.ISFULL	5.ISEMPTY	6.TOP	7.SIZE	8.EXIT" << std::endl;
		std::cout << "*===========================================================================================*" << std::endl;

		std::cin >> character;
		if (character == 1)
		{
			std::cout << "enter an Element ";
			std::cin >> element;
			stack.Push(element);
		}
		else if (character == 2)
		{
			stack.Pop();
		}
		else if (character == 3)
		{
			stack.Display();
		}
		else if (character == 4)
		{
			if (stack.isFull())
				std::cout << "Stack is full" << std::endl;
			else
				std::cout << "Stack is not full" << std::endl << "You can still push more items" << std::endl;
		}
		else if (character == 5)
		{
			if (stack.isEmpty())
				std::cout << "Stack is empty" << std::endl;
			else
				std::cout << "Stack is not empty" << std::endl << "You can still pop" << std::endl;
		}
		else if (character == 6)
		{
			stack.Top();
		}
		else if (character == 7)
		{
			stack.Size();
		}
		else
			return 0;
	}

	return 0;
}
