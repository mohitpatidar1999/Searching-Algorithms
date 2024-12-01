#include<iostream>
using namespace std;
class search
{
	public:
		int linear_search(int *,int,int);
		int binary_search(int *,int,int);
};
int search:: linear_search(int arr1[],int size,int value)
{
	for(int i=0;i<size;i++)
	{
		if(arr1[i]==value)
		{
			cout<<"Value found at location"<<i<<endl;
			return (i);
		}
	}
	cout<<"Not found"<<endl;
	return -1;
}
int search::binary_search(int arr2[],int size1,int v)   		//your list should be sorted
{
	int lb=0,ub=size1-1,mid,f=0;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(arr2[mid]==v)
		{
			f=1;
			cout<<"Element found at index "<<" "<< mid <<endl;
			return mid;
		}
		if(arr2[mid]<v)
		   lb=mid+1;
		if(arr2[mid]>v)
		   ub=mid-1;
	}
	if(f==0)
	{
		cout<<"Not found"<<endl;
		return -1;
	}
}
main()
{
	
	search s1;
	int x,s,value,choice;
	do{
		cout<<"Enter ur choice "<<endl;
	 	cout<<"1. Linear Search"<<endl;
		cout<<"2. Binary Search"<<endl;
		cout<<"3. Exit"<<endl;
		cin>> choice;
			if(choice==3)
				exit(0);
		cout<<"Enter array size"<<endl;
		cin>>s;
		int a[s];
		cout<<"Enter "<< s <<" elements"<<endl;
		for(int i=0;i<s;i++)
		{
			cin>>a[i];
		}
		cout<<"Enter a number which u want to search in this array"<<endl;
		cin>>value;
	switch(choice)
		{
			case 1:
				x=s1.linear_search(a,s,value);	
				break;
			case 2:
				x=s1.binary_search(a,s,value);
				break;
		}
	}while(choice!=3);
	
}










