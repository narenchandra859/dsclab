#include<iostream>
#include<cstdlib>
using namespace std;
void bubble(int *a,int n);
int main()
{
	cout<<"\nEnter the size of array ";
	int n;
	cin>>n;
	int *a=(int *)malloc((sizeof(int))*n);
	cout<<"\nEnter the elements ";
	for(int i = 0;i<n;i++)
		cin>>a[i];
	bubble(a, n);
	cout<<"\nSorted array ";
	for(int i = 0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	free(a);
	return 0;
}
void bubble(int *a,int n)
{
	int i, j, temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}			
