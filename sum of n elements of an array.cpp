#include<iostream>
using namespace std;
int main()
	
	{
		int i;
		int array[5] = {5,7,8,9,10};
		int sum = 0;
		for(i=0; i<5; i++)
		{
		    sum = sum + array[i];
		}
		cout<< sum<<endl;
		return 0;
	}