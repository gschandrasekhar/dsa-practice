#include<bits/stdc++.h>
using namespace std;

int selection_sort(int n, int arr[]){
for(int i=0;i<n-1;i++)
    {  int mini=i;
        for(int j=i;j<n;j++)
        {
            if(arr[mini]>arr[j])
            {     mini=j;
               
        }
         
    }
    int temp=0;
                temp=arr[mini];
                arr[mini]=arr[i];
                arr[i]=temp;
            }
}
int bubble_sort(int n, int arr[])
{  int temp=0;
    for(int i=n-1;i>0;i--)
    {   int didswap=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
             didswap++;
            }
        }
        cout<<"run";
        if(didswap==0)
        {
            break;
        }
        
    }
} 
void insertion_sort(int n, int arr[])
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        int temp=0;
        while(j>0&&arr[j-1]>arr[j])
        {
            temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    //selection_sort(n,arr);
    //bubble_sort(n,arr);
    insertion_sort(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
