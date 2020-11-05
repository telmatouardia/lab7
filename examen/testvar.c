#include <stdio.h>
#include "var.h"

int main (){
     int n = 5;
     float varian;
     int t [5] = {2, 5,7,2,9};
     variance (t, n, &varian);
     printf ("%f", varian);
     return 0;
} 

