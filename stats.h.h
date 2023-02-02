/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Mansour_Coursera  
 * @brief simple application that performs statistical analytics on a dataset
 *
 *functions thtat can analyze an array of unsigned char data items and report ana the maximum, minimum, mean, and median of the data set.
 * In addition, i reorder this data set from large to small, All Statistics round down to the nearest integer.
 *
 * @author Abdel Halim Mansour
 * @date 2/2/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief < funtion to print unsigned char array >
 *
 * This function takes as an input a unsigned char array and the length (size) of the array
 * use the size of the array to scan and print all the array elements by using for loop
 *
 * @param array unsigned char array that we will print 
 * @param length unsigned int length of the array (size)
 *
 * @return no return its just a print function
 */
void print_array(unsigned char array[],unsigned int length);



/**
 * @brief < funtion to sort unsigned char array >
 *
 * This function takes as an input a unsigned char array and the length (size) of the array
 * use the size of the array to scan and sort all the array form the largest element to smallest element by using nseted for loop
 *
 * @param array unsigned char array that we will sort 
 * @param length unsigned int length of the array (size)
 *
 * @return no return we only sort the array
 */
void sort_array(unsigned char array[],unsigned int length);



/**
 * @brief < funtion to get minimum value form unsigned char array >
 *
 * This function takes as an input a unsigned char array and the length (size) of the array
 * use the size of the array to scan and find the smallest element in our array by compare between all the element and pick the minimum value using for loop
 *
 * @param array unsigned char array which we want to get the smallest (minimum) value from
 * @param length unsigned int length of the array (size)
 *
 * @return minimum its the minimum unsigned char value in the array
 */
unsigned char find_minimum(unsigned char array[],unsigned int length);



/**
 * @brief < funtion to get minimum value form unsigned char array >
 *
 * This function takes as an input a unsigned char array and the length (size) of the array
 * use the size of the array to scan and find the largest element in our array by compare between all the element and pick the maximum value using for loop
 *
 * @param array unsigned char array which we want to get the largest (maximum) value from
 * @param length unsigned int length of the array (size)
 *
 * @return maximum its the maximum unsigned char value in the array
 */
unsigned char find_maximum(unsigned char array[],unsigned int length);



/**
 * @brief < funtion to get median of the unsigned char array >
 *
 * This function takes as an input a unsigned char array and the length (size) of the array
 * use the array and length and send them to sorting function to get sorted array
 * get the median index by divide the length by 2, finally using the median index to get median value.
 *
 * @param array unsigned char array which we want to get the median from
 * @param length unsigned int length of the array (size)
 *
 * @return median its the median unsigned char value of the array
 */
unsigned char find_median(unsigned char array[],unsigned int length);



/**
 * @brief < funtion to get mean (average) of the unsigned char array >
 *
 * This function takes as an input a unsigned char array and the length (size) of the array
 * use for loop to get the summation of all array elemnts after that divide it by the array length to get the mean
 *
 * @param array unsigned char array which we want to get the median from
 * @param length unsigned int length of the array (size)
 *
 * @return mean its the mean unsigned char value of the array
 */
unsigned char find_mean(unsigned char array[],unsigned int length);



/**
 * @brief < function that prints the statistics of an unsigned char array including minimum, maximum, mean, and median >
 *
 * This function takes as an input a unsigned char array and the length (size) of the array
 * it call all the function ( print_array, sort_array, find_minimum, find_maximum, find_median, find_mean ) to get all the information 
 * print all the statistics of the unsigned char array
 *                         
 * @param array unsigned char array which we want to get the median from
 * @param length unsigned int length of the array (size)
 *
 * @return no return it just prints the statistics
 */
void print_statistics(unsigned char array[],unsigned int length );



#endif /* __STATS_H__ */