// Vector_Erase.cpp
// Visual Studio 2015
// Create Time : 2017/07/31

/* vector::erase - Removes an element or a range of elements in a vector from specified positions.
iterator erase(const_iterator_Where);						//  _Where : Position of the element to be removed from the vector;
iterator erase(const_iterator _First,const_iterator_Last);	//  _First : Position of the first element removed from the vector;	
															//  _Last : Position just beyond the last element removed from the vector.
*/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v(10);
	vector<int>::iterator It;

	for (int i = 0; i < 10; i++)
		v[i] = i + 1;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));		// OUTPUT: 1 2 3 4 5  6 7 8 9 10
	cout << endl;
	It = v.begin() + 2;

	//remove third element
	v.erase(It);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));		// OUTPUT: 1 2 4 5 6 7 8 9 10
	cout << endl;
	It = v.begin();

	// remove 2 elements from beginning of v
	v.erase(It, It + 2);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));		// OUTPUT: 4 5 6 7 8 9 10

	return 0;
}