/*
Ѱ����ת���������е���Сֵ
���谴�����������������Ԥ��δ֪��ĳ�����Ͻ�������ת
�����磺[0,1,2,4,5,6,7]���ܱ�Ϊ��[4,5,6,7,0,1,2]��
���ҳ�������С��Ԫ��
����Լ��������в������ظ�Ԫ��
ʱ�临�Ӷȿ�����log2(N)֮��
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
    //�����߽�ֵС���ұ߽�ֵ��˵������һ��������ģ���δ������ת
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
