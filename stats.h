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
 * @file    <stats.h> 
 * @brief   < header file for statistics functions>
 * @author  <Mohammed Zwayen>
 * @date    <27/02/2023 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief <print on screen statistics for samples array>
 * @param <arr> <samples to be studied>
 * @param <len> <samples count/lengath>
 *
 * @return <void: no retrun >
 */
void print_statistics(unsigned char* arr, int len);

/**
 * @brief <show array elements alogside with its indeces on screen>
 * @param <arr> <samples to be studied>
 * @param <len> <samples count/lengath>
 *
 * @return <void: no retrun >
 */
void print_array(unsigned char* arr, int len);

/**
 * @brief <find the median value in array of samples >
 * @param <arr> <samples to be studied>
 * @param <len> <samples count/lengath>
 *
 * @return <int : the median value for data set to nearst int >
 */
int find_median(unsigned char* arr, int len);

/**
 * @brief <Add Brief Description of Function Here>
 * @param <arr> <samples to be studied>
 * @param <len> <samples count/lengath>
 *
 * @return <double : the mean value for data set >
 */
double find_mean(unsigned char* arr, int len);

/**
 * @brief <Add Brief Description of Function Here>
 * @param <arr> <samples to be studied>
 * @param <len> <samples count/lengath>
 *
 * @return <int: the maximum value among the data set  >
 */
int find_maximum(unsigned char* arr, int len);

/**
 * @brief <Add Brief Description of Function Here>
 * @param <arr> <samples to be studied>
 * @param <len> <samples count/lengath>
 *
 * @return <int: the minimum value among the data set >
 */
int find_minimum(unsigned char* arr, int len);

/**
 * @brief <Sort array of samples in Descadig way>
 * @param <arr> <samples to be studied>
 * @param <len> <samples count/lengath>
 * @attention <no side effect: new array will be returned back>
 * 
 * @return <unsigned char*: new array after sorting the old one's elements >
 */
unsigned char* sort_array(unsigned char* arr, int len);


#endif /* __STATS_H__ */
