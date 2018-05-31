# thread_local_test

Repoduces an issue with using thread_local in header only libraries when consumed by shared libraries and the main executable.

Build & Run: <br/>
mkdir build <br/>
cd build <br/>
cmake -G Ninja .. -DCMAKE_BUILD_TYPE=Release <br/>
ninja all <br/>
./thread_local_test <br/>


Example output gcc (5.4.0 and 8.1): <br/>
static int* i; &i:0x7fe8d20ea738, i:(nil)   <br/>
static int* i; &i:0x7fe8d20ea730, i:(nil)   <br/>
static int* i; &i:0x7fe8d20ea738, i:0xb99030 <br/>
static int* i; &i:0x7fe8d20ea730, i:0xb99050 <br/>

Example output clang: <br/>
static int* i; &i:0x7f3352e3e738, i:(nil)     <br/>
static int* i; &i:0x7f3352e3e738, i:0x2571030 <br/>
static int* i; &i:0x7f3352e3e738, i:0x2571030 <br/>
static int* i; &i:0x7f3352e3e738, i:0x2571030 <br/>