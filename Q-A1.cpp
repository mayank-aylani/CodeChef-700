/*
Chef and his Apps

Chef's phone has a total storage of S MB. Also, Chef has 2 apps already installed on his phone which occupy X MB and Y MB respectively.

He wants to install another app on his phone whose memory requirement is Z MB. For this, he might have to delete the apps already installed on his phone. Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.
*/

#include<iostream>
using namespace std;
int main()
{
int testCases=0;
cin>>testCases;
while(testCases--)
{
int memoryInMB=0,APP1=0,APP2=0,newAPP=0;
cin>>memoryInMB>>APP1>>APP2>>newAPP;
if(memoryInMB<APP1+APP2+newAPP)
{
if(memoryInMB>=APP2+newAPP || memoryInMB>=APP1+newAPP) cout<<1<<endl;
else cout<<2<<endl;
}
else cout<<0<<endl;
}
return 0;
}