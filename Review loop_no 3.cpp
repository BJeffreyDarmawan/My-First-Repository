#include<iostream>

using namespace std;

int main()
{
	float nRise, nYear, nLevel;
	
	
	
	nYear=1;
	nRise=1.5;
	
	while(nYear<=25)
	{
		nLevel=nYear*nRise;
		cout<<"By year "<<nYear<<" the ocean level will have risen "<<nLevel<<"mm"<<endl;
		nYear++;
	}
	
	
}
