#include <stdio .h>
#define MAX 10
int a[MAX];
int rand _ seed=10;

/*
* from K&R − produces an integer random number
* between 0 and 32767.
*/

int rand(void)
{
rand _ seed = rand_seed * 1103515245 + 12345;
return (unsigned int )( rand_seed / 65536) % 32768;
}

int main(void)
{
int i , t , x , y;
/* fill array */
for (i = 0; i < MAX; i++)
{
a [i] = rand ( );
printf("%d\n ",a[i] );
}
/* more stuff will go here in a minute */
return 0;
}
