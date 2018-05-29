    #include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    using namespace std;
    #define MAX 100000
    static int seen[MAX];

    static int randomNum[10000];

    int main (void) {
    int i;

    srand(time(NULL));

    for (i=0; i<10000; i++)
    {
      int n;
      do
  {
        n= rand() / (RAND_MAX / MAX + 1);
      }
    while (seen[n]);
        seen[n] = 1;
        randomNum[i] = n + 1;
      }

      for (i=0; i<10000; i++)
        cout << randomNum[i] << endl;

  return 0;
}
