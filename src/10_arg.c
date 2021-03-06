#include<stdio.h>
#include<stdarg.h>

void printargument(int num_args, ...) {
  
  va_list arg_list;
  int my_arg;
  va_start(arg_list, num_args);

  //Print until zero
  for (my_arg = num_args; my_arg != 0; my_arg = va_arg(arg_list, int))
    printf("%d\n", my_arg);
  
  va_end(arg_list);
}

int main(void) {
	printargument(5,10,15, 3,30, 34,2,0);
	return 0;
}

