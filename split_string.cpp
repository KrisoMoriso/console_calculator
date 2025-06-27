#include <iostream>
#include "split_string.h"
#include <vector>
#include <string>


void split_string(std::string text_input, std::vector<double>& Nums, std::vector<char>& Ops) {

	
	
	bool did_enc_num = false;
	bool is_last_it_num = false;
	std::string toDouble = "";
	double temp_eval = 0;
	int cos = text_input.length();

	for (int i = 0; i <= text_input.length(); i++) {
		if (text_input[i] == '+' or text_input[i] == '-' or text_input[i] == '*' or text_input[i] == '/' or text_input[i] == '^' or text_input.length() == i) {
			if (text_input.length() != i)
			{
				Ops.push_back(text_input[i]);
			}

			if (is_last_it_num) {
				temp_eval = std::stod(toDouble);
				Nums.push_back(temp_eval);
				toDouble = "";
			}
			is_last_it_num = false;
		}
		else {
			is_last_it_num = true;
			toDouble.push_back(text_input[i]);
		}
	}
	std::cout;
}