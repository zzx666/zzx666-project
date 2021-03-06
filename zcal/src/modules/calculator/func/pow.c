#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"../../extend.h"
#include"../cal_tree.h"
#include"_handle_digit.h"

Result _func_pow(char *str){

	Result result;
	result.flag = -1;
	Double_array *da = _handle_digit(str);
	if(da != NULL){
		if(da->len == 1){
			result.result = pow(2, da->array[0]);
			result.flag = 1;
			free(da);
		}else if(da->len ==2){
			result.result = pow(da->array[0], da->array[1]);
			result.flag = 1;
			free(da);
		}else{
			/* 函数参数个数不对 */
			error_flag = 4;	
			free(da);
		}
	}

	return result;
}
