/*
快速排序找数组中第k小的数
*/
#include<stdio.h>
#include<stdlib.h>


void quick_sort(int numbers[], int start, int end);
int quick_sort_for_k_min(int arr[], int low, int high, int k);

int main()
{
    int arr[] = {11,14,32,56,1,27,67,9,40,3};
    int count = 10;
    /*
    printf("快速排序之前：");
    for (int i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    quick_sort(arr,0,count-1);
    printf("\n");
    printf("快速排序之后：");
    for (int i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    */
    int k=2;
    int result;
    result = quick_sort_for_k_min(arr,0,count-1,k);
    printf("数组中第%d小的元素为:%d\n",k,result);
    return 0;
}

void quick_sort(int numbers[], int start, int end)
{
    //如果数组中只有一个元素则表示已经有序直接返回
    if (start >= end) return ;
    int low = start;
    int high = end;
    int temp = numbers[low];
    while (low < high){
        //从后往前扫描
        while (low<high && numbers[high]>=temp){
            high--;
        }
        numbers[low] = numbers[high];
        //从前往后扫描
        while (low<high && numbers[low]<temp){
            low++;
        }
        numbers[high] = numbers[low];
    }
    numbers[low] = temp;
    for (int i=0;i<10;i++){
        printf("%d ",numbers[i]);
    }
    printf("\n");
    quick_sort(numbers,start,low-1);
    quick_sort(numbers,low+1,end);
}

int quick_sort_for_k_min(int arr[], int low, int high, int k)
{
    if (low >= high || k <= 0) return -1;
    int index = partition(arr,low, high);
    while (k-1 != index){
        if (k-1 < index){
            index = partition(arr,low,index-1);
        }
        else{
            index = partition(arr,index+1,high);
        }
    }
    return arr[k-1];
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    while (start < end){
        while (start < end && pivot <= arr[end]){
            end--;
        }
        arr[start] = arr[end];
        while (start < end && pivot >= arr[start]){
            start++;
        }
        arr[end] = arr[start];
    }
    arr[start] = pivot;
    return start;
}
