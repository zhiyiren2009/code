# function-print（print 函数）

## 打印函数

---

声明（在 $./print.cc$ ）

```C++
void print(std::string filename);
```

所以使用$print$时只要传入文件名

---

$print$特点：

1. 可以打印所有$Unicode$字符
2. 可以打印 "\n"，"\t" 等字符，无需转义
3. 打印时与编辑时格式完全一致，所见即所得，和主流编辑器格式一致（颜色除外，和 $linux$的$cat$效果一致）
4. 支持相对路径&绝对路径

---

$print$实例

```
vagrant@ubuntu1804:/vagrant/code/app/os$ ./binary/os
OS Shell
shell $ print /vagrant/hello.cc
#include <iostrea>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
shell $ print binary/hello.cc
#include <iostrea>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
shell $ exit
vagrant@ubuntu1804:/vagrant/code/app/os$
```

第 1 次为绝对路径测试 第 2 次为相对路径测试

---

系统

g++版本：

```
Using built-in specs.
COLLECT_GCC=g++-11
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/11/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 11.1.0-1ubuntu1~18.04.1' --with-bugurl=file:///usr/share/doc/gcc-11/README.Bugs --enable-languages=c,ada,c++,go,brig,d,fortran,objc,obj-c++,m2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-11 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-plugin --enable-default-pie --with-system-zlib --enable-libphobos-checking=release --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --disable-werror --disable-cet --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/gcc-11-YRKbe7/gcc-11-11.1.0/debian/tmp-nvptx/usr,amdgcn-amdhsa=/build/gcc-11-YRKbe7/gcc-11-11.1.0/debian/tmp-gcn/usr --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
Supported LTO compression algorithms: zlib zstd
gcc version 11.1.0 (Ubuntu 11.1.0-1ubuntu1~18.04.1)
```

系统版本：

```
Linux ubuntu1804 4.15.0-162-generic #170-Ubuntu SMP Mon Oct 18 11:38:05 UTC 2021 x86_64 x86_64 x86_64 GNU/Linux
```

---

此页面最后更新日期：

```
Sat. Nov. 27
2021
```