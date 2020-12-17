#include <iostream>
using namespace std;
int h,m,x;
int main()
{
    //Luka, type your code below!
	cin >> h >> m >> x;
	h = h + x / 60;
	m = x % 60 + m;
	h = h + m / 60;
	m = m % 60;
	h = h % 24;
	cout << h<<" : "<<m;
	return 0;
}
