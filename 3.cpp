#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;
    cout<<"Enter the number of array elements "<<endl;
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }
    return 0;
}

