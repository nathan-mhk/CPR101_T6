// CONVERTING MODULE SOURCE 
#define _CRT_SECURE_NO_WARNINGS 
#define BUFFER_SIZE 80 
#include "converting.h" 
#include <stdio.h>
#include <string.h>

//V2
void converting(void) {
	printf("*** Start of Converting Strings to double Demo ***\n");
	char doubleString[BUFFER_SIZE];
	double doubleNumber;
	do {
		printf("Type the double numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin);
		doubleString[stren(doubleString) - 1] = '\0';
		if ((strcmp(doubleString, "q") != 0))
		{
			doubleNumber = atof(doubleString);
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);
	printf("*** End of Converting Strings to double Demo ***\n\n");
}