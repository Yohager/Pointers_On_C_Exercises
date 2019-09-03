/*
为一个信息系统编写一个声明
用于记录每个汽车零售商的销售情况，每一份销售记录需要包括
顾客姓名，顾客地址，模型
销售时存在三种不同的交易……
*/
struct INFO{
    char cust_name[21];
    char cust_addr[41];
    char model[21];
    float msrp;
    float sales_price;
    enum {PURE_CASH, CASH_LOAN, LEASE} type;
    union {
        struct {
            float sales_tax;
            float licensing_fee;
        }pure_cash;

        struct {
            float sales_tax;
            float licensing_fee;
            float down_payment;
            int loan_duration;
            float interest_rate;
            float monthly_payment;
            char bank[21];
        }cash_loan;

        struct {
            float down_payment;
            float security_deposit;
            float monthly_payment;
            float lease_term;
        }lease;
    }info;
};
