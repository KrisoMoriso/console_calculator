#include <iostream>
#include "split_string.h"
#include "eval.h"
#include <vector>
#include <string>

void eval_parentheses(std::vector<double>& Nums, std::vector<char>& Ops, std::string text_input) {

	bool did_eval = false;
	int open_parentheses_index = 0;
	int close_parentheses_index = 0;
	std::vector<double> stored_nums;;
	int stored_num_index = 0;
	std::vector<double> temp_nums;
	std::vector<char> temp_ops;
	std::string temp_text_input;
	double temp_eval = 0;
	while (!did_eval) {
		did_eval = true;
		for (int i = 0; i < text_input.size(); i++) {
			if (text_input[i] == '(' or text_input[i] == ')') {
				did_eval = false;
			}
			if (text_input[i] == '(') {
				open_parentheses_index = i;
			}
			else if (text_input[i] == ')') {
				close_parentheses_index = i;
				break;
			}
		}
		if (did_eval) {
			break;
		}
		for (int i = open_parentheses_index + 1; i <= close_parentheses_index - 1; i++) {
			temp_text_input.push_back(text_input[i]);
		}
		split_string(temp_text_input, temp_nums, temp_ops, stored_nums);
		temp_eval = eval(temp_nums, temp_ops);
		std::string::iterator string_it_open = text_input.begin() + open_parentheses_index;
		std::string::iterator string_it_close = text_input.begin() + close_parentheses_index + 1;
		text_input.erase(string_it_open, string_it_close);

		stored_nums.push_back(temp_eval);
		text_input.insert(open_parentheses_index, '#' + std::to_string(stored_num_index) + '#');
		stored_num_index++;
		temp_nums.clear();
		temp_ops.clear();
		temp_text_input.clear();
	}

	split_string(text_input, Nums, Ops, stored_nums);


}