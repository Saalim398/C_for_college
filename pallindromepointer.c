#include <stdio.h>

int main()
{
   
   
   char *p = "pat";
    while (*p != '\0')
    {
        printf("%c", *p);
      
        p++;

    }
    p--;
    char *q;
    q =p;
    while (q>p)
    {   
        if (*p == *q)
        {
        
            p++;
            q--;
            
        }
        else break;
        
    }
     
    if (q > p)
    {
        printf("\nString is a pallindrome");
    }
    else printf("\nString is not a pallindrome");
    
    
   return 0;
}