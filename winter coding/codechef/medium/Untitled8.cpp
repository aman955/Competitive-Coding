#include <stdio.h>
#include <math.h>
 
void printPowerSet(int *set, int set_size)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j,val=0;
 
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
    	val=0;
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
            val=val+set[j];
       }
       printf("%d\n",val);
    }
}
 
/*Driver program to test printPowerSet*/
int main()
{
    int set[] = {1,2,10};
    printPowerSet(set, 3);
 
    getchar();
    return 0;
}
