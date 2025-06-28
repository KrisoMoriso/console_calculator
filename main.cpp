#include <iostream>
#include <vector>
#include "split_string.h"
#include "eval.h"
#include "eval_parentheses.h"




int main()
{
    std::string usr_inp = "2*#0#/#1#";

    std::vector<double> Nums;
    std::vector<char> Ops;
    //std::vector<double> stored_nums = { 2.5, 3.5 };
    while (true){
        std::cin >> usr_inp;
        eval_parentheses(Nums, Ops, usr_inp);
        double evaluation = eval(Nums, Ops);
        std::cout.precision(17);
        std::cout << evaluation << '\n';
        Nums.clear();
        Ops.clear();
    }
    //split_string(usr_inp, Nums, Ops, stored_nums);


    
    return 0;
}