/*
编写一个声明，允许程序用这些格式中的任意一种形式对指令进行解释
声明中必须有一个名叫addr的unsigned short的类型字段，可以访问所有16位的值
在声明中使用typedef创建一个新的类型称为machine_inst
*/
typedef union
{
    unsigned short addr;
    struct {
        unsigned opcode:10;
        unsigned dst_mode:3;
        unsigned dst_reg:3;
    } sgl_op;
    struct {
        unsigned opcode:4;
        unsigned src_mode:3;
        unsigned src_reg:3;
        unsigned dst_mode:3;
        unsigned dst_reg:3;
    } dbl_op;
    struct {
        unsigned opcode:7;
        unsigned src_reg:3;
        unsigned dst_mode:3;
        unsigned dst_reg:3;
    } reg_src;
    struct {
        unsigned opcode:8;
        unsigned offset:8;
    } branch;
    struct {
        unsigned opcode:16;
    } misc;
}machine_inst;

