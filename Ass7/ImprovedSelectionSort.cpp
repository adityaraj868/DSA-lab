#include<iostream>
#include<vector>
using namespace std;

class sorting{
    public:
    void ImprovedSelection(vector<int> &arr) {
    int n = arr.size();
    for(int i=0; i<n/2; i++) {
        int last = n-1-i;
        int mini=i, maxi=i;

        for (int j=i; j<=last; j++) {
            if(arr[j]>arr[maxi])maxi = j;
            if(arr[j]<arr[mini])mini = j;
        }
        swap(arr[mini],arr[i]);
        if(maxi==i) maxi=mini;
        swap(arr[maxi],arr[last]);
    }
}
};