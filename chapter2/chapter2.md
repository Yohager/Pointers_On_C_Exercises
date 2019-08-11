#### 一些零碎的知识点

##### C程序的编译过程

四个步骤：预处理 -> 编译 -> 汇编 -> 链接

1. 预处理

   预处理器在源代码上执行一些文本操作，例如处理`#define`和`#include`等指令

2. 编译

   检查语法生成汇编代码

3. 汇编

   汇编代码转换为机器码（编译器）

4. 链接

   源代码编译为目标代码后形成.o文件与源代码中需要的库文件合并为可执行文件

##### 在main.cpp中调用其他的c文件

两种方法：

1. 在main.cpp中使用extern调用外部cpp文件中的函数
2. 编写.h的头文件，在main.cpp中使用#include添加编写好的.h头文件



#### 关于习题练习

1. question_c2_3.cpp 出现**三字母词**以及其他的一些使用反斜杠的转义字符的情况
2. exercise_c2_1_increment.cpp, exercise_c2_1_negate.cpp, exercise_c2_main.cpp 在main.cpp中如何调用其他的C文件
3. exercise_c2_2.cpp 读取一个包含一段C程序的txt文件，检查其中花括号使用的情况

