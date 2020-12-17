#include <iostream>
using namespace std;
int a, b;
int main()
{
    cin >> a >> b;
    if(a % 10 > b % 10){
		cout << a;
	}
	else{
		cout << b;
}
}