#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> a, int k){
    int s=0;
    int e=a.size()-1;

    int ans = 0;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid] == k){
            ans = mid;
            e=mid-1;      //modified line of code
        }
        else if(a[mid]>k){
            e = mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}


int upper_bound(vector<int> a, int k){
    int s=0;
    int e=a.size()-1;

    int ans = 0;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid] == k){
            ans = mid;
            s=mid+1;          //modified line of code
        }
        else if(a[mid]>k){
            e = mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}



int main(){
     int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        arr.push_back(j);
    }

   int k ;
   cin >> k;

   cout<<upper_bound(arr,k) - lower_bound(arr,k) + 1 <<endl;  //we build this function

   cout<<upper_bound(arr.begin(),arr.end(),k)-lower_bound(arr.begin(),arr.end(),k)<<endl;  //STL function


    return 0;
}
