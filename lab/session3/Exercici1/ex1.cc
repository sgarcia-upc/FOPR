#include <iostream>
using namespace std;

int main () 
{
	int mes,dia;

	cin>>dia;
	cin>>mes;
	
	if ((dia >= 21 && mes == 1) or mes == 2 or (mes == 3 and dia < 21))
		cout << "Hivern" << endl;
		
	if ((dia >= 21 and mes == 3) or mes == 4 or mes == 5 or (mes == 6 and dia < 21))
		cout << "Primavera" << endl;
		
	if ((dia >= 21 and mes == 6) or mes == 7 or mes == 8 or (mes == 9 and dia < 21))
		cout << "Estiu" << endl;
		
	if ((dia >= 21 and mes == 9) or mes == 10 or mes == 11 or mes == 12 or (mes == 1 and dia < 21))
		cout << "Tardor" << endl;

}

