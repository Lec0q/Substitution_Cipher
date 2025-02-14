// Made By L3C0Q
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Substitution_Cipher_Encode(char PlainText_Substitution_Cipher[], int Key_Substitution_Cipher, char Ciphertext_Substitution_Cipher[])
{
    int length = strlen(PlainText_Substitution_Cipher);
     if (Key_Substitution_Cipher < 0)
     {
        Key_Substitution_Cipher = 26 + Key_Substitution_Cipher;
     }
     

    for (int i = 0; i < length; i++)
    {
        if (PlainText_Substitution_Cipher[i] >= 65 && PlainText_Substitution_Cipher[i] <= 90) 
        {
            Ciphertext_Substitution_Cipher[i] = ((PlainText_Substitution_Cipher[i] - 65 + Key_Substitution_Cipher) % 26) + 65;
        }
        else if (PlainText_Substitution_Cipher[i] >= 97 && PlainText_Substitution_Cipher[i] <= 122)
        {
            Ciphertext_Substitution_Cipher[i] = ((PlainText_Substitution_Cipher[i] - 97 + Key_Substitution_Cipher) % 26) + 97;
        }
        else
        {
            Ciphertext_Substitution_Cipher[i] = PlainText_Substitution_Cipher[i]; 
        }
    }
    
    Ciphertext_Substitution_Cipher[length] = '\0'; 
}

void Substitution_Cipher_Decode(char DecodedText_Substitution_Cipher[], int Key_Substitution_Cipher, char Ciphertext_Substitution_Cipher[])
{
    int length = strlen(Ciphertext_Substitution_Cipher);
    if (Key_Substitution_Cipher < 0)
    {
        Key_Substitution_Cipher = 26 + Key_Substitution_Cipher;
    }
    
    for (int i = 0; i < length; i++)
    {
        if (Ciphertext_Substitution_Cipher[i] >= 65 && Ciphertext_Substitution_Cipher[i] <= 90) 
        {
            DecodedText_Substitution_Cipher[i] = ((Ciphertext_Substitution_Cipher[i] - 65 - Key_Substitution_Cipher + 26) % 26) + 65;
        }
        else if (Ciphertext_Substitution_Cipher[i] >= 97 && Ciphertext_Substitution_Cipher[i] <= 122)
        {
            DecodedText_Substitution_Cipher[i] = ((Ciphertext_Substitution_Cipher[i] - 97 - Key_Substitution_Cipher + 26) % 26) + 97;
        }
        else
        {
            DecodedText_Substitution_Cipher[i] = Ciphertext_Substitution_Cipher[i]; 
        }
    }
    
    DecodedText_Substitution_Cipher[length] = '\0'; 
}
int main()
{
    char PlainText_Substitution_Cipher[1000]; 
    char Ciphertext_Substitution_Cipher[1000]; 
    char DecodedText_Substitution_Cipher[1000];
    int Key_Substitution_Cipher = 0; 
    printf("Enter the PlainText: ");
    gets(PlainText_Substitution_Cipher);
    printf("Enter the Key: ");
    scanf("%d", &Key_Substitution_Cipher);
    Substitution_Cipher_Encode(PlainText_Substitution_Cipher, Key_Substitution_Cipher, Ciphertext_Substitution_Cipher);
    printf("Ciphertext: %s\n", Ciphertext_Substitution_Cipher);
    Substitution_Cipher_Decode(DecodedText_Substitution_Cipher, Key_Substitution_Cipher, Ciphertext_Substitution_Cipher);
    printf("Decoded Text: %s\n", DecodedText_Substitution_Cipher);

    return 0;
}
