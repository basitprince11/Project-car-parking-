#include<iostream>


using namespace std;


int main()
{
	int  u_input;
	int amount=0,count=0;
	
	//menu
	while(true)
	{
		cout<<"press 1 for rickshaw"<<endl;
		cout<<"press 2 for car"<<endl;
		cout<<"press 3 for Bus"<<endl;
		cout<<"press 4 to show the record"<<endl;
		cout<<"press 5 to delete the record"<<endl;
		cin>>u_input;
		
		if (u_input==1)
		{
			amount =amount + 100;
			count = count + 1;
		}
		else if(u_input==2)
		{
			amount = amount + 200;
			count = count + 1;
		}
		else if (u_input==3)
		{
			amount = amount + 300;
			count = count + 1;
		}
		else if ( u_input==4)
		{
			cout<<"the total amount = "<<amount<<endl;
			cout<<"the total number of vehicles parked = "<<count<<endl;
		}
		else if ( u_input==5)
		{
			amount = 0;
			count = 0;
		}
		else{
			cout<<"Invalid number"<<endl;
		}
		

	}
	return 0;
}
