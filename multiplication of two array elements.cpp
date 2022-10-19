#include<iostream>
using namespace std;
	
	int main()
	{
		int arr1[5] = {2,4,6,7,8};
		
		int arr2[5] = {1,2,3,4,5};
		
		for(int i = 0; i < 5; i++)
		{
			arr1[i] = arr1[i] * arr2[i];
		}
		
		cout<< "The sum of the arrays is : "<<endl;
		
		for( int i = 0; i< 5; i++)
		{
			cout<< arr1[i] << " ";
			cout<<" " <<endl;
		}
		return 0;
	}