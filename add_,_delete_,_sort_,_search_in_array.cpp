#include <iostream>
using namespace std;

void add(int ar[] ,int a);
void del(int ar[] ,int a);
void sort(int ar[] ,int a);
void search(int ar[] ,int a);

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

void del(int ar[] ,int a)
	{
		int i,x;
	cout<<"enter the number array : "<<endl;
	for(i=0;i<=3;i++)
	cin>>ar[i];
	cout<<"the number array is : "<<endl;
	for( i=0;i<=3;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
	cout<<"index array : "<<endl;
	cin>>x;
	--x;
	for(i=x;i<4;i++)//
	{
		ar[i]=ar[i+1];
	}
	cout<<"the new array is : "<<endl;
	for(i=0;i<3;i++)
	cout<<ar[i]<<" ";
	}

void sort(int ar[] ,int a)
	{
		int i,b=0,x;
	cout<<"enter the number array : "<<endl;
	for(i=0;i<=3;i++)
	cin>>ar[i];
	cout<<"the number array is : "<<endl;
	for( i=0;i<=3;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
	
	cout<<"1)sort ascending .  "<<endl;
	cout<<"2)sort dscending ."<<endl;
	cout<<"choose : ";
	cin>>x;
	
	if(x==1)
	{
		for(int i=0;i<=3;i++)
	for(int j=0;j<=3;j++)
	if(ar[i]<ar[j])
	{
		b=ar[j];
		ar[j]=ar[i];
		ar[i]=b;
	}
	for(int i=0;i<=3;i++)
	cout<<ar[i]<<endl;
	}
	else if(x==2)
	{
	for(int i=0;i<=3;i++)
	for(int j=0;j<=3;j++)
	if(ar[i]>ar[j])
	{
		b=ar[j];
		ar[j]=ar[i];
		ar[i]=b;
	}
	for(int i=0;i<=3;i++)
	cout<<ar[i]<<endl;	
	}
	
	}

	void search(int ar[] ,int a)
	{
		int i,number,b=0;
	cout<<"enter the number array : "<<endl;
	for(i=0;i<=3;i++)
	cin>>ar[i];
	cout<<"the number array is : "<<endl;
	for( i=0;i<=3;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
	cout<<"search number : ";
	cin>>number;
	for( i=0;i<=3;i++)
	if(ar[i]==number)
	b++;
	if(b==1)
	cout<<"found";
	else
	cout<<"not found";
	
	}
