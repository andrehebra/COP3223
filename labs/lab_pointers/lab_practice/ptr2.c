#include <string.h>
#include <stdio.h>

int main(){
char i;
char my_array[6];
char *my_array_ptr;

my_array[0]='L'; my_array[1]='o'; my_array[2]='b';
my_array[3]='o'; my_array[4]='\0'; my_array[5]='N';

// These do the same thing
i = my_array[0];  // Element 0 of my_array
     printf("i1=%c\n",i);
i = (*my_array);  // Dereference my_array
     printf("i2=%c\n",i);


my_array_ptr = my_array;

     printf("i3=%s\n",my_array);


     printf("i4=%s\n",my_array_ptr);

// This works but you don’t need to do it.
my_array_ptr = &(my_array[0]);

my_array_ptr++;
i = (*my_array_ptr);
     printf("i5=%c\n", (*my_array_ptr));

     printf("i6=%s\n",my_array_ptr);

return 0;
}
