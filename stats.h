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
 * @file stats.h
 * @brief Header file of the dataset analyzer project 
 *
 * This is the header file that contain the functions declarations to the project that
 * can analyze an array of unsigned char and report analytics on maximium, minimum, median
 * and mean of that dataset in addition it can reorder that dataset from large to small.
 * All statistics rounded down to nearest integer.
 *
 * @author Fakhr Eldeen Gamal
 * @date 20/11/2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints all the statistics done on the dataset
 *  
 * This function takes as an input all the statistics as integers and print them 
 *
 * @param mean : the mean of the dataset
 * @param median : the median of the dataset
 * @param max : the maximum of the dataset 
 * @param min : the minimum of the dataset 
 *
 * @return None
 */
 void print_statistics(int mean, int median, int max, int min);



/**
 * @brief Print the whole dataset
 *
 * This functions takes as an input the unsigned char arr and print it 
 *
 * @param arr : the whole dataset
 *
 * @return None 
 */
 void print_array(unsigned char arr);



/**
 * @brief Return median of the dataset
 *
 * This functions takes as an input the unsigned char pointer to the array and the integer length
 * of the array and calculate the median of that array and return it 
 *
 * @param arr : pointer to the dataset
 * @param length : length of the dataset 

 *
 * @return the median of the dataset
 */
 unsigned char find_median(unsigned char *arr, int length);
 


/**
 * @brief Return mean of the dataset
 *
 * This functions takes as an input the unsigned char pointer to the array and the integer length
 * of the array and calculate the mean of that array and return it 
 *
 * @param arr : pointer to the dataset
 * @param length : length of the dataset 

 *
 * @return the mean of the dataset
 */
 unsigned char find_mean(unsigned char *arr, int length);


/**
 * @brief Return maximum of the dataset
 *
 * This functions takes as an input the unsigned char pointer to the array and the integer length
 * of the array and calculate the maximum of that array and return it 
 *
 * @param arr : pointer to the dataset
 * @param length : length of the dataset 

 *
 * @return the maximum of the dataset
 */
 unsigned char find_maximum(unsigned char *arr, int length);


/**
 * @brief Return minimum of the dataset
 *
 * This functions takes as an input the unsigned char pointer to the array and the integer length
 * of the array and calculate the minimum of that array and return it 
 *
 * @param arr : pointer to the dataset
 * @param length : length of the dataset 

 *
 * @return the minimum of the dataset
 */
 unsigned char find_minimum(unsigned char *arr, int length);


/**
 * @brief Sort the given dataset from large to small
 *
 * This functions takes as an input the unsigned char pointer to the array and the integer length
 * of the array and sort that array from large to small so zeroth element contain the largest value
 * and the last element contain smallest value
 *
 * @param arr : pointer to the dataset
 * @param length : length of the dataset 

 *
 * @return None
 */
 void sort_array(unsigned char *arr, int length);




#endif /* __STATS_H__ */
