/*
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 

입력
첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.

출력
첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.
*/
#include<iostream>
using namespace std;

int temp[3];

int solution(int num) // num이 세자리수일  때 
{ 
	int i, d;
	for(i = 0; i < 3; i++) {
		temp[i] = num%10;
		num /= 10;
	}
	d = temp[1] - temp[2];
	if(d == temp[0] - temp[1]) {
		return 1;
	}
	else {
		return 0;
	}
}
int main(void)
{
	int i, num, count;
	cin >> num;
	if(num == 1000){
		cout << "144" << endl;
		return 0;
	}
	if((num / 100 )== 0)
	{
		cout << num << endl;
	}
	else {
		count = 99;
		for(i=100; i <= num; i++) {
			count += solution(i);
		}
		cout << count << endl;
	}
	return 0;
}

