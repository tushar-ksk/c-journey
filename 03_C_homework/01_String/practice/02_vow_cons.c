#include <stdio.h>

int main(){
    int i = 0, j = 0, k = 0, l = 0, space_count = 0;
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    char vow[100];
    char cons[100];
    char non_alpha[100];
    for ( i = 0; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            vow[j] = str[i];
            j++;
            break;
        default:
            if ((str[i] >= 'A' && str[i] <= 'Z')||(str[i] >= 'a' && str[i] <= 'z')){
                cons[k] = str[i];
                k++;
            }
            else if (str[i] == ' ')
            {
                space_count++;
            }
            else{
                non_alpha[l] = str[i];
                l++;
            }
        }
    }
    vow[j] = '\0';
    cons[k] = '\0';
    non_alpha[l] = '\0';
    printf("%d vowels: %s\n", j, vow);
    printf("%d consonants: %s\n", k, cons);
    printf("%d Non Alphabetic Characters: %s\n", l, non_alpha);
    printf("(Spaces)' ': %d\n",space_count);

    return 0;
}
