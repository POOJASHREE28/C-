#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,ans;
    cout<<"enter no of test cases"<<endl;
	cin>>t;
	while(t--)
	{
        cout<<"enter the values of x and y"<<endl;
	    cin>>x>>y;
	    ans=x/y;
	    ans+=(x%y);
	    cout<<ans<<endl;
	}
	
	return 0;
}