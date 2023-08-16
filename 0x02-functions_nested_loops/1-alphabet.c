
#include "main.h"
int _putchar(char c);

/**
 * main - Starting point
 *
 * Description: display all alphabet
 *
 * Return: 0
 */
int main(void)
{
    print_alphabet();    
    return (0);
}
/*funtion to proint one character*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/*funtion to print all small letter alphbets*/  
void print_alphabet(void)
{
    char letter = 'a';
    while (letter <= 'z')
    {
        _putchar(letter); // Corrected this line to pass the variable letter
       letter++;
    }
    _putchar('\n');
}
