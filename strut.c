#include<stdio.h>
struct structure
{
    int myvalue;
    char myletter;
};
    void t()
    {

    struct structure s1;
     s1.myvalue=10;
     s1.myletter='A';
      printf("\n myvalue is: %f",s1.myvalue);
      printf(" \n myletter is: %c",s1.myletter);
      return 0;
}


