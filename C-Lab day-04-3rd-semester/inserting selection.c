#include <stdio.h>

void selection( int n, int array[ ], int c, int d,int  t, int flag ){

     for (c = 1 ; c <= n - 1; c++)
        {
    t = array[c];

    for (d = c - 1 ; d >= 0; d--) {
      if (array[d] > t) {
        array[d+1] = array[d];
        flag = 1;
      }
      else
        break;
    }
    if (flag)
      array[d+1] = t;
  }

  printf("Sorted list :\n");

  for (c = 0; c <= n - 1; c++) {
    printf("%d ", array[c]);
  }

  return 0;

}

int main()
{
  int n, array[1000], c, d, t, flag = 0;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    {
    scanf("%d", &array[c]);

    }
selection(n, array,c,d,t,flag);
}
