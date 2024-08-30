#include <stdio.h>
#include <ctype.h>  // For isalpha() and tolower()

int main() {
    char ch;
    int vowels = 0, consonants = 0;


    printf("Enter a sentence: ");
    
   
    while ((ch = getchar()) != '\n') {
        
        ch = tolower(ch);


        if (isalpha(ch)) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

   
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
