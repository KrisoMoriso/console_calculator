#include <iostream>
#include "split_string.h"
#include <vector>
#include <string>


void split_string(std::string text_input, std::vector<double>& Nums, std::vector<char>& Ops, std::vector<double>& stored_nums) {

	
	
	bool did_enc_num = false;
	bool is_last_it_num = false;
	bool is_hash = false;
	std::string toDouble = "";
	double temp_eval = 0;
	int cos = text_input.length();

	for (int i = 0; i <= text_input.length(); i++) {
		if (text_input[i] == '+' or text_input[i] == '-' or text_input[i] == '*' or text_input[i] == '/' or text_input[i] == '^' or text_input[i] == '#' or text_input.length() == i) {
			if (text_input.length() != i and text_input[i] != '#')
			{
				Ops.push_back(text_input[i]);
			}

			if (is_last_it_num) {
				temp_eval = std::stod(toDouble);
				if (is_hash) {
					Nums.push_back(stored_nums[temp_eval]);
				}
				else {
					Nums.push_back(temp_eval);
				}
				toDouble.clear();
			}
			is_last_it_num = false;
			if (text_input[i] == '#') {
				if (is_hash) {
					is_hash = false;
				}
				else {
					is_hash = true;
				}
			}
		}
		else {
			is_last_it_num = true;
			toDouble.push_back(text_input[i]);
		}
	}
	std::cout;
}