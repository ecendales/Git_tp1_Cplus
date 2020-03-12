#include <string>

#include<iostream>
using namespace std;
int main() {
	int num[100];
	int den[100];
	int res[100];
	int n, i, a, b;

	do {
		cout << "Entrez le nombre de fractions" << endl;
		cin >> n;

	} while (n <= 0);
	for (int i = 0; i < n; i++) {

		cout << "Entrez le numerateur de fraction #" << i + 1 << " : " << endl;
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


	for (int i = 0; i < n; i++) {
		cout << "\nEntre (" << num[i] << " et " << den[i] << ") LE PGCD est: " << res[i] << "  simplification " << num[i] / res[i] << "/" << den[i] / res[i];

	}


	return 0;



}
