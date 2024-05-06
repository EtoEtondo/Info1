#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char* string){
    int i, j, len;
    char temp;
    i=j=len=temp=0;
    
    len=strlen(string);
    for (i=0, j=len-1; i<=j; i++, j--)
    {
        temp=string[i];
        string[i]=string[j];
        string[j]=temp;
    }
}

int main() {
    char word [101];
    
    printf("Geben Sie ein Wort ein:\n");
    scanf("%100s", word);
    printf("Ihre eingegebenes Word ist: %s \n", word);
    reverse(word);
    printf("Das Word umgedreht: %s \n", word);
    
    
    return 0;
}
