// Vector_Front.cpp
// Visual Studio 2015
// Create Time : 2017/07/31

/* vector::front - Returns a reference to the first element in a vector.
reference front( );
const_reference front( ) const;
*/

#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

/* Example One
int main()
{
using namespace std;
vector <int> v1;

v1.push_back(10);
v1.push_back(11);

int& i = v1.front();
const int& ii = v1.front();

cout << "The first integer of v1 is " << i << endl;
// by incrementing i, we move the the front reference to the second element
i++;
cout << "Now, the first integer of v1 is " << i << endl;
}
*/

// Example Two
template<class T, class D>
class Member
{
public:
	Member(T t, D d) : name(t), sal(d) {};
	void print();
	
private:
	T name;
	D sal;
};

template<class T, class D>
void Member::print()
{
	cout << name << " " << sal << endl;
}

//-------------------------------------------------
int main()
{
	typedef Member<string, double> M;		//*******************************
	vector<M> v;

	v.push_back(M("Linda", 75000));
	v.push_back(M("Robert", 60000));

	vector<M>::iterator It = v.begin();
	cout << "Entire vector:" << endl;
	while (It != v.end())
		(It++)->print();					//******************************* 
	cout << endl;
	cout << "Return from front()" << endl;
	v.front().print();

	return 0;
}