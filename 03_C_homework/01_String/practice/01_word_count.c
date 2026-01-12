#include <stdio.h>

int main(){
    int i = 1, count = 0;
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    if (str[0] != ' ' && str[0] != '\n' && str[0] != '\t' && str[0] != '\0'){
        count = 1;
    }
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i-1] == ' ')
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}
