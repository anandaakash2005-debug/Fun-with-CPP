#include<bits/stdc++.h>
using namespace std;
void printnum(int i,int n)
{
	if(i>n)
	return ;
	cout<<i<<endl;
    printnum(i+1,n);
}
int main()
{
	int num;
	cout<<"enter the limit: ";
	cin>>num;
	
	printnum(1,num);
	return 0;
}
