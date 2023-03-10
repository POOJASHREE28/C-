#include <iostream>
#include<string>
using namespace std;

int main() 
{
	int t;
    cout<<"enter no of test cases"<<endl;
	cin>>t;
	while(t--)
	{
	   string s;
       cout<<"enter the string"<<endl;
	   cin>>s;
	   int j,i;
	   int l=1;
	   for(j=0;j<s.length()-3;j++)
	   {
	       l=1;
	       for(i=j;i<j+3;i++)
	       {
	           
	           if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
	                 {
	                     l=0;
	                 }
	       }
	       if(l==1)
	          {
	           cout<<"HAPPY"<<endl;break;}
	   }
	   if(l==0)
	 cout<<"SAD"<<endl;
	}
	return 0;
}