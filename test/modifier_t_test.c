#include "../main.h"

int main(void)
{
  modifier_t data;
  modifier_t* ptr = &data;

  data.flags = "rotimi";
  ptr->width = 55;

  printf("Flag data is: %s\n", data.flags);
  printf("Address of data is: %p\n", ptr);
  printf("When derefrence this is precision: %i\n", ptr->width);

  ptr->width = 125;
  ptr->flags = "Jonathan";

  printf("The new value of width is: %i\n", ptr->width);
  printf("New value of flags is: %s\n", ptr->flags);
  printf("Using dot notation, value of width is the same: %i\n", data.width);
  
  return (0);
}
