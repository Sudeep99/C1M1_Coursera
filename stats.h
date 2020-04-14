/**
 *
 * File: stats.h
 * author: Sudeep Kumar
 * date: 14/04/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(int arr[]);

/**
 * Function: print_statistics
 * 
 * Brief:
 * Prints the minimum,maximum,mean and median elements  of an array.
 *
 * Description:
 * This function takes a int array as an input. This
 * will find the minimum and maximum value of the elements of the given
 * array and will also calculate the mean and median of the
 * array and print it.
 * 
 * Parameters:
 * A int array.
 *
 * Return: 
 * We print the minimum,maximum,median and mean of the given array.
 */

void print_array(int arr[],int length);

/**
 * Function: print_array
 * 
 * Brief:
 * Prints the array on the screen.
 *
 * Description:
 * This function takes a int array with data and its length as input
 * and prints the array on the screen.
 * 
 * Parameters:
 * A int array with data.
 * Integer length of the array. 
 *
 * Return:
 * We print the given array.
 */

float find_median(int arr[],int length);

/**
 * Function: find_median
 * 
 * Brief:
 * Return the median value of an array.
 *
 * Description:
 * This function takes a int array with data and its length as input
 * and prints the median value of the array.
 * 
 * Parameters:
 * A int array with data.
 * Integer length of the array.  
 *
 * Return:
 * The median of the array.
 */

float find_mean(int arr[],int length);

/**
 * Function: find_mean
 * 
 * Brief:
 * Return the mean value of an array.
 *
 * Description:
 * This function takes a int array with data and its length as input
 * and prints the mean value of the array.
 *
 * Parameters:
 * A int array with data.
 * Integer length of the array. 
 *
 * Return:
 * The mean of the array.
 */

int find_maximum(int arr[],int length);

/**
 * Function: find_maximum
 * 
 * Brief:
 * Return the maximum value of an array.
 *
 * Description:
 * This function takes a int array with data and its length as input
 * and prints the maximum value of the array.
 * 
 * Parameters:
 * A int array with data.
 * Integer length of the array. 
 *
 * Return:
 * The element with maximum value of the array.
 */

int find_minimum(int arr[],int length);

/**
 * Function: print_statistics
 * 
 * Brief:
 * Return the minimum value of an array.
 *
 * Description:
 * This function takes a int array with data and its length as input
 * and prints the minimum value of the array.
 *
 * Parameters:
 * A int array with data.
 * Integer length of the array. 
 *
 * Return:
 * The element with minimum value of the array.
 */

void sort_array(int arr[],int length);

/**
 * Function: print_statistics
 * 
 * Brief:
 * Return the sorted array in decending order
 *
 * Description:
 * This function takes a int array with data and its length as input
 * and sorts the given array in desending order.
 * 
 * Parameters:
 * A int array with data.
 * Integer length of the array.  
 *
 * Return:
 * Nothing
 */

#endif /* __STATS_H__ */
