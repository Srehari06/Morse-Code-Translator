#include <stdio.h>
#include <string.h>
#include<ctype.h>
char character[] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', ' '
};
char *morse[] = {
    ".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",  "....", "..",   
    ".---", "-.-",  ".-..", "--",   "-.",   "---",  ".--.", "--.-", ".-.",  
    "...",  "-",    "..-",  "...-", ".--",  "-..-", "-.--", "--..", 
    ".----","..---","...--","....-",".....","-....","--...","---..","----.", 
    "-----", "/" 
};
char *charToMorse(char c) 
{
    int size = sizeof(character) / sizeof(character[0]); 
    for (int i = 0; i < size; i++) 
    {
        if (c == character[i]) 
        {
             return morse[i];
        }
    }
    return "Not a defined Character"; 
}
int main() 
{
    char input[100];
    printf("--- C Morse Code Translator ---\n");
    printf("Enter text to convert (max 99 characters):\n> ");
    fgets(input, 100, stdin);
    printf("\nMorse Code:\n"); 
    for (int i = 0; i < strlen(input); i++) 
    {
        char current_character = input[i];
        if(current_character == '\n')
        {
            continue;
        }
        char upper_character = toupper(current_character);
        char *Morse_code = charToMorse(upper_character);
        printf("%s ", Morse_code);
    }
    return 0;
}