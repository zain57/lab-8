#include<iostream>
#include<iomanip>
using namespace std;
void print_array(int arr[][20],int a)
{
	int c;
	int d;
	cout<<"\n\n"<<setw(4)<<"";
	for(c=0;c<a;c++)
	{
		cout<<setw(3)<<"("<<c+1<<")";
		cout<<"\n\n";
	}
	for(c=0;c<a;c++)
	{
		cout<<setw(3)<<"("<<c+1<<")";
		for(d=0;d<a;d++)
		{
			cout<<setw(4)<<arr[c][d];
			
		}
		cout<<"\n\n";
	}
}
int main()
{char ch;
	int choice;
	do{
	cout<<"1.undirected graph"<<endl;
	cout<<"2.directed graph"<<endl;
	cout<<"3.weighted graph"<<endl;
	cout<<"enter your choice=";
	cin>>choice;
	switch(choice)
	{
		case 1:{
				int i, j, v;
 
	cout<<"Enter the number of vertexes: ";
	cin>>v;
 
	int  arr[20][20];
 
	cout<<"\n";
	for(i = 0; i < v; i++)
	{
		for(j = i; j < v; j++)
		{
			if(i!=j)
			{
				cout<<"Enter 1 if the vertex "<<i+1<<" is adjacent to "<<j+1<<", otherwise 0: ";
				cin>>arr[i][j];
				arr[j][i]=arr[i][j];
		}
		else
		arr[i][j]=0;
		}
	}
 
	print_array(arr, v);
	}
	break;
	case 2:
		{
			int i, j, v;
 
	cout<<"Enter the number of vertexes: ";
	cin>>v;
 
	int  arr[20][20];
 
	cout<<"\n";
	for(i = 0; i < v; i++)
	{
		for(j = 0; j < v; j++)
		{
				cout<<"Enter 1 if the vertex "<<i+1<<" is directed to "<<j+1<<", otherwise 0: ";
				cin>>arr[i][j];
		}
	}
 
	print_array(arr, v);}
			break;
		}
		cout<<"do you want to continue Y/N";
		cin>>ch;
}while((ch=='Y')||(ch=='y'));
}
	

