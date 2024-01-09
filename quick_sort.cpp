#include <iostream>
using namespace std;
void quick_sort(int arr[], int left, int right) // 传入一个数组，并把数组左端索引和右端索引传入，以便进行递归
{
    if (left >= right)
        return;
    int pivot = arr[left];   // 以数组的最左端元素作为基准
    int i = left, j = right; // 定义两个变量i，j来遍历数组中的元素
    while (i < j)
    {
        // 当 j 还未到达左边界且 arr[j] 大于或等于基准时，j 向左移动一位
        while (i < j && arr[j] >= pivot)
        {
            j--;
        }
        arr[i] = arr[j]; // 发现比基准小的数字，进行交换

        // 当 i 还未到达右边界且 arr[i] 小于或等于枢轴时，i 向右移动一位
        while (i < j && arr[i] <= pivot)
        {
            i++;
        }
        arr[j] = arr[i]; // 发现比基准大的数字，进行交换
        // 进行递归调用
        arr[i] = pivot;
        quick_sort(arr, left, i - 1);
        quick_sort(arr, i + 1, right);
    }
}
int main()
{
    int arr[] = {189, 543958, 8939, 39, 3859122, 50504, 3938};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;
    quick_sort(p, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << *p << " ";
        p++;
    }
    return 0;
}