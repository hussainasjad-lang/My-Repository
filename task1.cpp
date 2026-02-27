#include <iostream>
using namespace std;
template <class t>
class student
{

	t marks[10];
	string name;
public:

	void input(t m[], int size, string n);
	void display();
	void totalMarks();
	void averageMarks();
	void highestMark();




};


template<class t>
void student<t> ::input(t m[], int size, string n)
{
	name = n;

	for (int i = 0; i < size; i++)
	{
		marks[i] = m[i];
	}
}

template<class t>
void student<t> ::display()
{
	
	cout << "name is " << name << endl;
	for (int i = 0; i < size; i++)
	{
		cout << marks[i];
	}
	cout << endl;
}

template<class t>
void student<t> ::totalMarks()
{
	
	t total;

	for (int i = 0; i < size; i++)
	{
	    total=total+ marks[i];
	}
	cout << "total is " << total << endl;
}

int main()
{
	student<int>a;

}
