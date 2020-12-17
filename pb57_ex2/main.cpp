#include <iostream>
using namespace std;
int mn,n;

int main()
{
    //Luka, type your code below!
	cout << "n: " ;
	cin >> n;
	mn = n;
	while (n != 0){
		if(mn> n){
		mn = n;
		
		}
	cout << "n: " ;
	cin >>  n;
		
	}
	cout << "min:" << mn;
	return 0;
}
