#define _CRT_SECURE_NO_WARNINGS			//Only for VS
#define LENGHT_STRING 128
#define MAX_WORD 20

#include <stdio.h>
#include <string.h>

int split(char separator, char string[LENGHT_STRING], char arr[MAX_WORD][LENGHT_STRING]) {
	unsigned int i = 0, k = 0, j = 0;
	char word[LENGHT_STRING];
	while (i < strlen(string) && j < MAX_WORD) {
		while (string[i] != separator && i < strlen(string)) {
			arr[j][k++] = string[i++];
		}
		arr[j++][k] = '\0';
		k = 0;
		i++;

		printf("\n");
	}
	return j;
}

