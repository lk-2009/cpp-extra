#include <iostream>
using namespace std;
int f1, f2  ,a1 ,a2, m1 , m2;
int main()
{
    //Luka, type your code below!
	cin >> f1 >> f2 >> a1 >> a2;
	m1 = f1 * 60 +f2;
	m2 = a1 * 60 + a2;
	if (m1 > m2 ){
		cout << "Alex";
	}else if (m1 < m2) {
		cout <<"Florin";
	} else {
		cout << "amandoi odata";
	}
	return 0;
}
