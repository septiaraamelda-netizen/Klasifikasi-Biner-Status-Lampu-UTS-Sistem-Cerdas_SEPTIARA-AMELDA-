#include<iostream>
using namespace std;

void StatusLampu(int listrik,int saklar)
{
	//1 berarti true & 0 berarti false
	if(listrik==1 && saklar==1)
	{cout<<"ON";}
	else
	{cout<<"OFF";}	
}

int main()
{
	int listrik,saklar;
	cout<<"Listrik:";
	cin>>listrik;
	cout<<"Saklar:";
	cin>>saklar;
	
	cout<<"Status lampu saat ini:";
	StatusLampu(listrik,saklar);
	
	return 0;
}


