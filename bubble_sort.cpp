#include <iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={289494,4747,4949,48918,4892785,578915,3458,423};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *p=arr;
    bubble_sort(p,n);
    for(int i=0;i<n;i++)
    {
        cout<<*p<<" ";
        p++;
    }
    return 0;

}