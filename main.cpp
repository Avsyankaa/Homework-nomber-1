#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;
int add (int a,int b)
{
	return a+b;
}
int sub (int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
double div (double a,int b)
{
	double rez;
	rez= a/b;
	return rez;
}
int mod(int a,int b)
{
	cout<< "Enter a value for the module"<< endl;
	int m;
	cin>>m;
	return ((a-b)%m);
}
double pow (double a)
{
	cout<< "Enter a value for the power"<< endl;
	int p;
	cin>>p;
	return pow(a,p);
}
int rol (int a)
{
	return (a<<1);
}
int ror (int a)
{
	return (a>>1);
}
int nott (int a)
{
	return (!a);
}
int andd ( int a,int b)
{
	return (a&b);
}
int orr (int a,int b)
{
	return (a|b);
}
int main() 
{
while (1) 
{
			cout<<endl<<"Select the operation [+, -, *, /, %, ^, !, &, |, <, >]"<< endl;
	char operand;
	cin>> operand;
	int a,b;
	switch (operand)
	{
		case '+':
			cout<< "Enter the first figure"<< endl;
	        cin>>a;
			cout<< "Ener the second figure"<< endl;
	        cin>>b;
			cout<<add(a,b)<<endl;
			break;
		case '-':
			cout<< "Enter the first figure"<< endl;
	        cin>>a;
			cout<< "Enter the second figure"<< endl;
        	cin>>b;
			cout<< sub(a,b)<< endl;
			break;
		case '*':
			cout<< "Enter the first figure"<< endl;
	        cin>>a;
			cout<< "Enter the second figure"<< endl;
	        cin>>b;
			cout<< mul(a,b)<< endl;
			break;
		case '/':
			cout<< "Enter the first figure"<< endl;
	        cin>>a;
			cout<< "Enter the second figure"<< endl;
	        cin>>b;
	        if (b!=0)
	        {
			cout<< div (double(a),b)<<endl;
		    }
		    else 
		    cout << "Error.There are 0 in the denominator "<< endl;
			break;
		case '%':
			cout<< "Enter the first figure"<< endl;
	        cin>>a;
			cout<< "Enter the second figure"<< endl;
	        cin>>b;
			cout<< mod (a,b)<<endl;
			break;
		case '^':
			cout<< "Enter a figure"<< endl;
	        cin>>a;
			cout<< pow((double)a);
			break;
		case '<':
			cout<< "Enter a figure"<< endl;
	        cin>>a;
			cout<< rol(a)<< endl;
			break;
		case '>':
			cout<< "Enter a figure"<< endl;
	        cin>>a;
			cout << ror (a)<<endl;
			break;
		case '!':
			cout<< "Enter a figure"<< endl;
	        cin>>a;
			cout << nott (a)<<endl;
			break;
		case '&':
			cout<< "Enter the first figure"<< endl;
	        cin>>a;
	        cout<< "Enter the second figure"<< endl;
	        cin>>b;
			cout << andd (a,b)<<endl;
			break;
		case '|':
			cout<< "Enter the first figure"<< endl;
	        cin>>a;
	        cout<< "Enter the second figure"<< endl;
	        cin>>b;
			cout << orr (a,b)<<endl;
			break;
		default: 
			cout<< "Error"<<endl;
	}
}
	return 0;
}
