#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strcat(const char* const str1, const char* const str2){
    // string concatanation function
    // takes two char pointers as input, and returns a char pointer

    // obtains length of string 1 and 2. strlen returns the length of the string excluding the termination character
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    // n is the length of the new string. The +1 is to account for the termination character
    int n = str1_len + str2_len + 1;

    // creating the new char array, and allocating n memory blocks to the size of a char type
    // calloc initializes the values of the character array to 0 automatically
    char *new_str = calloc(n, sizeof(char));

    // First for-loop goes through the first string's characters and respecively assigns them to the resultant char pointer
    // This process clones the text of str1 into new_str
    int i;
    for(i=0; i<str1_len; i++){
        *(new_str + i) = str1[i];
    }

    // Second for-loop goes through the second string's characters and assigns them to the respective empty positions after str1 has been copied over
    for(int j=0; j<str2_len; j++){
        *(new_str+i) = str2[j];
        i++; //i is used to keep track of general character placement, so it must be manually incremented
    }
    *(new_str + n - 1) = '\0'; // we assign the termination character to the final index of the newly-generated char pointer

    return new_str; // returning concatanated string to caller function
}

int main(void) {


    printf("%s\n", my_strcat("Hello ", "World!")); //output should be "HelloWorld"

    return 0;
}
