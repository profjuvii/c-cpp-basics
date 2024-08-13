#include <stdio.h>
#include <regex.h>  // for working with regular expressions
#include <stdlib.h> // exit()

#define MAX_GROUPS 20


int main(){
    // compile the regular expression pattern for phone number validation
    char* regex_pattern = "^(([0-9]{3})-([0-9]{3})-([0-9]{4}))$"; // ((###)-(###)-(####))
    regex_t regex;
    int res = regcomp(&regex, regex_pattern, REG_EXTENDED | REG_ICASE);
    if(res != 0){
        fprintf(stderr, "Regular expression could not be compiled.\n");
        exit(EXIT_FAILURE);
    }

    printf("Regular expression has been compiled.\n");

    char buffer[100];
    printf("Enter a phone number: ");
    scanf("%s", buffer);

    regmatch_t groups[MAX_GROUPS];
    res = regexec(&regex, buffer, MAX_GROUPS, groups, 0); // execute regular expression matching
    if(res == REG_NOMATCH){
        fprintf(stderr, "Error: Not a phone number format.\n");
    } else{
        printf("Correct input.\n");

        // print group intervals
        for(int i = 0; i < MAX_GROUPS; ++i){
            if(groups[i].rm_so == -1) break;
            printf("Group %d:\t%d %d\n", i, (int)groups[i].rm_so, (int)groups[i].rm_eo); // null group is a whole string
        }
    }

    regfree(&regex);

    return 0;
}
