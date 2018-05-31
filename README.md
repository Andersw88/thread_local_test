# thread_local_test

Repoduces an issue with using thread_local in header only libraries when consumed by shared libraries and the main executable.

Build & Run: <br/>
mkdir build <br/>
cd build <br/>
cmake -G Ninja .. -DCMAKE_BUILD_TYPE=Release <br/>
ninja all <br/>
./thread_local_test <br/>


Example output: <br/>
static int* i; &i:0xf7305a7c, i:(nil) <br/>
static int* i; &i:0xf7305a78, i:(nil) <br/>
static int* i; &i:0xf7305a7c, i:0x8233e18 <br/>
static int* i; &i:0xf7305a78, i:0x8233e28 <br/>
