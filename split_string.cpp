#include <iostream>
#include "split_string.h"
#include <vector>
#include <string>


split_string_return_struct split_string(std::string usr_inp) {

	std::vector<double> Nums;
	std::vector<char> Ops;
	bool did_enc_num = false;
	bool is_last_it_num = false;
	std::string toDouble = "";
	double temp_eval = 0;
	int cos = usr_inp.length();

	for (int i = 0; i < usr_inp.length(); i++) {
		if (usr_inp[i] == '+' or usr_inp[i] == '-' or usr_inp[i] == '*' or usr_inp[i] == '/' or usr_inp[i] == '(' or usr_inp[i] == ')') {
			Ops.push_back(usr_inp[i]);
			if (is_last_it_num) {
				temp_eval = std::stod(toDouble);
				Nums.push_back(temp_eval);
				toDouble = "";
			}
			is_last_it_num = false;
		}
		else {
			is_last_it_num = true;
			toDouble.push_back(usr_inp[i]);
		}
	}

	split_string_return_struct return_struct;
	return_struct.Nums = Nums;
	return_struct.Ops = Ops;
	return return_struct;
}