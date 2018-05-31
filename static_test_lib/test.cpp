#include "test.h"

int* TestWorker::test_static2()
{
   thread_local static int* i;
   printf("static int* i; &i:%p, i:%p\n",&i, i);
   if(!i)
      i = new int(1);
}