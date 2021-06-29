#include <bits/stdc++.h>

using namespace std;

void bubbleSort(string arr[], int n)
{
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
};

void insertionSort(string arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
            else
            {
                break;
            }
        }
    }
};

void selectionSort(string arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int mi = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mi])
            {
                mi = j;
            }
        } 
        swap(arr[mi], arr[i]);
    }
};

int main()
{
    int n;
    cin>>n;
    string hackathons[n];
    for(int i=0;i<n;i++)
    {
        cin>>hackathons[i];
    }

    selectionSort(hackathons, n);

    for(string hacks: hackathons)
    {
        cout<<hacks<<endl;
    }
}