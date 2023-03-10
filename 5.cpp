#include <iostream>
using namespace std;

int main() {
	int t,a,b,x,c;
    cout<<"enter no of test cases"<<endl;
	cin>>t;
	while(t--)
	{
        cout<<"enter the values of a b and x"<<endl;
	    cin>>a>>b>>x;
	    c=x+a;
	    if(c<=b)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}