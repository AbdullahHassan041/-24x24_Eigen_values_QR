#define _COMPLEX_MULTIPLIER_H_
#include <complex>
#include <iostream>
#include "hls_linear_algebra.h"
#include "hls_math.h"
#include "math.h"
#include "stdio.h"
#include "stdint.h"
#define matrix_size 24
#define row 24
#define column 24
#define Inp_matrix 24
using namespace std;
//typedef float matrix_t;
typedef complex<float>matrix_t;
void decomposition(matrix_t input[row][column]);
void Status_check_call(matrix_t input[row][column]);
void  upper_triagular_matrix(matrix_t ptr_col1[column],matrix_t ptr_col2[column],matrix_t ptr_col3[column],matrix_t ptr_col4[column],matrix_t ptr_col5[column],
		matrix_t ptr_col6[column],matrix_t ptr_col7[column],matrix_t ptr_col8[column],matrix_t ptr_col9[column],matrix_t ptr_col10[column],matrix_t ptr_col11[column],
		matrix_t ptr_col12[column],matrix_t ptr_col13[column],matrix_t ptr_col14[column],matrix_t ptr_col15[column],matrix_t ptr_col16[column],matrix_t ptr_col17[column],
		matrix_t ptr_col18[column],matrix_t ptr_col19[column],matrix_t ptr_col20[column],matrix_t ptr_col21[column],matrix_t ptr_col22[column],matrix_t ptr_col23[column],
		matrix_t ptr_col24[column]);



void caculate_ee1(matrix_t  ptr_ee1[column]);
void caculate_ee2(matrix_t  ptr_ee2[column]);
void caculate_ee3(matrix_t  ptr_ee3[column]);
void caculate_ee4(matrix_t  ptr_ee4[column]);
void caculate_ee5(matrix_t  ptr_ee5[column]);
void caculate_ee6(matrix_t  ptr_ee6[column]);
void caculate_ee7(matrix_t  ptr_ee7[column]);
void caculate_ee8(matrix_t  ptr_ee8[column]);
void caculate_ee9(matrix_t  ptr_ee9[column]);
void caculate_ee10(matrix_t ptr_ee10[column]);
void caculate_ee11(matrix_t ptr_ee11[column]);
void caculate_ee12(matrix_t ptr_ee12[column]);
void caculate_ee13(matrix_t ptr_ee13[column]);
void caculate_ee14(matrix_t ptr_ee14[column]);
void caculate_ee15(matrix_t ptr_ee15[column]);
void caculate_ee16(matrix_t ptr_ee16[column]);
void caculate_ee17(matrix_t ptr_ee17[column]);
void caculate_ee18(matrix_t ptr_ee18[column]);
void caculate_ee19(matrix_t ptr_ee19[column]);
void caculate_ee20(matrix_t ptr_ee20[column]);
void caculate_ee21(matrix_t ptr_ee21[column]);
void caculate_ee22(matrix_t ptr_ee22[column]);
void caculate_ee23(matrix_t ptr_ee23[column]);
void caculate_ee24(matrix_t ptr_ee24[column]);

