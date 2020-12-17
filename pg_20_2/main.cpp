#include <iostream>
using namespace std;
int a, b;

int main()
{
    //Luka, type your code below!
	cin >> a >> b;
	cout << a << " " << b << endl ;
	if(a > b){
		a = a * 2;
		b = b * 3;
	}
	else {
		a = a * 3;
		b = b * 2;
	}
	 cout << a + b;
}
