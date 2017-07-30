// Vector_Capacity.cpp
// Visual Studio 2015
// Create Time : 2017/07/30

/* vector::clear - Erases the elements of the vector
void clear();
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <class T>
class Print
{
public:
	void operator () (T& t)
	{
		cout << t << " ";
	}
};

//----------------------------
int main()
{
	vector<int> v(10);
	Print<int> print;
	fill(v.begin(), v.end(), 5);
	cout << "Vector v: ";					// OUTPUT: Vector v : 5 5 5 5 5 5 5 5 5 5
	for_each(v.begin(), v.end(), print);	// ???????
	cout << endl;
	cout << "Size of v = " << v.size() << endl;		// OUTPUT: Size of v = 10
	cout << "v.clear" << endl;
	v.clear();
	cout << "Vector v : ";			
	for_each(v.begin(), v.end(), print);		// OUTPUT: Vector v :
	cout << endl;
	cout << "Size of v = " << v.size() << endl;		// OUTPUT: Size of v = 0
	cout << "Vector v is ";
	v.empty() ? cout << " " : cout << "not ";		// OUTPUT: Vector v is empty
	cout << "empty" << endl;

	return 0;

}