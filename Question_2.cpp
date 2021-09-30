#include<iostream>
#include<conio.h>
using namespace std;

int equilibriumPoint(int arr[], int n)
{
    int i, j;
    int leftsum, rightsum;
  
    
    for (i = 0; i < n; ++i) 
    {     
  
       
        leftsum = 0; 
        for (j = 0; j < i; j++)
            leftsum += arr[j];
  
        
        rightsum = 0; 
        for (j = i + 1; j < n; j++)
            rightsum += arr[j];
  
        
        if (leftsum == rightsum)
            return i;
    }
  
    return -1;
}
  
// Driver code
int main()
{
    int arr[] = { 1, 3, 5, 2, 2};
    int n = 5;
    cout << equilibriumPoint(arr, n);
    return 0;
}
