#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // checks if c is a vowel
    if (c == 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U')
    //using logical OR operator which will pass true if any of statement is true
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}