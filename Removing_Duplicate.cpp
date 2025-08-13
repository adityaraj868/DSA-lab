//Storing only unique elements via set

#include<iostream>
#include<set>
using namespace std;

int main(){
    int n,count=0;

    cout << "Enter the number of elements";
    cin >> n;

    int arr[n];
    set<int> s;

    cout<<"Enter the array";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    
    cout << "Unique elements are as follows- \n";

    for (int x : s)
    {
        cout << x << " ";
       // count+=1;
    };
    //cout << count;
    
     return 0;
}