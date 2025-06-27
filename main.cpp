#include <iostream>
#include <time.h>
#include <vector>
#include "split_string.h"
#include "eval.h"
#include "eval_parentheses.h"




int main()
{
    std::string usr_inp = "2*((3+4))";
    clock_t tStart = clock();

    std::vector<double> Nums;
    std::vector<char> Ops;

    while (true){
        std::cin >> usr_inp;
        tStart = clock();
        eval_parentheses(Nums, Ops, usr_inp);
        double evaluation = eval(Nums, Ops);
        std::cout << evaluation << '\n';
        Nums.clear();
        Ops.clear();
        printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
    }



    
    return 0;
}