#include <dlfcn.h>

#include "MakeWorker.h"
#include "test.h"

#include <stdio.h>
#include <sstream>
#include <iostream>


int main()
{
   // void *handle = dlopen("shared_test_lib/libshared_test_lib.so", RTLD_LAZY);

   // dlerror();
   // typedef void*(*testStaticFromShared_func)();
   // testStaticFromShared_func testStaticFromShared = (testStaticFromShared_func)dlsym(handle, "testStaticFromShared");
   // const char *dlsym_error1 = dlerror();
   // if (dlsym_error1)
   // {
   //    std::cout << "Cannot load symbol 'testStaticFromShared_func': " << dlsym_error1 << '\n';
   //    dlclose(handle);
   //    return 1;
   // }


   TestWorker::test_static();
   // TestWorker::test_static2();
   testStaticFromShared();

   TestWorker::test_static();
   // TestWorker::test_static2();
   testStaticFromShared();

   // getchar();
}