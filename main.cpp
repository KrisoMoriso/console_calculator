#include <iostream>
#include <time.h>
#include <vector>
#include "split_string.h"
#include "eval_no_parentheses.h"
#include "eval_parentheses.h"




int main()
{
    std::string usr_inp = "((2+3+4))";
    //std::cin >> usr_inp;
    clock_t tStart = clock();
    split_string_return_struct return_struct = split_string(usr_inp);
    std::vector<double>& Nums = return_struct.Nums;
    std::vector<char>& Ops = return_struct.Ops;
    for (std::vector<double>::iterator it = Nums.begin(); it != Nums.end(); ++it) {
        std::cout << *it << '\n';
    }
    for (std::vector<char>::iterator it = Ops.begin(); it != Ops.end(); ++it) {
        std::cout << *it << '\n';
    }
    
    printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
    return 0;
}
