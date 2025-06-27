#include <iostream>
#include <time.h>
#include "eval.h"
#include <vector>

double eval(std::vector<double>& Nums, std::vector<char>& Ops) {


    bool did_finish = false;
    while (!did_finish){
        did_finish = true;
        for (int i = 0; i < Ops.size(); i++) {
            double temp_eval = 0;
            if (Ops[i] == '*' or Ops[i] == '/') {
                switch (Ops[i])
                {
                case '*':
                    temp_eval = Nums[i] * Nums[i + 1];
                    break;
                case '/':
                    temp_eval = Nums[i] / Nums[i + 1];
                default:
                    break;
                }
                
                Nums[i] = temp_eval;
                std::vector<double>::iterator itNums = Nums.begin() + i + 1;
                Nums.erase(itNums);
                std::vector<char>::iterator itOps = Ops.begin() + i;
                Ops.erase(itOps);
                did_finish = false;
                break;
            }
        }
    
    }
    double temp_eval = Nums[0];
    for (int i = 0; i < Ops.size(); i++) {
        switch (Ops[i]) {
            case '+':
                temp_eval += Nums[i + 1];
                break;
            case '-':
                temp_eval -= Nums[i + 1];
                break;
        }
    }
    return temp_eval;
}