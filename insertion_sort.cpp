#include <iostream>
using namespace std;
//用来打印数组的函数
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

//实现插入排序的函数
void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)//从数组的第二个元素开始
    {
        int key=a[i];
        int j=i-1;//定义变量j为key的前一个元素

        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];//将元素向后移动一个单位
            j--;//继续向前遍历
        }

        a[j+1]=key;

    }
}
int main()
{
    int arr[]={10489,4893489,482748,2847327,49327461,484829,478,3427};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_array(arr,n);
    insertion_sort(arr,n);
    print_array(arr,n);
    return 0;

}
