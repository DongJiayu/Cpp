// Vector_Insert.cpp
// Visual Studio 2015
// Create Time : 2017/07/31

/* vector::insert - Inserts an element or a number of elements or a range of elements into the vector at a specified position.
iterator insert(const_iterator _Where, const Type& _Val);		// _Where: The position in the vector where the first element is inserted
iterator insert(const_iterator _Where,Type&& _Val);				// _Val : The value of the element being inserted into the vector
void insert(const_iterator _Where, size_type _Count, const Type& _Val);		// _Count : The number of elements being inserted into the vector

template<calss InputIterator>
void insert(const_iterator _Where, InputIterator _First, InputIterator _Last);	// _First: The position of the first element in the range of elements to be copied.
																				// _Last: The position of the first element beyond the range of elements to be copied
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v1;
	vector<int>::iterator Iter;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	cout << "v1 = ";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)						// OUTPUT: v1 = 10 20 30
		cout << " " << *Iter;
	cout << endl;

	v1.insert(v1.begin() + 1, 40);											
	cout << "v1 = ";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)						// OUTPUT: v1 = 10 40 20 30
		cout << " " << *Iter;
	cout << endl;

	v1.insert(v1.begin() + 2, 4, 50);
	cout << "v1 = ";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)						// OUTPUT: v1 = 10 40 50 50 50 50 20 30
		cout << " " << *Iter;
	cout << endl;

	v1.insert(v1.begin() + 1, v1.begin() + 2, v1.begin() + 4);
	cout << "v1 = ";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)						// OUTPUT: v1 = 10 40 50 50 50 50 20 30
		cout << " " << *Iter;
	cout << endl;

	// initialize a vector of vectors by moving v1
	vector< vector<int> > vv1;

	vv1.insert(vv1.begin(), move(v1));
	if (vv1.size() != 0 && vv1[0].size() != 0)
	{
		//vector< vector<int> >::iterator Iter;
		vector<int>::iterator Iter;
		cout << "vv1[0] =";
		for (Iter = vv1[0].begin(); Iter != vv1[0].end(); Iter++)			// OUTPUT: vv1[0] = 10 50 50 40 50 50 50 50 20 30
			cout << " " << *Iter;
		cout << endl;
	}
}