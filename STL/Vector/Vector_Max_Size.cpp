// Vector_Max_Size.cpp
// Visual Studio 2015
// Create Time : 2017/07/31

/* vector::max_size - Returns the maximum length of the vector.
size_type max_size( ) const;
*/

#include <vector>
#include <iostream>

int main()
{
	using namespace std;
	vector <int> v1;
	vector <int>::size_type i;

	i = v1.max_size();
	cout << "The maximum possible length of the vector is " << i << "." << endl;			// OUTPUT: The maximum possible length of the vector is 1073741823.

}