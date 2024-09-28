#include <stdio.h>
#include <stdlib.h>

int main()
{
//Dec
    char str[50], msub[30], sub[30];
    int i, l, max=0; 
//Input
    printf("Enter a String: ");
    gets(str);
//Process    
    for(i=0; str[i];)
    {
        sub[0]=str[i++];
        for(l=1 ;(str[i]) && (str[i]!=32); sub[l++]=str[i++])
        {
            if(str[i]<str[i-1])
                break;
        }
        if(l>max)
        {
            max=l;
            for(l=-1; ++l<max; msub[l]=sub[l]);
        }
        if(str[i]==32)
        {
            i++;
        }
    }
//Output
    printf("\nMax Substring: %s",msub);;

    return 0;
}