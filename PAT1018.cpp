#include <iostream>
#include <vector>

using namespace std;
int a_w = 0;
int b_w = 0;
int a_b = 0;
int a_B = 0;
int a_C = 0;
int a_J = 0;
int b_B = 0;
int b_C = 0;
int b_J = 0;
int judge(char A,char B)
{
	if(A==B)
	{
		a_b++;
		return 0;
	}
	else if(A=='B'&&B=='C')
	{
		a_w++;
		a_B++;
		return 1;
	}
	else if(A=='B'&&B=='J')
	{
		b_w++;
		b_J++;
		return -1;
	}
	else if(A=='C'&&B=='B')
	{
		b_w++;
		b_B++;
		return -1;
	}
	else if(A=='C'&&B=='J')
	{
		a_w++;
		a_C++;
		return 1;
	}
	else if(A=='J'&&B=='C')
	{
		b_w++;
		b_C++;
		return -1;
	}
	else if(A=='J'&&B=='B')
	{
		a_w++;
		a_J++;
		return 1;
	}
	else
	{
		return -2;
	}
}

int main(int argc, char **argv) {
	int n;
	cin >> n;
	while(n!=0)
	{
		char A,B;
		cin >> A >> B;
		judge(A,B);
		cin.clear();
		n--;
	}
	cout << a_w << " "<<a_b <<" "<<b_w<<endl;
	cout << b_w << " "<<a_b <<" "<<a_w<<endl;
	if(max(max(a_B,a_C),a_J)==a_B)
	{
		cout << "B ";
	}
	else if(max(max(a_B,a_C),a_J)==a_C)
	{
		cout << "C ";	
	}
	else
	{
		cout << "J ";
	}
	if(max(max(b_B,b_C),b_J)==b_B)
	{
		cout << "B";
	}
	else if(max(max(b_B,b_C),b_J)==b_C)
	{
		cout << "C";	
	}
	else
	{
		cout << "J";
	}
	cout << endl;
	return 0;
}
