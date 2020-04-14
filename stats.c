/**
 * File: stats.c 
 * brief: To sort and perform some basic statistical analytics on a dataset.
 *
 * Description:
 * This is a simple C program which performs basic statistical analysis on
 * an unsigened int array. It performs the following functions:
 *  -Sorting a given array.
 *  -Returning the Median of the given array. 
 *  -Returning the Mean of the given array.
 *  -Returning the element with the highest value in the given array.
 *  -Returning the element with the lowest value in the given array.
 *  -Priniting the given array.
 *  -Printing the above mentioned statistical results.
 *
 * author: Sudeep Kumar
 * date: 14/04/2020
 *
 * Note: For function descriptions refer the "stats.h" file.
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {
/*Initializing an unsigned int array and giving it 40 values*/ 
  unsigned char a[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  unsigned int arr[SIZE];//Initializing an unsigned integer array
  for(int i=0;i<SIZE;i++)
  {
    arr[i]=a[i];//converting the unsigned char array to unsigned int array
  }
  print_statistics(arr);
  print_array(arr,SIZE);
  printf("\n");
}

void print_statistics(int arr[])
{
  int min,max;
  float median,mean;
  sort_array(arr,SIZE);
  min=find_minimum(arr,SIZE);
  max=find_maximum(arr,SIZE);
  median=find_median(arr,SIZE);
  mean=find_mean(arr,SIZE);
  printf("\n The element with minimum value: %d \n",min);
  printf("\n The element with maximum value: %d \n",max);
  printf("\n The mean value of the array: %g \n",mean);
  printf("\n The median value of the array: %g \n",median);
}

void print_array(int arr[],int length)
{
  printf("\nThe Given array: \nIndex  Value\n");
  for(int i=0;i<length;i++)
  {
    printf(" [%d] , %d \n",i,arr[i]);// Printing with index and value
  }
  
}

float find_median(int arr[],int length)
{
  sort_array(arr,length);
  float median;
  if(length%2==0)
  {
    median=(arr[(length-1)/2]+arr[length/2])/2.0;//median for an array with even number of elements.
  }
  else
  {
    median=arr[length/2];//median for an array with odd number of elements.
  }
return median;
}

float find_mean(int arr[],int length)
{
  int sum=0;
  for(int i=0;i<length;i++)
  {
    sum=sum+arr[i];//adding all elements of the array.
  }
  float mean=sum/length;//calculating the mean by dividing the sum by the total number of elements.
return mean;
}

int find_maximum(int arr[],int length)
{
  int max=arr[0];
  for(int i=0;i<length;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
return max;
}

int find_minimum(int arr[],int length)
{
  int min=arr[0];
  for(int i=0;i<length;i++)
  {
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
return min;
}

void sort_array(int arr[],int length)
{
  int temp;
  for(int i=0;i<40;i++)
  {
    for(int j=i+1;j<40;j++)
    {
      if(arr[i]<arr[j])
        {
          temp=arr[i];
	  arr[i]=arr[j];
          arr[j]=temp;//swapping the elements if "i th" element is smaller than the "j th" element to create a sorted array.
	}
     }	
   }
}



