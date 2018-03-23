/***********************************************************************
* File name: matrix.c
* 		ADRC 1º semester 2017/2018
*
* Authors: 
*			Tomas Cordovil nº 78xxx
*			Marco Montez   nº 78508
*
* COMMENTS: Contains all the functions
***********************************************************************/

/**Inclusions**/

#include "auxfunctions.h"

/***********************************************************************
* PrintNumber
* 		
* Arguments: 
* 			number - printed number
* 
* Return: void
*
* Description: Function used to print a number
***********************************************************************/
FILE * OpenDoc(char * filename){
	FILE * fp;

	fp = fopen(filename, "r");
	return fp;
}

