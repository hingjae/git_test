/*
� ���� ���� X�� �� �ڸ��� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�. ���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�. N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

�Է�
ù° �ٿ� 1,000���� �۰ų� ���� �ڿ��� N�� �־�����.

���
ù° �ٿ� 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����Ѵ�.
*/
#include<iostream>
using namespace std;

int temp[3];

int solution(int num) // num�� ���ڸ�����  �� 
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

