# 說明

先看架構圖:  
Appendix A-Control Flow Graph.pdf  
裡面我有照編號標出流程1~12  
code裡面有註解哪個function是對應哪幾個流程  

# 編譯main.cpp
用支援C11的C++ complier編譯main.cpp，例:  
```g++ -std=c++11 main.cpp -o main ```

# 使用方法
### Input
 執行main後
 他會吃五個數，前三個是int，後兩個是True/False（但其實還是int）
 
 ```
 typedef struct {
 
    int wages;              //  薪資
    int taxable_interest;   //  不知道幹嘛用的
    int compensation;       //  補償額?
    int marital_status;     //  是否已婚 1:已婚 0:未婚
    int is_dependent;       //  是否獨立(沒有扶養或被扶養?) 1:yes 0:no
    
} PersonWage;
```

 example :  
 ```echo "100000 1000 2000 1 0" | ./main  ```

### Output

```
typedef struct {

    int adjusted_gross_income = -1;     //Adjusted Gross Income
    int min_sd = -1;                    //Minimum Standard Deduction,
    int max_sd = -1;                    //Maximum Standard Deduction
    int sd = -1;                        //Standard Deduction
    int taxable_income = -1;            //Taxable Income

} Output;
```
根據作業Q1描述，output有五項    
不是五項都有輸出，會根據輸入的option而變，沒有輸出則預設輸出-1  
例如：  
```
cswu@Chi-Sheng-MacBook-Pro:~/sqa (master)$ echo "100000 1000 2000 1 0" | ./main
103000        -1        -1        -1     85500
```

