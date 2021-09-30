#include<iostream>
#include<conio.h>
using namespace std;

void activityselection(int start[], int end[], int n)
{
    int i, j;
 
    cout <<"Following activities are selected "<< endl;

    
    
    
    for (j = 1; j < n; j++)
    {
      
      if (start[j] >= end[i])
      {
          cout <<" " << j;
          i = j;
      }
    }
}
 

int main(){
	
	int start[] =  {1, 3, 2, 5};
    int end[] =  {2, 4, 3, 6};
    int n = 4;
    
    activityselection(start,end,n);
	
}

