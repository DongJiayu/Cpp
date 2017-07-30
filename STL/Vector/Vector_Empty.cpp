// Vector_Capacity.cpp
// Visual Studio 2015
// Create Time : 2017/07/30

/* vector::empty - Tests if the vector is empty
bool empty() const;
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	cout << "Vector is ";
	v.empty() ? cout << "" : cout << "not ";
	cout << "empty" << endl;					// OUTPUT: Vector is empty
	
	v.push_back(100);

	v.empty() ? cout << "" : cout << "not ";
	cout << "empty" << endl;					// OUTPUT: Vector is not empty

	return 0;
}