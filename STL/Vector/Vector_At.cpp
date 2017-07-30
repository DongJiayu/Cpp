//2017/07/29
//Vector
/*vector::at - returns a reference to the element at a specified location in the vector
reference at(size_type _Pos);		// _Pos : the subscript of the element to reference in the vector
const_reference at(size_type _Pos) const;
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(3, 0);			// creates vector with 3 elements, and assign value 0 for each
	v[0] = 100;						// assigns 100 to v[0]
	v.at(1) = 200;					// assigns 200 to v[1]
	for (int i = 0; i < 3; i++)
		cout << v.at(i) << " ";		// output 100 200 0
	cout << endl;

	return 0;
}