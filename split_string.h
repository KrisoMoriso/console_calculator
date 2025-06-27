#pragma once
#include <iostream>
#include <vector>

struct split_string_return_struct {
    std::vector<double> Nums;
    std::vector<char> Ops;
};
void split_string(std::string usr_inp, std::vector<double>& Nums, std::vector<char>& Ops);