// Vector_Swap.cpp
// Visual Studio 2015
// Create Time : 2017/08/01

/* vector::swap - Exchanges the elements of two vectors.
void swap(vector<Type, Allocator>& _Right);
friend void swap(vector<Type, Allocator >& _Left, vector<Type, Allocator >& _Right);

Parameters:
_Right
A vector providing the elements to be swapped, or a vector whose elements are to be exchanged with those of the vector _Left.
_Left
A vector whose elements are to be exchanged with those of the vector _Right.
*/

#include <vector>
#include <iostream>

int main()
{
	using namespace std;
	vector <int> v1, v2;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	v2.push_back(10);
	v2.push_back(20);

	cout << "The number of elements in v1 = " << v1.size() << endl;
	cout << "The number of elements in v2 = " << v2.size() << endl;
	cout << endl;

	v1.swap(v2);

	cout << "The number of elements in v1 = " << v1.size() << endl;
	cout << "The number of elements in v2 = " << v2.size() << endl;

	return 0;
}

//OUTPUT:
// The number of elements in v1 = 3
// The number of elements in v2 = 2

// The number of elements in v1 = 2
// The number of elements in v2 = 3

