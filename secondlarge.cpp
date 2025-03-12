#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6] = {1,3, 5 ,8 ,9 ,14};
    int max = INT_MIN;
    int smax = INT_MIN;

   for(int i=0; i<6; i++){
    if(max<arr[i]) arr[i] =  max;
   }
   cout<<max;

   for(int i=0; i<6; i++){
    if(arr[i]!= max && smax<arr[i]) smax=arr[i];
   }
   cout<<smax;
}
