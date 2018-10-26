/*
g++ -o bytes.out bytes.cpp 
chmod +x bytes.out
./bytes.out
*/

#include <iostream>
#include <bitset>
#include <string>

using namespace std;

typedef bitset<8> byte;

int main(){

	byte a = 0;
	byte b = 0;
	byte c2 = 0;
	unsigned short input = 0;

	system("clear");
	cout << "\n\n\033[1;34m*** PRACTICE WITH BINARY NUMBERS ***\033[0m\n" << endl;	

	cout << "Enter a number between 0 - 255 for a: ";
	cin >> input;
	while (input > 255){
		cout << "Error, enter a number between 0 - 255: ";
		cin >> input;		
	}
	a = input;

	cout << "Enter a number between 0 - 255 for b: ";
	cin >> input;
	while (input > 255){
		cout << "Error, enter a number between 0 - 255: ";
		cin >> input;		
	}
	b = input;

	cout << "\nDecimal a \033[1;32m" << a.to_ulong() << "\033[0m is in binary \033[1;36m" << a << "\033[0m" << endl;
	cout << "Decimal b \033[1;32m" << b.to_ulong() << "\033[0m is in binary \033[1;36m" << b << "\033[0m" << endl;

    c2 = ((byte)a.to_ulong()).flip().to_ulong()+1;
 
	cout << endl;
	cout << "\033[1;34m OPERATOR     " << "DECIMAL     " << "RESULT\033[0m" << endl;
	cout << "---------------------------------"<< endl;
	cout << "\033[1;35m   NOT a     \033[1;36m" << (~a)     << "      \033[1;32m" << (~a).to_ulong() << "\033[0m" << endl;
	cout << "\033[1;35m a AND b     \033[1;36m" << (a & b)  << "      \033[1;32m" << (a & b).to_ulong() << "\033[0m" << endl;
	cout << "\033[1;35m  a OR b     \033[1;36m" << (a | b)  << "      \033[1;32m" << (a | b).to_ulong() << "\033[0m" << endl;
	cout << "\033[1;35m a XOR b     \033[1;36m" << (a ^ b)  << "      \033[1;32m" << (a xor b).to_ulong() << "\033[0m" << endl;
	cout << "\033[1;35m    2C a     \033[1;36m" << c2       << "      \033[1;32m" << c2.to_ulong() << "\033[0m" << endl;
	cout << "\033[1;35m  a << 1     \033[1;36m" << (a << 1) << "      \033[1;32m" << (a << 1).to_ulong() << "\033[0m" << endl;
	cout << "\033[1;35m  a << 2     \033[1;36m" << (a << 2) << "      \033[1;32m" << (a << 2).to_ulong() << "\033[0m" << endl;
	cout << "\033[1;35m  a << 3     \033[1;36m" << (a << 3) << "      \033[1;32m" << (a << 3).to_ulong() << "\033[0m" << endl;
	cout << "\033[1;35m  b >> 1     \033[1;36m" << (b >> 1) << "      \033[1;32m" << (b >> 1).to_ulong() << "\033[0m" << endl;
	cout << "\033[1;35m  b >> 2     \033[1;36m" << (b >> 2) << "      \033[1;32m" << (b >> 2).to_ulong() << "\033[0m" << endl;
	cout << "\033[1;35m  b >> 3     \033[1;36m" << (b >> 3) << "      \033[1;32m" << (b >> 3).to_ulong() << "\033[0m" << endl;

	cout << "\nThank you for using this program.\n"<< endl;

	return 0;
}