//2017/07/29
//Vector

/* assign : Erases a vector and copies the specified elements to the empty vector
void assign(size_type Count, const Type& Val);		
void assign(initializer_list<Type> IList);
template<class InputIterator>
void assign(InputIterator First, InputIterator Last);
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	int ary[] = { 1,2,3,4,5 };
	vector<int> v;

	// assign to the "v" the contains of "ary"
	v.assign(ary, ary + 5);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));		//********* OUTPUT 1 2 3 4 5
	cout << endl;

	// replace v for 3 copies of 100
	v.assign(3, 100);
	copy(v.begin(), v.end(), ostream_iterator(cout, " "));
	cout << endl;

	v.assign({ 5,6,7 });
	return 0;
}