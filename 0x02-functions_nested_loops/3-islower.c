#include "main.h"
/* 
* _ islower - controls if a character is in lowercase
* desc :function chek the input if it's lower case
* @c: character to function input
* Return: return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}

