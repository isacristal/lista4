#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int x, y;
	
	do {
	
	cout << "Digite um n�mero de 1 a 10: ";
	cin >> x;
	
	if (x < 1 || x > 10) {
		cout << "N�mero inv�lido." << endl;
	}
	
	} while (x < 1 || x > 10);
	
	for (y = 0; y <= 10; y++) {
		cout << x << " x " << y << " = " << ( x*y ) << endl;
	}
	
	return 0.;
}
