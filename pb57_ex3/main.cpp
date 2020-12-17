#include <iostream>
using namespace std;
int a,x,y,z,c;
int main()
{
    //Luka, type your code below!
	cout << "a:";
	cin >> a;
	while(a % 10 != 0){
		if(a > 99 && a < 1000){
			x = a / 100;
			y = a /10 %10;
			z = a % 10;
			if(x !=y && x != z && y != z){
				c++;
							cout << x << " " << y << " " << z<< endl ;

			}
		}
			cout << "a:";
	cin >> a;
	}
	cout << "numere cu trei cifre distincte sunt :  " << c << endl; 
	return 0;
}
