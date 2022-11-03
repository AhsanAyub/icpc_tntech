#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int i, j, n;
			
	
	for(i = 1; i <= 5; ++i){
		for(j = 1; j <= 5; ++j){
			cin >> n;
			
			if(n) break;
		}

		if(n) break;
	}

	cout << abs(i - 3) + abs(j - 3) << endl;
	return 0;
}
