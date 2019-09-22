/*
寻找旋转排序数组中的最小值
假设按照升序排序的数组在预先未知的某个点上进行了旋转
（例如：[0,1,2,4,5,6,7]可能变为：[4,5,6,7,0,1,2]）
请找出其中最小的元素
你可以假设数组中不存在重复元素
时间复杂度控制在log2(N)之内
*/
#include<stdio.h>
#include<stdlib.h>

int Min_rotatsort_array(int numbers[], int count);

int main()
{
    int numbers[7] = {4,5,6,7,1,2,3};
    int count = 7;
    int result = Min_rotatsort_array(numbers,count);
    printf("%d\n",result);
    return 0;
}

int Min_rotatsort_array(int numbers[], int count)
{
    int low = 0;
    int high = count-1;
    int mid;
    //如果左边界值小于右边界值则说明数组一定是有序的，即未进行旋转
    if (numbers[low] < numbers[high]){
        return numbers[low];
    }
    while (low < high){
        mid = (low + high)/2;
        if (numbers[mid] < numbers[high]){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    return numbers[low];
}
