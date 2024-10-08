#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// V1
void manipulating(void) {
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];
    do {
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);
        string1[strlen(string1) - 1] = '\0';
        if ((strcmp(string1, "q")) != 0) {
            printf("Type the 2st string:\n");
            fgets(string2, BUFFER_SIZE, stdin);
            string2[strlen(string2) - 1] = '\0';
            strcat(string1, string2);
            printf("Concatenated string is \'%s\'\n", string1);
        }
    } while (strcmp(string1, "q") != 0);
    printf("*** End of Concatenating Strings Demo ***\n\n");

    //V2

	printf("*** Start of Comparing Strings Demo ***\n");
	char compare1[BUFFER_SIZE];
	char compare2[BUFFER_SIZE];

	int result;
	do
	{
      printf("Type the 1st string to compare (q - to quit):\n");
	  fgets(compare1, BUFFER_SIZE, stdin);
	  compare1[strlen(compare1) - 1] = '\0';
	  if (strcmp(compare1, "q") != 0)
	  {
		  printf("Type the 2nd string to compare:\n");
		  fgets(compare2, BUFFER_SIZE, stdin);
		  result = strcmp(compare1, compare2);

		  if (result < 0)
			  printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
		  else if (result == 0)
			  printf("\'%s\' string is eqaul to \'%s\'\n", compare1, compare2);
		  else
			  printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
	  }
	} while (strcmp(compare1, "q") != 0);
	
	printf("*** End of Comparing Strings Demo ***\n\n");
}