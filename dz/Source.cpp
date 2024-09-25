#include <iostream> 
#include<string> 
#include<windows.h> 

using namespace std; 
int main()
{	
	int a1 = 3, a2 = 60, b1 = 0, c1 = a1+b1, q1=17;
	int c2 = a1-b1,c3 = a1 - b1, c4 = a1 + b1, c5 = a1 * b1;
	int i = 0, b = 5, s1 = 155;
	int w1, e1, r1 , i1, i2;
	
	if (c1 == c3) 
	{
		cout << "true" << endl; 
	}
	if (a1 == 3) 
	{
		cout << "12" << endl; 
		cin >> b1; 
		cout << "13 " << endl; 
		cin >> c1;  
		cout << "14" << s1 << endl;
	}
	if (q1!= 5) 
	{
		cout << "15" << endl; 
		cin >> w1;
		cout << "16" << endl; 
		cin >> e1;
		r1 = 99; 
		cout << "17" << r1 << endl;
	}
	if (a1 > b1 && c2 < c1) 
	{
		cout << "true" << endl; 
	}
	else 
	{ 
		cout << "false" << endl; 
	} 
	if (c5 > c3 || c5 < c3)
	{
		cout << "true" << endl;
	}
	else 
	{ 
		cout << "false" << endl; 
	}
	
	while (i < 10 && b < 10)
	{
		i++; 
		i1 = r1+c5;  
		i2 = a1+c1;
		cout << i1 << endl; 
		cout << i2 << endl;   
		b++;
	}
}
