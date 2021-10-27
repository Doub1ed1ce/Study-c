#include <stdio.h>
 
 
int main (void)
{
    
    char c;
    char a = 'a';
    scanf("%c", &c);
 
    do{
 
        printf("%c ",a);
        a++;
        c--;
    }
    while(c >= 'a');
    
    return 0;
}
