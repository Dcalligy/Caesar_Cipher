#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){
    // key input from user
    string key = argv[1];
    
    // get defensive
    if(argc != 2){
        
        printf("Invalide amount of arguments! Please try again.\n");
        return 1;
    }
    // convert key from string to int
    // ask user for the plaintext using get_string()
    int convert = atoi(key);
    string plaintext = get_string();
    
    // iterate through each letter of the plaintext
    for(int i = 0; i < strlen(plaintext); i++){
        
        // initialize the ciphertext
        int ciphertext = 0;
        
        // preserves lower case letters using ASCII values
        if(islower(plaintext[i])){
            
            // typcast the int to char
            ciphertext = (((int)(plaintext[i] + convert - 97) % 26) + 97);
            printf("%c", (char)ciphertext);
            
        }
        // preserves upper case leters using ASCII values
        else if(isupper(plaintext[i])){
            
            // typcast int to char
            ciphertext = (((int)(plaintext[i] + convert - 65) % 26) + 65);
            printf("%c", (char) ciphertext);
        }
        else{
            // print the plaintext
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}
