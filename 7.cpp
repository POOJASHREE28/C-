
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cout<<"enter no of test cases"<<endl;
	cin>>t;
	while(t--)
	{
	    int n;
         cout<<"enter the value of n"<<endl;
	    cin>>n;
	    vector<long long int> v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    sort(v.begin(),v.end());
	    
	   long long int min=INT_MAX;
	    for(long long int i=0;i<n-1;i++)
	    {
	       long long int val=v[i+1]-v[i];
	        
	        if(min>val){min=val;}
	        
	    }
	    cout<<min<<endl;
    }
	return 0;
}