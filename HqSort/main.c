//
//  main.c
//  HqSort
//
//  Created by macpro on 2017/12/20.
//  Copyright © 2017年 macpro. All rights reserved.
//

#include <stdio.h>
#include "HqSort.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
//    int arr[] = {1,9,3,8,7,2,4,6,5};
    int arr[] = {5,3,4,1,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("插入排序----\n");
    insertSort(arr, length);
    printf("冒泡排序----\n");
    int arr1[] = {5,3,4,1,2};
    bubbleSort(arr1, length);
    printf("选择排序----\n");
    int arr2[] = {5,3,4,1,2};
    selectSort(arr2, length);

//    hqPrintArr(arr, length);
    
    return 0;
}
