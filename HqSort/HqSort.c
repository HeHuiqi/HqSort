//
//  HqSort.c
//  HqSort
//
//  Created by macpro on 2017/12/20.
//  Copyright © 2017年 macpro. All rights reserved.
//

#include "HqSort.h"

void swap(int *arr,int i, int j){
    arr[i] = arr[i]+arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i]- arr[j];
}
void hqPrintArr(int *arr,int length){
    for (int k = 0; k<length; k++) {
        if (k==length-1) {
            printf("%d\n",arr[k]);
        }else{
            printf("%d",arr[k]);
        }
    }
}
//插入排序（在无序区选择元素后在有序区比较，然后插入到有序区适当的位置）
void insertSort(int *arr,int length){
    /*
     把数组看成两个区，有序区和无序区
     初始状态有序区为第0个元素，无序区为剩余元素
     然后从无序区拿元素和有序区比较，然后插入的适当的位置
    */
    
    //把数组中第0个元素拿出来作为有序数组的的开始，然后从剩余的元素中拿出一个，和有序数组中的元素比较，如果比有序数组中的某个元素小（升序）或大（降序），则交换元素（插入到有序数组当中）
    for (int i =1; i<length; i++) {
        int j = i;
        while (j>0 && arr[j] < arr[j-1]) {
            swap(arr, j, j-1);
            j--;
            
        }
        hqPrintArr(arr, length);
    }
}
//选择排序（从无序区选择一个元素进行比找最小元素，然后直接放在有序区）
/*
 选择排序（Selection sort）是一种简单直观的排序算法。
 它的工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素，
 存放在序列的起始位置，直到全部待排序的数据元素排完。
 选择排序是不稳定的排序方法（比如序列[5， 5， 3]
 第一次就将第一个[5]与[3]交换，导致第一个5挪动到第二个5后面）
 
 */
void selectSort(int *arr,int length) {
    for (int i = 0; i < length - 1; i++) {
        
        /*
         把数组看成两个区，有序区和无序区
         初始状态有序区为空，无序区全部元素
         然后从无序区找最小元素，放在有序区
        */
        /*
         假设第0个元素看作最小的元素，然后和剩余的元素比较
         如果在剩余的元素中有更小的则标记下标，直至找到最小的元素
         然后如果标记的下标和开始下标不同则交换元素。
         不断的找寻最小的元素，直到元素被找完
         第一小、第二小、第三小，。。。。
         */
        int min = i;
        //在剩余的元素中找到最小的元素
        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        //进行交换，如果min发生变化，则进行交换
        if (min != i) {
            swap(arr,min,i);
        }
        hqPrintArr(arr, length);
        
    }
}
//冒泡排序（相邻元素依次比较把大的元素放在后边）
void bubbleSort(int *arr, int length) {
    for (int i = 0; i <length - 1; i++) {
        int flag = 1;//设定一个标记，若为true，则表示此次循环没有进行交换，也就是待排序列已经有序，排序已然完成。
        for (int j = 0; j < length - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr,j,j+1);
                flag = 0;
            }
        }
        if (flag) {
            break;
        }
        hqPrintArr(arr, length);
    }
}

