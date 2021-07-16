#include<iostream>
#include<string>
using namespace std;

int main(void) {
	int i;
	string S;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin >> S;
	for(i = 0; i < alphabet.length(); i++) {
		cout << (int)S.find(alphabet[i]) << " ";
	}
	return 0;
}
