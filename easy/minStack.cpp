#include <iostream>
#include <string>
#include <math.h>
/*
#define INI_SIZE 100
class MinStack 
{
private:
	int *p;
	int m_top;
	int maxSize;
public:
	MinStack()
	{
		maxSize = INI_SIZE;
		p = new int[maxSize];
		m_top = -1;
	}

	void tryResize()
	{
		int curSize = abs(m_top);
		if (curSize > 0.8 * maxSize)
		{
			int tempMaxSize = maxSize * 1.2;
			int *temp = new int[tempMaxSize];
			memcpy(temp, p, sizeof(int) * tempMaxSize);
			delete p;
			p = temp;
			maxSize = tempMaxSize;
		}
		else if ((curSize < 0.3 * maxSize) && (curSize > INI_SIZE))
		{
			int tempMaxSize = maxSize / 2;
			int *temp = new int[tempMaxSize];
			memcpy(temp, p, sizeof(int) * tempMaxSize);
			delete p;
			p = temp;
			maxSize = tempMaxSize;
		}
	}
	bool isEmpty()
	{
		return m_top < 0;
	}
	void push(int x)
	{
		tryResize();
		p[++m_top] = x;
	}
	

	void pop()
	{
		if (isEmpty())
		{
			std::cerr <<"stack is empty";
			return;
		}
		tryResize();
		if (m_top > -1) --m_top;
	}

	int top()
	{
		if (isEmpty())
		{
			std::cerr <<"stack is empty" ;
			return 0;
		}
		return p[m_top];
	}

	int getMin() 
	{
		if (isEmpty())
		{
			std::cerr <<"stack is empty";
			return 0;
		}
		int min = p[0];
		for (int i = 1; i <= m_top; i++)
		{
			if (p[i] < min)
			{
				min = p[i];
			}
		}
		return min;

	}
};
*/


class Node
{
public:
	Node* front;
	int value;
	Node* next;
	Node(Node* _front, int _value, Node* _next)
		: front(_front), value(_value), next(_next){};
};
class MinStack
{
private:
	Node *header;
	Node *p;
	int size;
public:
	MinStack()
	{
		header = NULL;
		p = header;
		size = 0;
	}

	bool isEmpty()
	{
		return p == NULL;
	}
	void push(int x)
	{
		Node *node = new Node(p, x, NULL);
		if (p == NULL)
		{
			header->next = node;
		}
		p = node;
	}
	void pop()
	{
		if (isEmpty())
		{
			std::cerr << "stack is empty";
			return;
		}
		Node* temp = p;
		p = p->front;
		delete temp;
	}

	int top()
	{
		if (isEmpty())
		{
			std::cerr << "stack is empty";
			return 0;
		}
		return p->value;
	}

	int getMin()
	{
		if (isEmpty())
		{
			std::cerr << "stack is empty";
			return 0;
		}
		int min = header->next->value;
		for (Node* q = header->next; q != p; q = q->next)
		{
			if (q->value < min)
			{
				min = q->value;
			}
		}
		return min;

	}
};

void main()
{
	MinStack ms;
	for (int i = 0; i > -10001; i--)
	{
		ms.push(i);
	}
	std::cout << "ms.top():" << ms.top() << std::endl;
	std::cout << "ms.getMin()" << ms.getMin() << std::endl;
	system("pause");
}