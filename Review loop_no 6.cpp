#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float nVelocity, nTime, nDistance, i;
	
	cout<<"What is the speed of the vehicle in mph? "; cin>>nVelocity;
	cout<<"How many hours has it traveled? "; cin>>nTime;
	cout<<"Hour  Distance Traveled"<<endl;
	cout<<"-----------------------"<<endl;
	
	i=1;
	
	while(i<=nTime)
	{
		nDistance = nVelocity*i;
		cout<<" "<<i<<setw(10)<<nDistance<<endl;
		i++;		
	}
	
	
}
