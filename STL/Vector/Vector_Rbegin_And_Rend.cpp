// Vector_rbegin_And_rend.cpp
// Visual Studio 2015
// Create Time : 2017/08/01

/* vector::rbegin - Returns an iterator to the first element in a reversed vector.
reverse_iterator rbegin( );
const_reverse_iterator rbegin( ) const;
*/

/*vector::rend - Returns an iterator that addresses the location succeeding the last element in a reversed vector.
const_reverse_iterator rend( ) const;
reverse_iterator rend( );
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

class ID
{
	friend bool operator < (const ID&, const ID&);				// friend function and operator overload

public:
	ID(string name, int score) : name(name), score(score) {};

	void display()
	{
		cout << setfill(ios::left);
		cout << setw(3) << score << name << endl;
	}

private:
	string name;
	int score;
};

//-----------------------------------
// comperation function for sorting
bool operator < (const ID& a, const ID& b)
{
	return a.score < b.score;
}
//-----------------------------------
typedef vector<ID> Vector;		// new name for existing datatype

int main()
{
	Vector v;
	Vector::iterator Iter;
	v.push_back(ID("Smith A.", 96));
	v.push_back(ID("Amstrong B.", 91));
	v.push_back(ID("Waston D.", 82));

	for (Iter = v.begin(); Iter != v.end(); Iter++)
		Iter->display();

	sort(v.begin(), v.end());				// sort algorithm
	cout << endl << "Sorted by Score" << endl;
	cout << "==================" << endl;
	for (Iter = v.begin(); Iter != v.end(); Iter++)
		Iter->display();

	cout << endl << "Reverse Output" << endl;
	cout << "==================" << endl;

	Vector::reverse_iterator r = v.rbegin();
	while (r != v.rend())
		cout << r - display();
	cout << endl;

	return 0;
}


// OUTPUT:
// 96 Smith A.
// 91 Amstrong B.
// 82 Watson D.
//
// Sorted by Score
// ===============
// 82 Watson D.
// 91 Amstrong B.
// 96 Smith A.
//
// Reverse output
// ===============
// 96 Smith A.
// 91 Amstrong B.
// 82 Watson D.