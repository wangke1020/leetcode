#include <iostream>
#include <stack>
using namespace std;



class Queue {
private:
	stack<int> s;
	stack<int> temp_s;
public:
	// Push element x to the back of queue.
	void push(int x) {
		s.push(x);
	}

	// Removes the element from in front of queue.
	void pop(void) {
		if (s.empty()) throw;
		while (!s.empty())
		{
			temp_s.push(s.top());
			s.pop();
		}
		temp_s.pop();
		while (!temp_s.empty())
		{
			s.push(temp_s.top());
			temp_s.pop();
		}
	}

	// Get the front element.
	int peek(void) {
		if (s.empty()) throw;
		while (!s.empty())
		{
			temp_s.push(s.top());
			s.pop();
		}
		int value = temp_s.top();
		while (!temp_s.empty())
		{
			s.push(temp_s.top());
			temp_s.pop();
		}
		return value;
	}

	// Return whether the queue is empty.
	bool empty(void) {
		return s.empty();
	}
};
int main()
{
	const char* p = R"x()")x";
	cout << p << endl;
	getchar();
}