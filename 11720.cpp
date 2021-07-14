/*
#include<iostream>
using namespace std;

int main(void){
	int count, i, sum = 0, num;
	cin >> count;
	cin >> num;
	for(i = 0; i < count; i++) {
		sum += (num%10);
		num /= 10;
	}
	cout << sum << endl;
	return 0;
}*/ // 2147483647 이상의 수가 들어오면 오버플로가 발생하므로 제대로된 연산이 불가능함. 
#include<iostream> 
using namespace std;

int main(void){
	int count, sum = 0, i;
	char num;
	
	cin >> count;
	
	for(i = 0; i < count; i++) {
		cin >> num;
		sum += (num - 48);
	}
	cout << sum << endl;
}
