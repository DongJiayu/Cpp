// Vector_Push_Back_And_Pop_Back.cpp
// Visual Studio 2015
// Create Time : 2017/08/01

/* vector::push_back - adds an element to the end of the vector
void push_back(const T& Val);		// Val : the value to assign to the element added to the end of the vector
void push_back(T&& Val);
*/

/*vector:pop_back - deletes the element at the end of the vector
void pop_back();
*/

#include <vector>
#include <iostream>

using namespace std;

template<typename T> 
void print_elem(const T& t)
{
	cout << "(" << t << ")";
}

template<typename T> 
void print_collection(const T& t)
{
	cout << " " << t.size() << " elements: ";

	for (const auto& p : t)
	{
		print_elem(p);
	}
	cout << endl;
}

int main()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
		v.push_back(10 + i);

	cout << "vector data: " << endl;					// OUTPUT: vector data:
	print_collection(v);								// OUTPUT: 10 elements: (10) (11) (12) (13) (14) (15) (16) (17) (18) (19)

	// pop_back() until it's empty, printing the last element as we go
	while (v.begin() != v.end())						
	{
		cout << "v.back(): ";
		print_elem(v.back());
		cout << endl;
		v.pop_back();
	}

	return 0;
}