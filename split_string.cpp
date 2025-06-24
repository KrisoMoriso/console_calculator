#include <iostream>
#include "split_string.h"

//split_string_return_struct split_string(std::string usr_inp) {
//
//    int num_start_index;
//    bool did_enc_num = false;
//    bool is_last_iter_op = true;
//    int num_end_index;
//
//    double* pNums = NULL;
//    int nums_to_set = 0;
//    char* pOps = NULL;
//    int ops_to_set = 0;
//
//    int nums_size = 0;
//    int ops_size = 0;
//    for (int i = 0; i < usr_inp.length(); i++) {
//        if (usr_inp[i] == '+' or usr_inp[i] == '-' or usr_inp[i] == '/' or usr_inp[i] == '*' or usr_inp[i] == '(' or usr_inp[i] == ')') {
//            ops_size++;
//        }
//        else {
//
//            nums_size++;
//        }
//    }
//
//    pNums = new double[nums_size];
//    pOps = new char[ops_size];
//
//     
//    for (int i = 0; i <= usr_inp.length(); i++) {
//        if (usr_inp[i] == '+' or usr_inp[i] == '-' or usr_inp[i] == '/' or usr_inp[i] == '*' or usr_inp[i] == '(' or usr_inp[i] == ')' or i == usr_inp.length()) {
//            if (!(i == usr_inp.length())) {
//                pOps[ops_to_set] = usr_inp[i];
//                ops_to_set++;
//            }
//            did_enc_num = false;
//            if (!is_last_iter_op) {
//                int num_length = (num_end_index - num_start_index);
//                char* pTemp;
//
//
//                pTemp = new char[num_length + 1];
//                for (int i = 0; i <= num_length; i++) {
//                    pTemp[i] = usr_inp[i + num_start_index];
//                }
//                pTemp[num_length + 1] = ' ';
//
//                pNums[nums_to_set] = std::atof(pTemp);
//                nums_to_set++;
//
//            }
//            is_last_iter_op = true;  
//        }
//        else  {
//            if (!did_enc_num) {
//                num_start_index = i;
//                num_end_index = i;
//                did_enc_num = true;
//
//            }
//            else {
//                num_end_index = i;
//
//            }
//            is_last_iter_op = false;
//        }
//    }
//
//    
//    split_string_return_struct return_struct;
//    return_struct.pNums = pNums;
//    return_struct.pOps = pOps;
//    return_struct.nums_size = nums_size;
//    return_struct.ops_size = ops_size;
//
//    return return_struct;
//}