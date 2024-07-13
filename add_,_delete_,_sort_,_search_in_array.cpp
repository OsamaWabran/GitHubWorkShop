#include <iostream>
using namespace std;

void add(int ar[] ,int a);

int main(){
	
	int ar[4];
	int a;
	do
	{
		cout << "========================\n" << endl;
		cout << "choose opertain : " << endl;
		cout << "1) Add in array . " << endl;
		cout << "2) Delete in array . " << endl;
		cout << "3) Sorting in array . " << endl;
		cout << "4) Search in array . " << endl;
		cout << "for end program enter ( 0 ) " << endl;
		cout << "========================\n" << endl;
		
		cout << "The opertain is : ";
		cin>>a;
		
		if(a==1)
		add(ar,4);
		else if(a==2)
		del(ar,4);
		else if(a==3)
		sort(ar,4);
		else if(a==4)
		search(ar,4);
		else if(a==0)
		cout << "Thank you for using my program " << endl;
		else
		cout << "sorry ... try again " << endl;
		
	} while (a>0);
	
}

void add(int ar[] ,int a)
	{
		int i,x,y;
	cout<<"enter the number array : "<<endl;
	for(i=0;i<=3;i++)
	cin>>ar[i];
	cout<<"the number array is : "<<endl;
	for( i=0;i<=3;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
	cout<<"index array : "<<endl;
	cin>>x;
	cout<<"the new number :"<<endl;
	cin>>y;
	x--;
	for(i=3;i>=x;i--)//
	{
		ar[i+1]=ar[i];
	}
	ar[x]=y;
	cout<<"the new array is : "<<endl;
	for(i=0;i<=4;i++)
	cout<<ar[i]<<" ";
	
	}




