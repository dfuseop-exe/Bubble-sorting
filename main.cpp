#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  for(int i=0;i<n-1;i++) //n-1 iterations are required for bubble sort to get sorted array
  {
    for(int j=0;j<n-1-i;j++)//n-1-i is used here coz every iteration will gave last element as a sorted.
    {
      if(arr[j+1]<arr[j])
      {
        int temp = arr[j+1];
        arr[j+1]=arr[j];
        arr[j] = temp ;
      }
    }
  }

  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" " ;
  }
  
}