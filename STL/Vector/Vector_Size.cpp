// Vector_Size.cpp
// Visual Studio 2015
// Create Time : 2017/08/01

/* vector::size - Returns the number of elements in the vector.
size_type size( ) const;
*/

#include <vector>
#include <iostream>

int main()
{
	using namespace std;
	vector <int> v1;
	vector <int>::size_type i;

	v1.push_back(1);
	i = v1.size();
	cout << "Vector length is " << i << "." << endl;

	v1.push_back(2);
	i = v1.size();
	cout << "Vector length is now " << i << "." << endl;
}

// OUTPUT
// Vector length is 1.
// Vector length is now 2.
