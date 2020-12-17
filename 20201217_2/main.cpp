#include <iostream>
using namespace std;
int a,n,S;

int main()
{
    //Luka, type your code below!
	cin >> a;
	n = 1;
	while (a >= n){
		S = S + n;
		n = n + 1;
	}
cout << S << endl;
cout << (a * (a + 1) ) / 2;
	return 0;
}
 