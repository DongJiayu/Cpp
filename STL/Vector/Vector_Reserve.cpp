// Vector_Reserve.cpp
// Visual Studio 2015
// Create Time : 2017/08/01

/* vector::reserve - Reserves a minimum length of storage for a vector object, allocating space if necessary.
void reserve(size_type _Count);		// _Count : the minimum length of storge to be allocated for the vector
*/

#include <vector>
#include <iostream>

int main()
{
	using namespace std;
	vector <int> v1;

	v1.push_back(1);
	cout << "Current capacity of v1 = " << v1.capacity() << endl;			// OUTPUT: Current capacity of v1 = 1


	v1.reserve(20);
	cout << "Current capacity of v1 = " << v1.capacity() << endl;			// OUTPUT: Current capacity of v1 = 20
}