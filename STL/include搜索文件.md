> https://www.cnblogs.com/lsgxeva/p/7910509.html

- 这个开头讲gun的组件，也是就是说一个gun现在不是单纯的只有使用到c和c++的组件，在gun自己的文件目录下面，（具体是这个/usr/lib/gcc/x86_64-pc-linux-gnu/13.2.1）
- python就是不会那么繁杂，lib就是静态库，bin就是可执行文件， include就是库的源码结构

对于include目录而言，通常的**搜索顺序**是：
a) 包含指定源文件的目录（对于在 #include 命令中以引号包括的文件名）。
b) 采用-iquote选项指定的目录，依照出现在命令行中的顺序进行搜索。只对 #include 命令中采用引号的头文件名进行搜索。
c) 采用-I选型指定的目录，依照出现在命令行中的顺序进行搜索。
d) 采用环境变量 CPATH 指定的目录。*没有*
e) 采用-isystem选项指定的目录，依照出现在命令行中的顺序进行搜索。
f） 采用环境变量 C_INCLUDE_PATH 指定的目录。 *没有*
g) 系统默认的 include 目录。 *好像是/usr/include/c++/ 或者是直接在/usr/include 下就有*

（难道就是说整个操作系统就是用c写的？毕竟没有python的库在用户的include文件目录下）