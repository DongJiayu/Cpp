// Vector_Resize.cpp
// Visual Studio 2015
// Create Time : 2017/08/01

/* vector::resize - Specifies a new size for a vector.
void resize( size_type Newsize );						// Newsize : the new size of the vector
void resize( size_type Newsize, Type Val );				// Val: The initialization value of new elements added to the vector 
                                                        //      if the new size is larger than the original size

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	vector<int> v(5);
	for (int i = 0; i < 5; i++)
		v[i] = i * 2;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.resize(7, 100);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.resize(4);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}

//OUTPUT:
// 0 2 4 6 8
// 0 2 4 6 8 100 100
// 0 2 4 6