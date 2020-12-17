#include <iostream>
using namespace std;
int a, b, c;
int main()
{
    // Luka, type your code below!
    cin >> a >> b;
	if (a % 2 == 1){
		c = (b + 1)/2 - (a + 1)/2 + 1;
	}else {
		c = (b + 1)/2 - (a+ 1)/2;
	}
    cout << c ;
}
