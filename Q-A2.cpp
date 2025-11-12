/*
Chef Eren

Chef is a very big fan of Eren Yeager.

In the last season of Attack on Titan, there were N episodes numbered from 1 to N.
Each even indexed episode was A minutes long and each odd indexed episode was B minutes long.

Calculate the total duration (in minutes) of the last season.
*/

#include<iostream>
using namespace std;
int main()
{
int testCases=0;
cin>>testCases;
while(testCases--)
{
int total=0,evenMins=0,oddMins=0,evenCount=0,oddCount=0;
cin>>total>>evenMins>>oddMins;
for(int i=1;i<=total;i++)
{
if(i%2==0) evenCount++;
else oddCount++;
}
cout<<evenCount*evenMins+oddCount*oddMins<<endl;
}
return 0;
}