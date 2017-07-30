// Vector_Capacity.cpp
// Visual Studio 2015
// Create Time : 2017/07/30

/* vector::capacity - returns the number of elements that the vector could contian without allocating more storage
size_type capacity() const;
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(10);
	cout << "Size of v = " << v.size() << endl;		// OUTPUT: Size of  v = 10
	cout << "Capacity of v = " << v.capacity() << endl;		// OUTPUT: Capacity of v =10

	v.resize(100);
	cout << "After resizing:" << endl;
	cout << "Size of v = " << v.size() << endl;		// OUTPUT: Size of  v = 100
	cout << "Capacity of v = " << v.capacity() << endl;		// OUTPUT: Capacity of v =100

	return 0;
}