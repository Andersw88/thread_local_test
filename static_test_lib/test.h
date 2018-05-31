#pragma once


#include <stdio.h>

struct TestWorker
{
   // __attribute__ ((noinline)) static int* test_static()
   static int* test_static()
   {
      thread_local static int* i;
      printf("static int* i; &i:%p, i:%p\n",&i, i);
      if(!i)
         i = new int(1);
         
   }

   static int* test_static2();
};