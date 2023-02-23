#include <stdio.h>

int main(){

int i;
int my_array[6];
int *my_array_ptr;

my_array[0]=11; my_array[1]=12; my_array[2]=13;
my_array[3]=14; my_array[4]=15; my_array[5]=16;

// These do the same thing
i = my_array[0];  // Element 0 of my_array
     printf("i1=%d\n",i);
i = (*my_array);  // Dereference my_array
     printf("i2=%d\n",i);


my_array_ptr = my_array;
i = my_array_ptr[0];  // Still element 0 of
                      //   my_array
     printf("i3=%d\n",i);

i = (*my_array_ptr);  // Dereference my_array_ptr // Lobo calls it CONTENTS 
     printf("i4=%d\n",i);

// This works but you don't need to do it.
my_array_ptr = &(my_array[0]);         // Lobo calls this ADDRESS

my_array_ptr++;
i = (*my_array_ptr);
     printf("i5=%d\n",i);

my_array_ptr +=2;
i = (*my_array_ptr);
     printf("i6=%d\n",i);


return 0;
}

// Don't do this.
////my_array_ptr = &my_array;
