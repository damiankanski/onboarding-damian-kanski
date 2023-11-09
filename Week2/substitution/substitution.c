#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// function declaration
bool valid_char(string word);


// main fuction
int main(int argc, string argv[])
{
    // returne printf if our code key is not one line ""xxxxxxxxxxxxxx" not " xxxx xxxx"
    if(argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // if not as logic in valid_char return printf
    if (!valid_char(argv[1]))
    {
        printf("Key must contain 26 unique characters.\n");
        return 1;
    }
    // def uer word to code
    string plaintext;
    plaintext = get_string("plaintext: ");
    int lenght = strlen(plaintext);

    // definite code kay as word and type string
    string word = argv[1];

    // create array with size [lenght+1]
    char ciphertext[lenght + 1];
    int index;


    for (int i = 0; i < lenght; i++)
    {
        // check if uder word have lower letters
        if (islower(plaintext[i]))
        {
            index = plaintext[i] - 97; // ASCI value
            ciphertext[i] = word[index];
                if (isupper(ciphertext[i]))
                {
                    ciphertext[i] +=32; // change with ASCI to lowerscase
                }
        }
        // check if uder word have lower upper
        else if (isupper(plaintext[i]))
        {
            index = plaintext[i] - 65;  // ASCI value
            ciphertext[i] = word[index];
                if (islower (ciphertext[i]))
                {
                    ciphertext[i] -= 32; // change with ASCI to lowerscase
                }
        }
        // chec if user use some extra chcarater for example , or .
        else
        {
            ciphertext[i] = plaintext[i];
        }


    }
    //print change word
    ciphertext[lenght] = '\0';
    printf("ciphertext: %s\n", ciphertext);

}


// create the validation of code key
bool valid_char(string word)
{
    int lenght = strlen(word);

    //if code kay do not have 26 characters returne false
    if (lenght != 26)
    {
        return false;
    }

    // chenge all key to upper
    for (int i =0; i < lenght; i ++)
    {
        word[i] = toupper(word[i]);
    }

    // check if all position in key are letters and if we do not have repeated characters
    for (int i = 0; i < lenght; i ++)
    {
        if (!isalpha(word[i]))
        {
            return false;
        }
        for (int j = i + 1; j < lenght; j++)
        {
            if ( word[i] == word[j])
            {
                return false;
            }

        }

    }
    return true;
}
