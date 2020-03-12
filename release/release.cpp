#include <string>

#include<iostream>
using namespace std;
int main() {
	int num[100];
	int den[100];
	int res[100];
	int n = 3;
	int i, a, b;

	
	for (int i = 0; i < n; i++) {

		cout << "Entrez le numrateur de fraction #" << i + 1 << " : " << endl;
		cin >> num[i];
		cout << "Entrez le denominateur de fraction #" << i + 1 << " : " << endl;
		cin >> den[i];
		a = __max(num[i], den[i]);
		b = __min(num[i], den[i]);

		do {
			res[i] = b;
			b = a % b;
			a = res[i];

		} while (b != 0);
	}


	
	return 0;



}