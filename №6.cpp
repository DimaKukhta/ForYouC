#include <stdio.h>
#include <ctype.h>
#define STR_LEN 64
 
int main(void){
    char inStr[STR_LEN], outStr[STR_LEN], * pIn, * pOut;
    
    printf("String: ");
    if ( ! fgets(inStr, STR_LEN, stdin) )
        return 1;
    pOut = outStr;
    for ( pIn = inStr; *pIn; ++pIn )
        if ( ! isdigit(*pIn) )
            *pOut++ = *pIn;
    *pOut = '\0';
    printf("String without your digits: %s", outStr);
 
    return 0;
}