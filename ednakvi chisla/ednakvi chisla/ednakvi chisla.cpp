
#include <iostream>
using namespace std;
int main()
{
	int n = 1000;



	for (int i = 100; i < n; i++) {
		int first = i / 100 % 10;
		int second = i / 10 % 10;
		int thirt = i  % 10;
		
		if (first == second && first ==  thirt && second == thirt){
			cout << "  " << i;
		}

	//}
	
	//for (int i = 1; i <= 9; i++) {
		//for (int k = 1; k <= 9; k++) {
			//for (int j = 1; j <= 9; j++) {
				//if (i == k && j == k && i == j) {
					//cout << " " << k << j << i;
				//}
			//}
		//}
	//}








}