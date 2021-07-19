#include<iostream>
using namespace std;

int main(void) {
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string s;
	char result;
	int array[26] = {0,};
	cin >> s;
	for(int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}
	for(int i = 0; i < s.length(); i++) {
		for(int j = 0; j < alphabet.length(); j++) {
			if(s[i] == alphabet[j]) {
				array[j]++;
			}
		}
	}
	int max = 0;
	for(int i = 0; i < sizeof(array)/sizeof(int); i++) {
		if(array[i] > max) {
			max = array[i];
		}
	}
	return 0;
}
