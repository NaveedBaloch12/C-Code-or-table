#include<iostream>

using namespace std;
int main()
{
	int n, m, a;
	cout<<"Display table of: ";
	cin>>n;
	cout<<"Display table of "<<n<<" Till: ";
	cin>>m;
	
	for(int i= 1; i<=m; i++)
	{
		a=n*i;
		cout<<n<<" * "<<i<<"= "<<a<<endl;
	}
}

