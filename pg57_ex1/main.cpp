#include <iostream>
using namespace std;
int i,S,n;
int main()
{
    //Luka, type your code below!
	cin >> n;
	i = 1; // i

	
	while (i > 0 && n >= i){
		S +=  i;
		i +=  2;
	}

	cout << S;
	return 0;
}
