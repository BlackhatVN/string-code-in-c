#include <stdio.h>
  
int main()
{
  
    char str[20] = "The Vivekanand";
    char* ptr = str;
    while (*ptr != '\0')
     {
        printf("%c", *ptr);
        ptr++;
    }
  
    return 0;
}