#include <stdio.h>
int main()
{
   int x=1;
   int y=1;
   int z=0;
   printf("X = TRUE\n");
   printf("Y = TRUE\n");
   printf("Z =FALSE\n");
   printf("TRUTH TABLE OF X,Y AND Z:\n\n");
   printf("X and Y and Z = %d",(x&&y&&z));
   printf("\n X or Y or Z =%d",(x||y||z));
   printf("\n not X = %d ",(!x));
   printf("\n not Y =%d ",(!y));
   printf("\n not z = %d ",(!z));
   return 0;
}
