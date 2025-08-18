#include<iostream>
using namespace std;

class matrix{
    //for square matrix only
    public: 
    int diagonal(int arr[],int size){

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if(i==j){
                    cout<<arr[i]<<' ';
                }
                else cout<<"0 ";
            }
            cout << "\n";
        }
       return 0;
    }

    int tri_diagonal(int arr[],int arr1[],int arr2[],int size){

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if(i==j){
                    cout<< arr[i] << ' ';
                }
                else if(i-j==1){
                    cout<< arr2[j] << ' ';
                }
                else if(j-i==1){
                    cout<< arr1[i] << ' ';          
                }
                else cout<<"0 ";
            }
            cout << "\n";
        }
       return 0;
    }


};

int main(){
    matrix ob;

    int size;
    cout << "Enter the order of square matrix";
    cin >> size;

    int arr[size],arr1[size-1],arr2[size-1];

    cout << "Enter the main diagonal terms of matrix";
    for (int i = 0; i < size; i++)
    {
       cin >> arr[i];
    }

    cout << "Enter the first subdiagonal terms of matrix";
    for (int i = 0; i < size-1; i++)
    {
       cin >> arr1[i];
    }

       cout << "Enter the first superdiagonal terms of matrix";
    for (int i = 0; i < size-1; i++)
    {
       cin >> arr2[i];
    }


    ob.tri_diagonal(arr,arr1,arr2,size);
    
}