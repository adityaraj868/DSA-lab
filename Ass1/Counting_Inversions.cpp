#include<iostream>
using namespace std;
int main(){
    
    int n,c=0;
    cout << "Enter the size of array";
    cin >> n;

    int arr[n];
    cout << "Enter the arrray";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Inversion Pairs- \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-1; j++)
        {
            if(arr[i]>arr[j+1]){ 
                cout << "(" << arr[i] << "," << arr[j+1] << ") ";
                c++;
            }
        }     
    }
     cout << "\n";  
    
cout << "The total number of inversion = " << c;
    
return 0;
}