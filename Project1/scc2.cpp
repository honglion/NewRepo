#include "include.h"

using namespace std;
template<typename T, typename Ty>
class Object
{
public:
	void hello(const string& s)
	{
		cout << "hello" << s << endl;
	}
};

Object<int, double> a; 


int main()
{

	vector<int> v0{ 1,2,3 };
	vector<int> v1{ 4,5,6 };

	&v0;
	

}

void ex4()
{
	const int c = 0;
	auto& rc = c;
	auto rc2 = rc;
}


func(a,b)
a + b

func()