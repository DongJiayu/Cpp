// Vector_Capacity.cpp
// Visual Studio 2015
// Create Time : 2017/07/30

/* vector::end - returns the past-the-end iterator
iterator end();
const_iterator end() const;
*/

#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
using namespace std;

int main()
{
	vector<int> v(5);
	
	vector<int>::iterator It = v.begin();
	while (It != v.end())
		cout << *It++ << " ";
	cout << endl;

	// last element of the vector
	It = v.end() - 1;
	cout << *It << endl;

	return 0;
}