#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,m,h,b;
     cout<<"enter no of test cases"<<endl;
	cin >> t;
	while(t--){
        cout<<"enter the values of m and h"<<endl;
	    cin >> m>>h;
	    b=m/(h*h);
	    if(b<=18){
	        cout << 1 << endl;
	    }
	    else if(b>=19 && b<=24){
	        cout << 2 << endl;
	    }
	    else if(b>=25 && b<=29){
	        cout << 3 << endl;
	    }
	    else{
	       cout << 4 << endl;
	    }
	    
	}
	return 0;
}