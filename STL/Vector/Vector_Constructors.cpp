//2017/07/29
//Vector

/* Constructors of Vector
vector();
explicit vector(const Allocator& Al);		// Al:the allocator class to use with this object.
explicit vector(size_type Count);			// Count: the number of elements in the constructed vector
vector(size_type Count, const Type& Val);	// Val: the value of the elements in the constructed vector
vector(size_type Count, const Type& Val, const Allocator& Al);
vector(const vector& Right);				// Right: the vector of which the constructed vector is to be a copy
vector(vector&& Right);
vector(initialize_list<Type IList, const _Allocator& Al);		// IList: the initializer_list containing the elements to copy

template<class InputIterator>
vector(InputIterator First, InputIterator Last);		// First: Position of the first element in the range of elements to be copied
template<class InputIterator>
vector(InputIterator First, InputIterator Last, const Allocator& Al);
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
//---------------------------------------------------------------------------------------------------------
	string str[] = { "Alex", "John", "Robert" };

	//empty vector object
	vector<int> v1;
	//creates vector with 10 empty elements
	vector<int> v2(10);
	//creates vector with 10 elements, and assign value 0 for each
	vector<int> v3(10, 0);
	//creates vector and assigns values from string array
	vector<string> v4(str + 0, str + 3);
	vector<string>::iterator sIt = v4.begin();
	while (sIt != v4.end())
		cout << *sIt++ << " ";
	cout << endl;

	//copy constructor
	vector<string> v5(v4);
	for (int i = 0; i < 3; i++)
		cout << v5[i] << " ";
	cout << endl;

	vector<int> v6{ { 1, 2, 3, 4 } };
	
	return 0;
}