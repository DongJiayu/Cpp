// Vector_Begin.cpp
// Visual Studio 2015
// Create Time : 2017/07/30

/* vector::begin - returns a random-access iterator to the first element in the vector
const_iterator begin() const;
iterator begin();
*/

#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
using namespace std;

int main()
{
	vector<int> c1;
	vector<int>::iterator c1_Iter;
	vector<int>::const_iterator c1_cIter;

	c1.push_back(1);
	c1.push_back(2);

	// OUTPUT: The vector c1 contains elements: 1 2
	cout << "The vector c1 contains elements:";
	c1_Iter = c1.begin();
	for (; c1_Iter != c1.end(); c1_Iter++)
	{
		cout << " " << *c1_Iter;
	}
	cout << endl;

	// OUTPUT: The vector c1 now contains elements: 20 2
	cout << "The vector c1 now contains elements:";
	c1_Iter = c1.begin();
	*c1_Iter = 20;
	for(; c1_Iter != c1.end(); c1_Iter++)
	{
		cout << " " << *c1_Iter;
	}
	cout << endl;

	// The following line would be an error because iterator is const
	// *c1_cIter = 200;
}