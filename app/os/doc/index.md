# OS Doc

## 本程序以**GNU** **GENERAL** **PUBLIC** **LICENSE** **VERSION** **3** （**GPLv3**）发布

$config.cc$用于配置$shell$，配置完成执行$./build$编译

由于本文件嵌入至程序，必须编译！！（$build$须更新）

只能使用$C/C++$编写，其他语言的滚！

$shell.cc$在读取命令后调用$shell$

程序名放在$prog$参数在$parameter$

$parameter$需要自己解析，$shell.cc$不负责解析

其实$shell$就是根据$prog$找到对应的$funtion$并传入参数

不建议修改除$config.cc$以外的文件

$funtion$可以写在其他文件

代码我已尽量打上注释，更详细的见$markdown$文件

目前已实现：

1. $print$ 文件打印(见[function-print.md](function-print.md))

---

此页面最后更新日期：

```
Sat. Nov. 27
2021
```
