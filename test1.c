#include<stdio.h>

int main(){
int x = 5, y = 10;
if ((x < y) && !(y == 2 * x))
y = x / 5;
else
{ x = y / 5;
y = 3 * x;
}
printf ("%d%4d\n", x, y);
if ((y <= 2 * x) || (3 * x != y))
x = 0;
y = -y;
printf ("%-3d%d\n", x, y);
}
