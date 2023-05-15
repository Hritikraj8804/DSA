#include<iostream>
#include<stack>
using namespace std;

int main()
{
	//creation of stack
	stack<int> s;
	
	// push operation
	s.push(2);
	s.push(3);
	
	//pop
	s.pop();
	
	cout<< "printing top element " << s.top() << endl;
	
	if(s.empty())
	{
		cout << "Stack is empty " << endl;
	}
	else
	{
		cout << "Stack is not empty " << endl;
	}
	
	cout << "Size of Stack " << s.size() << endl;


	return 0;
}

