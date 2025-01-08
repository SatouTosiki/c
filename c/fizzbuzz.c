#include <stdio.h>

int main() {
    for (int i = 1; i < 100; i++)
    {
        if(i % 5 == 0 && i % 3 == 0)
        {
           printf("FizzBuzz\n");
        }
        else if (i % 5 == 0)
        {
             printf("buzz: %d\n", i);  // %dを追加
        }
        else if (i % 3 == 0)
        {
          printf("fizz: %d\n", i);  // %dを追加
        }
        else 
        {
             printf("%d\n", i);

        }
    }
    return 0;
}