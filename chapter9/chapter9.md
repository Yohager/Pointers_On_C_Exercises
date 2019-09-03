### chapter 9 字符串，字符和字节

#### 常见的函数原型

1. 字符串长度：`size_t strlen(char const *string);`

   size_t是返回值，定义在头文件stddef.h中 ，是一个无符号整数类型

2. 复制字符串：`char *strcpy(char *dst, char const *src);`

   需要保证目标字符数组的空间足以容纳需要复制的字符串，否则会出一些问题。

3. 连接字符串：`char *strcat(char *dst, char const *src);`

   类似strcpy，需要保证目标字符数组的长度足以保存整个字符串。

4. 字符串比较：`int strcmp(char const *s1, char const *s2);`

   如果s1小于s2，strcmp就会返回一个小于零的值，如果s1大于s2，函数会返回一个大于零的值，如果两个字符串相等则返回零。

5. 长度受限的字符串函数

   `char *strncpy(char *dst, char const *src, size_t n);`

   `char *strncat(char *dst, char const *src, size_t n);`

   `int *strncmp(char const *s1, char const *s2, size_t n);`

6. 查找一个字符串：`char *strchr(char const *str, int ch);`或者`char *strrchr(char const *str, int ch);`

   ch是一个整型值，包含了一个字符值，strchr查找字符ch第一次出现的位置，strrchr查找的是字符ch在该字符串中最后一次出现的位置。

7. 查找任意几个字符：`char *strpbrk(char const *str, char const *group);`

   这个函数返回第一次匹配group中任意一个字符的字符位置，如果未找到匹配则返回一个NULL指针。

8. 查找一个子串：`char *strstr(char const *s1, char const *s2);`

   这个函数在s1中查找第一个出现s2子串的位置，并返回一个指向子串的第一个字符的位置的指针。

9. 查找一个字符串前缀：`size_t strspn(char const *str, char const *group);`和`size_t strcspn(char const *str, char const *group);`

   strspn检索字符串str中第一个不在字符串group中的出现的字符的位置。

   strcspn检索的是字符串str中开头连续有几个字符都不含字符串group的字符数量。（有点小绕）

10. 查找标记：`char *strtok(char *str, char const *sep);`

    strtok用于分解字符串str为一组字符串，sep为分隔符。

    example:

    ```c
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #define MAX_SIZE 100
    
    int main()
    {
        char string_1[MAX_SIZE] = "hello,this,is,the,world";
        const char group[2] = ",";
        char *token;
        token = strtok(string_1,group);
        while (token != NULL){
            printf("%s\n",token);
            token = strtok(NULL,group);
        }
        return 0;
    }
    
    ```

    输出结果：

    ```c
    hello
    this
    is
    the
    world
    ```

    就类似于之前在python中用的split函数

#### 字符操作

| 函数     | 参数符合条件返回真                                           |
| -------- | ------------------------------------------------------------ |
| iscntrl  | 任何控制字符                                                 |
| isspace  | 空白字符：空格' ',换页‘\f’,换行'\n',回车'\r',制表符'\t',垂直制表符'\v' |
| isdigit  | 十进制数字0-9                                                |
| isxdigit | 十六进制数字，包括所有十进制数字，小写字母a-f，大写字母A-F   |
| islower  | 小写字母a-z                                                  |
| isupper  | 大写字母A-Z                                                  |
| isalpha  | 字母a-z或A-Z                                                 |
| isalnum  | 字母或者数字：a-z, A-Z, 0-9                                  |
| ispunct  | 标点符号                                                     |
| isgraph  | 任何图形字符                                                 |
| isprint  | 任何可打印字符                                               |

#### 字符转换

`int tolower(int ch);`大写转小写

`int toupper(int ch);`小写转大写

#### 内存操作

`memcpy`

函数原型：`void *memcpy(void *dst, void const *src, size_t length);`

从src的起始位置复制length个字节到dst的内存起始位置。（以字节计数）

`memcmp`

函数原型：`void *memcmp(void *s1, void *s2, size_t length);`

从起始位置比较长度为length的字符子串

`memchr`

函数原型：`void *memchr(void const *src,int ch, size_t length)`

从src的起始地址查找length个字符，返回ch第一次出现的位置，没有出现则返回NULL指针

`memset`

函数原型：`void *memset(void *src, int ch, size_t length);`

从src的起始位置将length个字符全部设置为ch字符

