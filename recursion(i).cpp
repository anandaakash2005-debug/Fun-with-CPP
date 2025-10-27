#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void printnum()
{
	if(cnt==4)
	return ;
	
	cout<<cnt<<endl;
	cnt++;
    printnum();
}
int main()
{
	printnum();
	return 0;
}
