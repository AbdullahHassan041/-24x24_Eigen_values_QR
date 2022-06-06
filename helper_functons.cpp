#include "dec.h"
#include <iostream>
#define _COMPLEX_MULTIPLIER_H_
#include <complex>
#include "stdio.h"
#include "stdint.h"
using namespace hls;
using namespace std;
matrix_t q_e1[row];
matrix_t q_e2[row];
matrix_t q_e3[row];
matrix_t q_e4[row];
matrix_t q_e5[row];
matrix_t q_e6[row];
matrix_t q_e7[row];
matrix_t q_e8[row];
matrix_t q_e9[row];
matrix_t q_e10[row];
matrix_t q_e11[row];
matrix_t q_e12[row];
matrix_t q_e13[row];
matrix_t q_e14[row];
matrix_t q_e15[row];
matrix_t q_e16[row];
matrix_t q_e17[row];
matrix_t q_e18[row];
matrix_t q_e19[row];
matrix_t q_e20[row];
matrix_t q_e21[row];
matrix_t q_e22[row];
matrix_t q_e23[row];
matrix_t q_e24[row];
matrix_t RR[575];
///////////////////////////////////functions/////////////////////////////////////////////////////
void caculate_ee1(matrix_t ptr_ee1[column])
{
	matrix_t temp1_pow=0;
	matrix_t det_e1 =0;
	for(int i = 0; i <column; i++)
		{
		temp1_pow=temp1_pow+(pow(ptr_ee1[i],2));
		}
	det_e1 =sqrt(temp1_pow);
	for(int i = 0; i <column; i++)
		{
		q_e1[i]=(*(ptr_ee1+i))/ det_e1;
		}

}

void caculate_ee2(matrix_t ptr_ee2[column])
{
	matrix_t temp2_pow=0;
	matrix_t temp2_multiply1=0;
	matrix_t temp2_multiply2[row];
	matrix_t det_e2 =0;
	for(int i = 0; i <column; i++)
		{
		temp2_multiply1=temp2_multiply1+((*(ptr_ee2+i))*q_e1[i]);
		}
	for(int i = 0; i <column; i++)
		{
		temp2_multiply2[i]=((*(ptr_ee2+i))-(temp2_multiply1* q_e1[i]));
		temp2_pow=temp2_pow+(pow(temp2_multiply2[i],2));
		}
	det_e2 =sqrt(temp2_pow);
	for(int i = 0; i <column; i++)
		{
		q_e2[i]=(temp2_multiply2[i])/ det_e2;
		}

}

void caculate_ee3(matrix_t ptr_ee3[column])
{
	matrix_t temp3_pow=0;
	matrix_t det_e3 =0;
	matrix_t temp3_multiply1=0;
	matrix_t temp3_multiply2=0;
	matrix_t temp3_multiply3[row];
	matrix_t temp3_multiply4[row];
	matrix_t temp3_multiply5[row];
	for(int i = 0; i <column; i++)
	{
		temp3_multiply1=temp3_multiply1+((*(ptr_ee3+i))*q_e1[i]);
		temp3_multiply2=temp3_multiply2+((*(ptr_ee3+i))*q_e2[i]);
	}

	for(int i = 0; i <column; i++)
	{
		temp3_multiply3[i]=((q_e1[i]) * temp3_multiply1);
		temp3_multiply4[i]=((q_e2[i]) * temp3_multiply2);
	}
	for(int i = 0; i <column; i++)
	{
		temp3_multiply5[i]=( (*(ptr_ee3+i)) - (temp3_multiply3[i]) - (temp3_multiply4[i]) );
		temp3_pow=temp3_pow+(pow(temp3_multiply5[i],2));
	}
	det_e3 =sqrt(temp3_pow);
	for(int i = 0; i <column; i++)
	{
		q_e3[i]=(temp3_multiply5[i])/ det_e3;
	}


}

void caculate_ee4(matrix_t ptr_ee4[column])
{
	matrix_t temp4_pow=0;
	matrix_t det_e4 =0;
	matrix_t temp4_multiply1=0;
	matrix_t temp4_multiply2=0;
	matrix_t temp4_multiply3=0;
	matrix_t temp4_multiply4[row];
	matrix_t temp4_multiply5[row];
	matrix_t temp4_multiply6[row];
	matrix_t temp4_multiply7[row];
	for(int i = 0; i <column; i++)
	{
		temp4_multiply1=temp4_multiply1+((*(ptr_ee4+i))*q_e1[i]);
		temp4_multiply2=temp4_multiply2+((*(ptr_ee4+i))*q_e2[i]);
		temp4_multiply3=temp4_multiply3+((*(ptr_ee4+i))*q_e3[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp4_multiply4[i]=((q_e1[i]) * temp4_multiply1);
		temp4_multiply5[i]=((q_e2[i]) * temp4_multiply2);
		temp4_multiply6[i]=((q_e3[i]) * temp4_multiply3);

	}
	for(int i = 0; i <column; i++)
	{
		temp4_multiply7[i]=( (*(ptr_ee4+i)) - (temp4_multiply4[i]) - (temp4_multiply5[i]) - (temp4_multiply6[i]) );
		temp4_pow=temp4_pow+(pow(temp4_multiply7[i],2));
	}
	det_e4 =sqrt(temp4_pow);
	for(int i = 0; i <column; i++)
	{
		q_e4[i]=(temp4_multiply7[i])/ det_e4;
	}

}

void caculate_ee5(matrix_t ptr_ee5[column])
{
	matrix_t temp5_pow=0;
	matrix_t det_e5 =0;
	matrix_t temp5_multiply1=0;
	matrix_t temp5_multiply2=0;
	matrix_t temp5_multiply3=0;
	matrix_t temp5_multiply4=0;
	matrix_t temp5_multiply5[row];
	matrix_t temp5_multiply6[row];
	matrix_t temp5_multiply7[row];
	matrix_t temp5_multiply8[row];
	matrix_t temp5_multiply9[row];
	for(int i = 0; i <column; i++)
	{
		temp5_multiply1=temp5_multiply1+((*(ptr_ee5+i))*q_e1[i]);
		temp5_multiply2=temp5_multiply2+((*(ptr_ee5+i))*q_e2[i]);
		temp5_multiply3=temp5_multiply3+((*(ptr_ee5+i))*q_e3[i]);
		temp5_multiply4=temp5_multiply3+((*(ptr_ee5+i))*q_e4[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp5_multiply5[i]=((q_e1[i]) * temp5_multiply1);
		temp5_multiply6[i]=((q_e2[i]) * temp5_multiply2);
		temp5_multiply7[i]=((q_e3[i]) * temp5_multiply3);
		temp5_multiply8[i]=((q_e4[i]) * temp5_multiply4);

	}
	for(int i = 0; i <column; i++)
	{
		temp5_multiply9[i]=( (*(ptr_ee5+i)) - (temp5_multiply5[i]) - (temp5_multiply6[i]) - (temp5_multiply7[i]) - (temp5_multiply8[i]) );
		temp5_pow=temp5_pow+(pow(temp5_multiply9[i],2));
	}
	det_e5 =sqrt(temp5_pow);
	for(int i = 0; i <column; i++)
	{
		q_e5[i]=(temp5_multiply9[i])/ det_e5;
	}

}

void caculate_ee6(matrix_t ptr_ee6[column])
{
	matrix_t temp6_pow=0;
	matrix_t det_e6 =0;
	matrix_t temp6_multiply1=0;
	matrix_t temp6_multiply2=0;
	matrix_t temp6_multiply3=0;
	matrix_t temp6_multiply4=0;
	matrix_t temp6_multiply5=0;
	matrix_t temp6_multiply6[row];
	matrix_t temp6_multiply7[row];
	matrix_t temp6_multiply8[row];
	matrix_t temp6_multiply9[row];
	matrix_t temp6_multiply10[row];
	matrix_t temp6_multiply11[row];
	for(int i = 0; i <column; i++)
	{
		temp6_multiply1=temp6_multiply1+((*(ptr_ee6+i))*q_e1[i]);
		temp6_multiply2=temp6_multiply2+((*(ptr_ee6+i))*q_e2[i]);
		temp6_multiply3=temp6_multiply3+((*(ptr_ee6+i))*q_e3[i]);
		temp6_multiply4=temp6_multiply4+((*(ptr_ee6+i))*q_e4[i]);
		temp6_multiply5=temp6_multiply5+((*(ptr_ee6+i))*q_e5[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp6_multiply6[i]=((q_e1[i]) * temp6_multiply1);
		temp6_multiply7[i]=((q_e2[i]) * temp6_multiply2);
		temp6_multiply8[i]=((q_e3[i]) * temp6_multiply3);
		temp6_multiply9[i]=((q_e4[i]) * temp6_multiply4);
		temp6_multiply10[i]=((q_e5[i]) * temp6_multiply5);
	}
	for(int i = 0; i <column; i++)
	{
		temp6_multiply11[i]=( (*(ptr_ee6+i)) - (temp6_multiply6[i]) - (temp6_multiply7[i]) - (temp6_multiply8[i]) - (temp6_multiply9[i])- (temp6_multiply10[i]) );
		temp6_pow=temp6_pow+(pow(temp6_multiply11[i],2));
	}
	det_e6 =sqrt(temp6_pow);
	for(int i = 0; i <column; i++)
	{
		q_e6[i]=(temp6_multiply11[i])/ det_e6;
	}

}

void caculate_ee7(matrix_t ptr_ee7[column])
{
	matrix_t temp7_pow=0;
	matrix_t det_e7 =0;
	matrix_t temp7_multiply1=0;
	matrix_t temp7_multiply2=0;
	matrix_t temp7_multiply3=0;
	matrix_t temp7_multiply4=0;
	matrix_t temp7_multiply5=0;
	matrix_t temp7_multiply6=0;
	matrix_t temp7_multiply7[row];
	matrix_t temp7_multiply8[row];
	matrix_t temp7_multiply9[row];
	matrix_t temp7_multiply10[row];
	matrix_t temp7_multiply11[row];
	matrix_t temp7_multiply12[row];
	matrix_t temp7_multiply13[row];
	for(int i = 0; i <column; i++)
	{
		temp7_multiply1=temp7_multiply1+((*(ptr_ee7+i))*q_e1[i]);
		temp7_multiply2=temp7_multiply2+((*(ptr_ee7+i))*q_e2[i]);
		temp7_multiply3=temp7_multiply3+((*(ptr_ee7+i))*q_e3[i]);
		temp7_multiply4=temp7_multiply4+((*(ptr_ee7+i))*q_e4[i]);
		temp7_multiply5=temp7_multiply5+((*(ptr_ee7+i))*q_e5[i]);
		temp7_multiply6=temp7_multiply6+((*(ptr_ee7+i))*q_e6[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp7_multiply7[i]=((q_e1[i]) * temp7_multiply1);
		temp7_multiply8[i]=((q_e2[i]) * temp7_multiply2);
		temp7_multiply9[i]=((q_e3[i]) * temp7_multiply3);
		temp7_multiply10[i]=((q_e4[i]) * temp7_multiply4);
		temp7_multiply11[i]=((q_e5[i]) * temp7_multiply5);
		temp7_multiply12[i]=((q_e6[i]) * temp7_multiply6);
	}
	for(int i = 0; i <column; i++)
	{
		temp7_multiply13[i]=( (*(ptr_ee7+i)) - (temp7_multiply7[i]) - (temp7_multiply8[i]) - (temp7_multiply9[i]) - (temp7_multiply10[i]) -
				(temp7_multiply11[i]) - (temp7_multiply12[i]) );
		temp7_pow=temp7_pow+(pow(temp7_multiply13[i],2));
	}
	det_e7 =sqrt(temp7_pow);
	for(int i = 0; i <column; i++)
	{
		q_e7[i]=(temp7_multiply13[i])/ det_e7;
	}

}


void caculate_ee8(matrix_t ptr_ee8[column])
{
	matrix_t temp8_pow=0;
	matrix_t det_e8 =0;
	matrix_t temp8_multiply1=0;
	matrix_t temp8_multiply2=0;
	matrix_t temp8_multiply3=0;
	matrix_t temp8_multiply4=0;
	matrix_t temp8_multiply5=0;
	matrix_t temp8_multiply6=0;
	matrix_t temp8_multiply7=0;
	matrix_t temp8_multiply8[row];
	matrix_t temp8_multiply9[row];
	matrix_t temp8_multiply10[row];
	matrix_t temp8_multiply11[row];
	matrix_t temp8_multiply12[row];
	matrix_t temp8_multiply13[row];
	matrix_t temp8_multiply14[row];
	matrix_t temp8_multiply15[row];
	for(int i = 0; i <column; i++)
	{
		temp8_multiply1=temp8_multiply1+((*(ptr_ee8+i))*q_e1[i]);
		temp8_multiply2=temp8_multiply2+((*(ptr_ee8+i))*q_e2[i]);
		temp8_multiply3=temp8_multiply3+((*(ptr_ee8+i))*q_e3[i]);
		temp8_multiply4=temp8_multiply4+((*(ptr_ee8+i))*q_e4[i]);
		temp8_multiply5=temp8_multiply5+((*(ptr_ee8+i))*q_e5[i]);
		temp8_multiply6=temp8_multiply6+((*(ptr_ee8+i))*q_e6[i]);
		temp8_multiply7=temp8_multiply7+((*(ptr_ee8+i))*q_e7[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp8_multiply8[i]=((q_e1[i]) * temp8_multiply1);
		temp8_multiply9[i]=((q_e2[i]) * temp8_multiply2);
		temp8_multiply10[i]=((q_e3[i]) * temp8_multiply3);
		temp8_multiply11[i]=((q_e4[i]) * temp8_multiply4);
		temp8_multiply12[i]=((q_e5[i]) * temp8_multiply5);
		temp8_multiply13[i]=((q_e6[i]) * temp8_multiply6);
		temp8_multiply14[i]=((q_e7[i]) * temp8_multiply7);
	}

	for(int i = 0; i <column; i++)
	{
		temp8_multiply15[i]=( (*(ptr_ee8+i)) - (temp8_multiply8[i]) - (temp8_multiply9[i]) - (temp8_multiply10[i]) - (temp8_multiply11[i]) -
				(temp8_multiply12[i]) - (temp8_multiply13[i])- (temp8_multiply14[i]) );
		temp8_pow=temp8_pow+(pow(temp8_multiply15[i],2));
	}
	det_e8 =sqrt(temp8_pow);
	for(int i = 0; i <column; i++)
	{
		q_e8[i]=(temp8_multiply15[i])/ det_e8;
	}

}

void caculate_ee9(matrix_t ptr_ee9[column])
{
	matrix_t temp9_pow=0;
	matrix_t det_e9 =0;
	matrix_t temp9_multiply1=0;
	matrix_t temp9_multiply2=0;
	matrix_t temp9_multiply3=0;
	matrix_t temp9_multiply4=0;
	matrix_t temp9_multiply5=0;
	matrix_t temp9_multiply6=0;
	matrix_t temp9_multiply7=0;
	matrix_t temp9_multiply8=0;
	matrix_t temp9_multiply9[row];
	matrix_t temp9_multiply10[row];
	matrix_t temp9_multiply11[row];
	matrix_t temp9_multiply12[row];
	matrix_t temp9_multiply13[row];
	matrix_t temp9_multiply14[row];
	matrix_t temp9_multiply15[row];
	matrix_t temp9_multiply16[row];
	matrix_t temp9_multiply17[row];
	for(int i = 0; i <column; i++)
	{
		temp9_multiply1=temp9_multiply1+((*(ptr_ee9+i))*q_e1[i]);
		temp9_multiply2=temp9_multiply2+((*(ptr_ee9+i))*q_e2[i]);
		temp9_multiply3=temp9_multiply3+((*(ptr_ee9+i))*q_e3[i]);
		temp9_multiply4=temp9_multiply4+((*(ptr_ee9+i))*q_e4[i]);
		temp9_multiply5=temp9_multiply5+((*(ptr_ee9+i))*q_e5[i]);
		temp9_multiply6=temp9_multiply6+((*(ptr_ee9+i))*q_e6[i]);
		temp9_multiply7=temp9_multiply7+((*(ptr_ee9+i))*q_e7[i]);
		temp9_multiply8=temp9_multiply8+((*(ptr_ee9+i))*q_e8[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp9_multiply9[i]=((q_e1[i]) * temp9_multiply1);
		temp9_multiply10[i]=((q_e2[i]) * temp9_multiply2);
		temp9_multiply11[i]=((q_e3[i]) * temp9_multiply3);
		temp9_multiply12[i]=((q_e4[i]) * temp9_multiply4);
		temp9_multiply13[i]=((q_e5[i]) * temp9_multiply5);
		temp9_multiply14[i]=((q_e6[i]) * temp9_multiply6);
		temp9_multiply15[i]=((q_e7[i]) * temp9_multiply7);
		temp9_multiply16[i]=((q_e8[i]) * temp9_multiply8);
	}
	for(int i = 0; i <column; i++)
	{
		temp9_multiply17[i]=( (*(ptr_ee9+i)) - (temp9_multiply9[i]) - (temp9_multiply10[i]) - (temp9_multiply11[i]) - (temp9_multiply12[i]) -
				(temp9_multiply13[i]) - (temp9_multiply14[i]) - (temp9_multiply15[i])  - (temp9_multiply16[i]) );
		temp9_pow=temp9_pow+(pow(temp9_multiply17[i],2));
	}
	det_e9 =sqrt(temp9_pow);
	for(int i = 0; i <column; i++)
	{
		q_e9[i]=(temp9_multiply17[i])/ det_e9;
	}

}


void caculate_ee10(matrix_t ptr_ee10[column])
{
	matrix_t temp10_pow=0;
	matrix_t det_e10 =0;
	matrix_t temp10_multiply1=0;
	matrix_t temp10_multiply2=0;
	matrix_t temp10_multiply3=0;
	matrix_t temp10_multiply4=0;
	matrix_t temp10_multiply5=0;
	matrix_t temp10_multiply6=0;
	matrix_t temp10_multiply7=0;
	matrix_t temp10_multiply8=0;
	matrix_t temp10_multiply9=0;
	matrix_t temp10_multiply10[row];
	matrix_t temp10_multiply11[row];
	matrix_t temp10_multiply12[row];
	matrix_t temp10_multiply13[row];
	matrix_t temp10_multiply14[row];
	matrix_t temp10_multiply15[row];
	matrix_t temp10_multiply16[row];
	matrix_t temp10_multiply17[row];
	matrix_t temp10_multiply18[row];
	matrix_t temp10_multiply19[row];
	for(int i = 0; i <column; i++)
	{
		temp10_multiply1=temp10_multiply1+((*(ptr_ee10+i))*q_e1[i]);
		temp10_multiply2=temp10_multiply2+((*(ptr_ee10+i))*q_e2[i]);
		temp10_multiply3=temp10_multiply3+((*(ptr_ee10+i))*q_e3[i]);
		temp10_multiply4=temp10_multiply4+((*(ptr_ee10+i))*q_e4[i]);
		temp10_multiply5=temp10_multiply5+((*(ptr_ee10+i))*q_e5[i]);
		temp10_multiply6=temp10_multiply6+((*(ptr_ee10+i))*q_e6[i]);
		temp10_multiply7=temp10_multiply7+((*(ptr_ee10+i))*q_e7[i]);
		temp10_multiply8=temp10_multiply8+((*(ptr_ee10+i))*q_e8[i]);
		temp10_multiply9=temp10_multiply9+((*(ptr_ee10+i))*q_e9[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp10_multiply10[i]=((q_e1[i]) * temp10_multiply1);
		temp10_multiply11[i]=((q_e2[i]) * temp10_multiply2);
		temp10_multiply12[i]=((q_e3[i]) * temp10_multiply3);
		temp10_multiply13[i]=((q_e4[i]) * temp10_multiply4);
		temp10_multiply14[i]=((q_e5[i]) * temp10_multiply5);
		temp10_multiply15[i]=((q_e6[i]) * temp10_multiply6);
		temp10_multiply16[i]=((q_e7[i]) * temp10_multiply7);
		temp10_multiply17[i]=((q_e8[i]) * temp10_multiply8);
		temp10_multiply18[i]=((q_e9[i]) * temp10_multiply9);
	}
	for(int i = 0; i <column; i++)
	{
		temp10_multiply19[i]=( (*(ptr_ee10+i)) - (temp10_multiply10[i]) - (temp10_multiply11[i]) - (temp10_multiply12[i]) - (temp10_multiply13[i]) -
				(temp10_multiply14[i]) - (temp10_multiply15[i]) - (temp10_multiply16[i])  - (temp10_multiply17[i])  - (temp10_multiply18[i]));
		temp10_pow=temp10_pow+(pow(temp10_multiply19[i],2));
	}
	det_e10 =sqrt(temp10_pow);
	for(int i = 0; i <column; i++)
	{
		q_e10[i]=(temp10_multiply19[i])/ det_e10;
	}

}

void caculate_ee11(matrix_t ptr_ee11[column])
{
	matrix_t temp11_pow=0;
	matrix_t det_e11 =0;
	matrix_t temp11_multiply1=0;
	matrix_t temp11_multiply2=0;
	matrix_t temp11_multiply3=0;
	matrix_t temp11_multiply4=0;
	matrix_t temp11_multiply5=0;
	matrix_t temp11_multiply6=0;
	matrix_t temp11_multiply7=0;
	matrix_t temp11_multiply8=0;
	matrix_t temp11_multiply9=0;
	matrix_t temp11_multiply10=0;
	matrix_t temp11_multiply11[row];
	matrix_t temp11_multiply12[row];
	matrix_t temp11_multiply13[row];
	matrix_t temp11_multiply14[row];
	matrix_t temp11_multiply15[row];
	matrix_t temp11_multiply16[row];
	matrix_t temp11_multiply17[row];
	matrix_t temp11_multiply18[row];
	matrix_t temp11_multiply19[row];
	matrix_t temp11_multiply20[row];
	matrix_t temp11_multiply21[row];
	for(int i = 0; i <column; i++)
	{
		temp11_multiply1=temp11_multiply1+((*(ptr_ee11+i))*q_e1[i]);
		temp11_multiply2=temp11_multiply2+((*(ptr_ee11+i))*q_e2[i]);
		temp11_multiply3=temp11_multiply3+((*(ptr_ee11+i))*q_e3[i]);
		temp11_multiply4=temp11_multiply4+((*(ptr_ee11+i))*q_e4[i]);
		temp11_multiply5=temp11_multiply5+((*(ptr_ee11+i))*q_e5[i]);
		temp11_multiply6=temp11_multiply6+((*(ptr_ee11+i))*q_e6[i]);
		temp11_multiply7=temp11_multiply7+((*(ptr_ee11+i))*q_e7[i]);
		temp11_multiply8=temp11_multiply8+((*(ptr_ee11+i))*q_e8[i]);
		temp11_multiply9=temp11_multiply9+((*(ptr_ee11+i))*q_e9[i]);
		temp11_multiply10=temp11_multiply10+((*(ptr_ee11+i))*q_e10[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp11_multiply11[i]=((q_e1[i]) * temp11_multiply1);
		temp11_multiply12[i]=((q_e2[i]) * temp11_multiply2);
		temp11_multiply13[i]=((q_e3[i]) * temp11_multiply3);
		temp11_multiply14[i]=((q_e4[i]) * temp11_multiply4);
		temp11_multiply15[i]=((q_e5[i]) * temp11_multiply5);
		temp11_multiply16[i]=((q_e6[i]) * temp11_multiply6);
		temp11_multiply17[i]=((q_e7[i]) * temp11_multiply7);
		temp11_multiply18[i]=((q_e8[i]) * temp11_multiply8);
		temp11_multiply19[i]=((q_e9[i]) * temp11_multiply9);
		temp11_multiply20[i]=((q_e10[i]) * temp11_multiply10);
	}
	for(int i = 0; i <column; i++)
	{
		temp11_multiply21[i]=( (*(ptr_ee11+i)) - (temp11_multiply11[i]) - (temp11_multiply12[i]) - (temp11_multiply13[i]) - (temp11_multiply14[i]) -
				(temp11_multiply15[i]) - (temp11_multiply16[i]) - (temp11_multiply17[i])  - (temp11_multiply18[i])  - (temp11_multiply19[i]) - (temp11_multiply20[i]) );
		temp11_pow=temp11_pow+(pow(temp11_multiply21[i],2));
	}
	det_e11 =sqrt(temp11_pow);
	for(int i = 0; i <column; i++)
	{
		q_e11[i]=(temp11_multiply21[i])/ det_e11;
	}

}
void caculate_ee12(matrix_t ptr_ee12[column])
{
	matrix_t temp12_pow=0;
	matrix_t det_e12 =0;
	matrix_t temp12_multiply1=0;
	matrix_t temp12_multiply2=0;
	matrix_t temp12_multiply3=0;
	matrix_t temp12_multiply4=0;
	matrix_t temp12_multiply5=0;
	matrix_t temp12_multiply6=0;
	matrix_t temp12_multiply7=0;
	matrix_t temp12_multiply8=0;
	matrix_t temp12_multiply9=0;
	matrix_t temp12_multiply10=0;
	matrix_t temp12_multiply11=0;
	matrix_t temp12_multiply12[row];
	matrix_t temp12_multiply13[row];
	matrix_t temp12_multiply14[row];
	matrix_t temp12_multiply15[row];
	matrix_t temp12_multiply16[row];
	matrix_t temp12_multiply17[row];
	matrix_t temp12_multiply18[row];
	matrix_t temp12_multiply19[row];
	matrix_t temp12_multiply20[row];
	matrix_t temp12_multiply21[row];
	matrix_t temp12_multiply22[row];
	matrix_t temp12_multiply23[row];
	for(int i = 0; i <column; i++)
	{
		temp12_multiply1+=((*(ptr_ee12+i))*q_e1[i]);
		temp12_multiply2+=((*(ptr_ee12+i))*q_e2[i]);
		temp12_multiply3+=((*(ptr_ee12+i))*q_e3[i]);
		temp12_multiply4+=((*(ptr_ee12+i))*q_e4[i]);
		temp12_multiply5+=((*(ptr_ee12+i))*q_e5[i]);
		temp12_multiply6+=((*(ptr_ee12+i))*q_e6[i]);
		temp12_multiply7+=((*(ptr_ee12+i))*q_e7[i]);
		temp12_multiply8+=((*(ptr_ee12+i))*q_e8[i]);
		temp12_multiply9+=((*(ptr_ee12+i))*q_e9[i]);
		temp12_multiply10+=((*(ptr_ee12+i))*q_e10[i]);
		temp12_multiply11+=((*(ptr_ee12+i))*q_e11[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp12_multiply12[i]=((q_e1[i]) * temp12_multiply1);
		temp12_multiply13[i]=((q_e2[i]) * temp12_multiply2);
		temp12_multiply14[i]=((q_e3[i]) * temp12_multiply3);
		temp12_multiply15[i]=((q_e4[i]) * temp12_multiply4);
		temp12_multiply16[i]=((q_e5[i]) * temp12_multiply5);
		temp12_multiply17[i]=((q_e6[i]) * temp12_multiply6);
		temp12_multiply18[i]=((q_e7[i]) * temp12_multiply7);
		temp12_multiply19[i]=((q_e8[i]) * temp12_multiply8);
		temp12_multiply20[i]=((q_e9[i]) * temp12_multiply9);
		temp12_multiply21[i]=((q_e10[i]) * temp12_multiply10);
		temp12_multiply22[i]=((q_e11[i]) * temp12_multiply11);
	}
	for(int i = 0; i <column; i++)
	{
		temp12_multiply23[i]=( (*(ptr_ee12+i)) - (temp12_multiply12[i]) - (temp12_multiply13[i]) - (temp12_multiply14[i]) - (temp12_multiply15[i]) -
				(temp12_multiply16[i]) - (temp12_multiply17[i]) - (temp12_multiply18[i])  - (temp12_multiply19[i])  - (temp12_multiply20[i]) - (temp12_multiply21[i]) - (temp12_multiply22[i]) );
		temp12_pow=temp12_pow+(pow(temp12_multiply23[i],2));
	}
	det_e12 =sqrt(temp12_pow);
	for(int i = 0; i <column; i++)
	{
		q_e12[i]=(temp12_multiply23[i])/ det_e12;
	}
}
void caculate_ee13(matrix_t ptr_ee13[column])
{
	matrix_t temp13_pow=0;
	matrix_t det_e13 =0;
	matrix_t temp13_multiply1=0;
	matrix_t temp13_multiply2=0;
	matrix_t temp13_multiply3=0;
	matrix_t temp13_multiply4=0;
	matrix_t temp13_multiply5=0;
	matrix_t temp13_multiply6=0;
	matrix_t temp13_multiply7=0;
	matrix_t temp13_multiply8=0;
	matrix_t temp13_multiply9=0;
	matrix_t temp13_multiply10=0;
	matrix_t temp13_multiply11=0;
	matrix_t temp13_multiply12=0;
	matrix_t temp13_multiply13[row];
	matrix_t temp13_multiply14[row];
	matrix_t temp13_multiply15[row];
	matrix_t temp13_multiply16[row];
	matrix_t temp13_multiply17[row];
	matrix_t temp13_multiply18[row];
	matrix_t temp13_multiply19[row];
	matrix_t temp13_multiply20[row];
	matrix_t temp13_multiply21[row];
	matrix_t temp13_multiply22[row];
	matrix_t temp13_multiply23[row];
	matrix_t temp13_multiply24[row];
	matrix_t temp13_multiply25[row];

	for(int i = 0; i <column; i++)
	{
		temp13_multiply1+=((*(ptr_ee13+i))*q_e1[i]);
		temp13_multiply2+=((*(ptr_ee13+i))*q_e2[i]);
		temp13_multiply3+=((*(ptr_ee13+i))*q_e3[i]);
		temp13_multiply4+=((*(ptr_ee13+i))*q_e4[i]);
		temp13_multiply5+=((*(ptr_ee13+i))*q_e5[i]);
		temp13_multiply6+=((*(ptr_ee13+i))*q_e6[i]);
		temp13_multiply7+=((*(ptr_ee13+i))*q_e7[i]);
		temp13_multiply8+=((*(ptr_ee13+i))*q_e8[i]);
		temp13_multiply9+=((*(ptr_ee13+i))*q_e9[i]);
		temp13_multiply10+=((*(ptr_ee13+i))*q_e10[i]);
		temp13_multiply11+=((*(ptr_ee13+i))*q_e11[i]);
		temp13_multiply12+=((*(ptr_ee13+i))*q_e12[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp13_multiply13[i]=((q_e1[i]) * temp13_multiply1);
		temp13_multiply14[i]=((q_e2[i]) * temp13_multiply2);
		temp13_multiply15[i]=((q_e3[i]) * temp13_multiply3);
		temp13_multiply16[i]=((q_e4[i]) * temp13_multiply4);
		temp13_multiply17[i]=((q_e5[i]) * temp13_multiply5);
		temp13_multiply18[i]=((q_e6[i]) * temp13_multiply6);
		temp13_multiply19[i]=((q_e7[i]) * temp13_multiply7);
		temp13_multiply20[i]=((q_e8[i]) * temp13_multiply8);
		temp13_multiply21[i]=((q_e9[i]) * temp13_multiply9);
		temp13_multiply22[i]=((q_e10[i]) * temp13_multiply10);
		temp13_multiply23[i]=((q_e11[i]) * temp13_multiply11);
		temp13_multiply24[i]=((q_e12[i]) * temp13_multiply12);
	}
	for(int i = 0; i <column; i++)
	{
		temp13_multiply25[i]=( (*(ptr_ee13+i)) - (temp13_multiply13[i]) - (temp13_multiply14[i]) - (temp13_multiply15[i]) - (temp13_multiply16[i]) -
				(temp13_multiply17[i]) - (temp13_multiply18[i]) - (temp13_multiply19[i])  - (temp13_multiply20[i])  - (temp13_multiply21[i]) - (temp13_multiply22[i]) - (temp13_multiply23[i])
				- (temp13_multiply24[i]) );
		temp13_pow=temp13_pow+(pow(temp13_multiply25[i],2));
	}
	det_e13 =sqrt(temp13_pow);
	for(int i = 0; i <column; i++)
	{
		q_e13[i]=(temp13_multiply25[i])/ det_e13;
	}
}
void caculate_ee14(matrix_t ptr_ee14[column])
{
	matrix_t temp14_pow=0;
	matrix_t det_e14 =0;
	matrix_t temp14_multiply1=0;
	matrix_t temp14_multiply2=0;
	matrix_t temp14_multiply3=0;
	matrix_t temp14_multiply4=0;
	matrix_t temp14_multiply5=0;
	matrix_t temp14_multiply6=0;
	matrix_t temp14_multiply7=0;
	matrix_t temp14_multiply8=0;
	matrix_t temp14_multiply9=0;
	matrix_t temp14_multiply10=0;
	matrix_t temp14_multiply11=0;
	matrix_t temp14_multiply12=0;
	matrix_t temp14_multiply13=0;
	matrix_t temp14_multiply14[row];
	matrix_t temp14_multiply15[row];
	matrix_t temp14_multiply16[row];
	matrix_t temp14_multiply17[row];
	matrix_t temp14_multiply18[row];
	matrix_t temp14_multiply19[row];
	matrix_t temp14_multiply20[row];
	matrix_t temp14_multiply21[row];
	matrix_t temp14_multiply22[row];
	matrix_t temp14_multiply23[row];
	matrix_t temp14_multiply24[row];
	matrix_t temp14_multiply25[row];
	matrix_t temp14_multiply26[row];
	matrix_t temp14_multiply27[row];

	for(int i = 0; i <column; i++)
	{
		temp14_multiply1+=((*(ptr_ee14+i))*q_e1[i]);
		temp14_multiply2+=((*(ptr_ee14+i))*q_e2[i]);
		temp14_multiply3+=((*(ptr_ee14+i))*q_e3[i]);
		temp14_multiply4+=((*(ptr_ee14+i))*q_e4[i]);
		temp14_multiply5+=((*(ptr_ee14+i))*q_e5[i]);
		temp14_multiply6+=((*(ptr_ee14+i))*q_e6[i]);
		temp14_multiply7+=((*(ptr_ee14+i))*q_e7[i]);
		temp14_multiply8+=((*(ptr_ee14+i))*q_e8[i]);
		temp14_multiply9+=((*(ptr_ee14+i))*q_e9[i]);
		temp14_multiply10+=((*(ptr_ee14+i))*q_e10[i]);
		temp14_multiply11+=((*(ptr_ee14+i))*q_e11[i]);
		temp14_multiply12+=((*(ptr_ee14+i))*q_e12[i]);
		temp14_multiply13+=((*(ptr_ee14+i))*q_e13[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp14_multiply14[i]=((q_e1[i]) * temp14_multiply1);
		temp14_multiply15[i]=((q_e2[i]) * temp14_multiply2);
		temp14_multiply16[i]=((q_e3[i]) * temp14_multiply3);
		temp14_multiply17[i]=((q_e4[i]) * temp14_multiply4);
		temp14_multiply18[i]=((q_e5[i]) * temp14_multiply5);
		temp14_multiply19[i]=((q_e6[i]) * temp14_multiply6);
		temp14_multiply20[i]=((q_e7[i]) * temp14_multiply7);
		temp14_multiply21[i]=((q_e8[i]) * temp14_multiply8);
		temp14_multiply22[i]=((q_e9[i]) * temp14_multiply9);
		temp14_multiply23[i]=((q_e10[i]) * temp14_multiply10);
		temp14_multiply24[i]=((q_e11[i]) * temp14_multiply11);
		temp14_multiply25[i]=((q_e12[i]) * temp14_multiply12);
		temp14_multiply26[i]=((q_e13[i]) * temp14_multiply13);
	}
	for(int i = 0; i <column; i++)
	{
		temp14_multiply27[i]=( (*(ptr_ee14+i)) - (temp14_multiply14[i]) - (temp14_multiply15[i]) - (temp14_multiply16[i]) - (temp14_multiply17[i]) -
				(temp14_multiply18[i]) - (temp14_multiply19[i]) - (temp14_multiply20[i])  - (temp14_multiply21[i])  - (temp14_multiply22[i]) - (temp14_multiply23[i]) - (temp14_multiply24[i])
				- (temp14_multiply25[i]) - (temp14_multiply26[i]) );
		temp14_pow=temp14_pow+(pow(temp14_multiply27[i],2));
	}
	det_e14 =sqrt(temp14_pow);
	for(int i = 0; i <column; i++)
	{
		q_e14[i]=(temp14_multiply27[i])/ det_e14;
	}
}
void caculate_ee15(matrix_t ptr_ee15[column])
{
	matrix_t temp15_pow=0;
	matrix_t det_e15 =0;
	matrix_t temp15_multiply1=0;
	matrix_t temp15_multiply2=0;
	matrix_t temp15_multiply3=0;
	matrix_t temp15_multiply4=0;
	matrix_t temp15_multiply5=0;
	matrix_t temp15_multiply6=0;
	matrix_t temp15_multiply7=0;
	matrix_t temp15_multiply8=0;
	matrix_t temp15_multiply9=0;
	matrix_t temp15_multiply10=0;
	matrix_t temp15_multiply11=0;
	matrix_t temp15_multiply12=0;
	matrix_t temp15_multiply13=0;
	matrix_t temp15_multiply14=0;
	matrix_t temp15_multiply15[row];
	matrix_t temp15_multiply16[row];
	matrix_t temp15_multiply17[row];
	matrix_t temp15_multiply18[row];
	matrix_t temp15_multiply19[row];
	matrix_t temp15_multiply20[row];
	matrix_t temp15_multiply21[row];
	matrix_t temp15_multiply22[row];
	matrix_t temp15_multiply23[row];
	matrix_t temp15_multiply24[row];
	matrix_t temp15_multiply25[row];
	matrix_t temp15_multiply26[row];
	matrix_t temp15_multiply27[row];
	matrix_t temp15_multiply28[row];
	matrix_t temp15_multiply29[row];
	for(int i = 0; i <column; i++)
	{
		temp15_multiply1+=((*(ptr_ee15+i))*q_e1[i]);
		temp15_multiply2+=((*(ptr_ee15+i))*q_e2[i]);
		temp15_multiply3+=((*(ptr_ee15+i))*q_e3[i]);
		temp15_multiply4+=((*(ptr_ee15+i))*q_e4[i]);
		temp15_multiply5+=((*(ptr_ee15+i))*q_e5[i]);
		temp15_multiply6+=((*(ptr_ee15+i))*q_e6[i]);
		temp15_multiply7+=((*(ptr_ee15+i))*q_e7[i]);
		temp15_multiply8+=((*(ptr_ee15+i))*q_e8[i]);
		temp15_multiply9+=((*(ptr_ee15+i))*q_e9[i]);
		temp15_multiply10+=((*(ptr_ee15+i))*q_e10[i]);
		temp15_multiply11+=((*(ptr_ee15+i))*q_e11[i]);
		temp15_multiply12+=((*(ptr_ee15+i))*q_e12[i]);
		temp15_multiply13+=((*(ptr_ee15+i))*q_e13[i]);
		temp15_multiply14+=((*(ptr_ee15+i))*q_e14[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp15_multiply15[i]=((q_e1[i]) * temp15_multiply1);
		temp15_multiply16[i]=((q_e2[i]) * temp15_multiply2);
		temp15_multiply17[i]=((q_e3[i]) * temp15_multiply3);
		temp15_multiply18[i]=((q_e4[i]) * temp15_multiply4);
		temp15_multiply19[i]=((q_e5[i]) * temp15_multiply5);
		temp15_multiply20[i]=((q_e6[i]) * temp15_multiply6);
		temp15_multiply21[i]=((q_e7[i]) * temp15_multiply7);
		temp15_multiply22[i]=((q_e8[i]) * temp15_multiply8);
		temp15_multiply23[i]=((q_e9[i]) * temp15_multiply9);
		temp15_multiply24[i]=((q_e10[i]) * temp15_multiply10);
		temp15_multiply25[i]=((q_e11[i]) * temp15_multiply11);
		temp15_multiply26[i]=((q_e12[i]) * temp15_multiply12);
		temp15_multiply27[i]=((q_e13[i]) * temp15_multiply13);
		temp15_multiply28[i]=((q_e14[i]) * temp15_multiply14);
	}
	for(int i = 0; i <column; i++)
	{
		temp15_multiply29[i]=( (*(ptr_ee15+i)) - (temp15_multiply15[i]) - (temp15_multiply16[i]) - (temp15_multiply17[i]) - (temp15_multiply18[i]) -
				(temp15_multiply19[i]) - (temp15_multiply20[i]) - (temp15_multiply21[i])  - (temp15_multiply22[i])  - (temp15_multiply23[i]) - (temp15_multiply24[i])
				- (temp15_multiply25[i])- (temp15_multiply26[i]) - (temp15_multiply27[i]) - (temp15_multiply28[i]) );
		temp15_pow=temp15_pow+(pow(temp15_multiply29[i],2));
	}
	det_e15 =sqrt(temp15_pow);
	for(int i = 0; i <column; i++)
	{
		q_e15[i]=(temp15_multiply29[i])/ det_e15;
	}
}
void caculate_ee16(matrix_t ptr_ee16[column])
{
	matrix_t temp16_pow=0;
	matrix_t det_e16 =0;
	matrix_t temp16_multiply1=0;
	matrix_t temp16_multiply2=0;
	matrix_t temp16_multiply3=0;
	matrix_t temp16_multiply4=0;
	matrix_t temp16_multiply5=0;
	matrix_t temp16_multiply6=0;
	matrix_t temp16_multiply7=0;
	matrix_t temp16_multiply8=0;
	matrix_t temp16_multiply9=0;
	matrix_t temp16_multiply10=0;
	matrix_t temp16_multiply11=0;
	matrix_t temp16_multiply12=0;
	matrix_t temp16_multiply13=0;
	matrix_t temp16_multiply14=0;
	matrix_t temp16_multiply15=0;
	matrix_t temp16_multiply16[row];
	matrix_t temp16_multiply17[row];
	matrix_t temp16_multiply18[row];
	matrix_t temp16_multiply19[row];
	matrix_t temp16_multiply20[row];
	matrix_t temp16_multiply21[row];
	matrix_t temp16_multiply22[row];
	matrix_t temp16_multiply23[row];
	matrix_t temp16_multiply24[row];
	matrix_t temp16_multiply25[row];
	matrix_t temp16_multiply26[row];
	matrix_t temp16_multiply27[row];
	matrix_t temp16_multiply28[row];
	matrix_t temp16_multiply29[row];
	matrix_t temp16_multiply30[row];
	matrix_t temp16_multiply31[row];
	for(int i = 0; i <column; i++)
	{
		temp16_multiply1+=((*(ptr_ee16+i))*q_e1[i]);
		temp16_multiply2+=((*(ptr_ee16+i))*q_e2[i]);
		temp16_multiply3+=((*(ptr_ee16+i))*q_e3[i]);
		temp16_multiply4+=((*(ptr_ee16+i))*q_e4[i]);
		temp16_multiply5+=((*(ptr_ee16+i))*q_e5[i]);
		temp16_multiply6+=((*(ptr_ee16+i))*q_e6[i]);
		temp16_multiply7+=((*(ptr_ee16+i))*q_e7[i]);
		temp16_multiply8+=((*(ptr_ee16+i))*q_e8[i]);
		temp16_multiply9+=((*(ptr_ee16+i))*q_e9[i]);
		temp16_multiply10+=((*(ptr_ee16+i))*q_e10[i]);
		temp16_multiply11+=((*(ptr_ee16+i))*q_e11[i]);
		temp16_multiply12+=((*(ptr_ee16+i))*q_e12[i]);
		temp16_multiply13+=((*(ptr_ee16+i))*q_e13[i]);
		temp16_multiply14+=((*(ptr_ee16+i))*q_e14[i]);
		temp16_multiply15+=((*(ptr_ee16+i))*q_e15[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp16_multiply16[i]=((q_e1[i]) * temp16_multiply1);
		temp16_multiply17[i]=((q_e2[i]) * temp16_multiply2);
		temp16_multiply18[i]=((q_e3[i]) * temp16_multiply3);
		temp16_multiply19[i]=((q_e4[i]) * temp16_multiply4);
		temp16_multiply20[i]=((q_e5[i]) * temp16_multiply5);
		temp16_multiply21[i]=((q_e6[i]) * temp16_multiply6);
		temp16_multiply22[i]=((q_e7[i]) * temp16_multiply7);
		temp16_multiply23[i]=((q_e8[i]) * temp16_multiply8);
		temp16_multiply24[i]=((q_e9[i]) * temp16_multiply9);
		temp16_multiply25[i]=((q_e10[i]) * temp16_multiply10);
		temp16_multiply26[i]=((q_e11[i]) * temp16_multiply11);
		temp16_multiply27[i]=((q_e12[i]) * temp16_multiply12);
		temp16_multiply28[i]=((q_e13[i]) * temp16_multiply13);
		temp16_multiply29[i]=((q_e14[i]) * temp16_multiply14);
		temp16_multiply30[i]=((q_e15[i]) * temp16_multiply15);
	}
	for(int i = 0; i <column; i++)
	{
		temp16_multiply31[i]=( (*(ptr_ee16+i)) - (temp16_multiply16[i]) - (temp16_multiply17[i]) - (temp16_multiply18[i]) - (temp16_multiply19[i]) -
				(temp16_multiply20[i]) - (temp16_multiply21[i]) - (temp16_multiply22[i])  - (temp16_multiply23[i])  - (temp16_multiply24[i]) - (temp16_multiply25[i])
				- (temp16_multiply26[i])- (temp16_multiply27[i]) - (temp16_multiply28[i]) - (temp16_multiply29[i])- (temp16_multiply30[i]) );
		temp16_pow=temp16_pow+(pow(temp16_multiply31[i],2));
	}
	det_e16 =sqrt(temp16_pow);
	for(int i = 0; i <column; i++)
	{
		q_e16[i]=(temp16_multiply31[i])/ det_e16;
	}
}
void caculate_ee17(matrix_t ptr_ee17[column])
{
	matrix_t temp17_pow=0;
	matrix_t det_e17 =0;
	matrix_t temp17_multiply1=0;
	matrix_t temp17_multiply2=0;
	matrix_t temp17_multiply3=0;
	matrix_t temp17_multiply4=0;
	matrix_t temp17_multiply5=0;
	matrix_t temp17_multiply6=0;
	matrix_t temp17_multiply7=0;
	matrix_t temp17_multiply8=0;
	matrix_t temp17_multiply9=0;
	matrix_t temp17_multiply10=0;
	matrix_t temp17_multiply11=0;
	matrix_t temp17_multiply12=0;
	matrix_t temp17_multiply13=0;
	matrix_t temp17_multiply14=0;
	matrix_t temp17_multiply15=0;
	matrix_t temp17_multiply16=0;
	matrix_t temp17_multiply17[row];
	matrix_t temp17_multiply18[row];
	matrix_t temp17_multiply19[row];
	matrix_t temp17_multiply20[row];
	matrix_t temp17_multiply21[row];
	matrix_t temp17_multiply22[row];
	matrix_t temp17_multiply23[row];
	matrix_t temp17_multiply24[row];
	matrix_t temp17_multiply25[row];
	matrix_t temp17_multiply26[row];
	matrix_t temp17_multiply27[row];
	matrix_t temp17_multiply28[row];
	matrix_t temp17_multiply29[row];
	matrix_t temp17_multiply30[row];
	matrix_t temp17_multiply31[row];
	matrix_t temp17_multiply32[row];
	matrix_t temp17_multiply33[row];
	for(int i = 0; i <column; i++)
	{
		temp17_multiply1+=((*(ptr_ee17+i))*q_e1[i]);
		temp17_multiply2+=((*(ptr_ee17+i))*q_e2[i]);
		temp17_multiply3+=((*(ptr_ee17+i))*q_e3[i]);
		temp17_multiply4+=((*(ptr_ee17+i))*q_e4[i]);
		temp17_multiply5+=((*(ptr_ee17+i))*q_e5[i]);
		temp17_multiply6+=((*(ptr_ee17+i))*q_e6[i]);
		temp17_multiply7+=((*(ptr_ee17+i))*q_e7[i]);
		temp17_multiply8+=((*(ptr_ee17+i))*q_e8[i]);
		temp17_multiply9+=((*(ptr_ee17+i))*q_e9[i]);
		temp17_multiply10+=((*(ptr_ee17+i))*q_e10[i]);
		temp17_multiply11+=((*(ptr_ee17+i))*q_e11[i]);
		temp17_multiply12+=((*(ptr_ee17+i))*q_e12[i]);
		temp17_multiply13+=((*(ptr_ee17+i))*q_e13[i]);
		temp17_multiply14+=((*(ptr_ee17+i))*q_e14[i]);
		temp17_multiply15+=((*(ptr_ee17+i))*q_e15[i]);
		temp17_multiply16+=((*(ptr_ee17+i))*q_e16[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp17_multiply17[i]=((q_e1[i]) * temp17_multiply1);
		temp17_multiply18[i]=((q_e2[i]) * temp17_multiply2);
		temp17_multiply19[i]=((q_e3[i]) * temp17_multiply3);
		temp17_multiply20[i]=((q_e4[i]) * temp17_multiply4);
		temp17_multiply21[i]=((q_e5[i]) * temp17_multiply5);
		temp17_multiply22[i]=((q_e6[i]) * temp17_multiply6);
		temp17_multiply23[i]=((q_e7[i]) * temp17_multiply7);
		temp17_multiply24[i]=((q_e8[i]) * temp17_multiply8);
		temp17_multiply25[i]=((q_e9[i]) * temp17_multiply9);
		temp17_multiply26[i]=((q_e10[i]) * temp17_multiply10);
		temp17_multiply27[i]=((q_e11[i]) * temp17_multiply11);
		temp17_multiply28[i]=((q_e12[i]) * temp17_multiply12);
		temp17_multiply29[i]=((q_e13[i]) * temp17_multiply13);
		temp17_multiply30[i]=((q_e14[i]) * temp17_multiply14);
		temp17_multiply31[i]=((q_e15[i]) * temp17_multiply15);
		temp17_multiply32[i]=((q_e16[i]) * temp17_multiply16);
	}

	for(int i = 0; i <column; i++)
	{
		temp17_multiply33[i]=( (*(ptr_ee17+i)) - (temp17_multiply17[i]) - (temp17_multiply18[i]) - (temp17_multiply19[i]) - (temp17_multiply20[i]) -
				(temp17_multiply21[i]) - (temp17_multiply22[i]) - (temp17_multiply23[i])  - (temp17_multiply24[i])  - (temp17_multiply25[i]) - (temp17_multiply26[i])
				- (temp17_multiply27[i])- (temp17_multiply28[i]) - (temp17_multiply29[i]) - (temp17_multiply30[i])- (temp17_multiply31[i]) - (temp17_multiply32[i]) );
		temp17_pow=temp17_pow+(pow(temp17_multiply33[i],2));
	}
	det_e17 =sqrt(temp17_pow);
	for(int i = 0; i <column; i++)
	{
		q_e17[i]=(temp17_multiply33[i])/ det_e17;
	}
}
void caculate_ee18(matrix_t ptr_ee18[column])
{
	matrix_t temp18_pow=0;
	matrix_t det_e18 =0;
	matrix_t temp18_multiply1=0;
	matrix_t temp18_multiply2=0;
	matrix_t temp18_multiply3=0;
	matrix_t temp18_multiply4=0;
	matrix_t temp18_multiply5=0;
	matrix_t temp18_multiply6=0;
	matrix_t temp18_multiply7=0;
	matrix_t temp18_multiply8=0;
	matrix_t temp18_multiply9=0;
	matrix_t temp18_multiply10=0;
	matrix_t temp18_multiply11=0;
	matrix_t temp18_multiply12=0;
	matrix_t temp18_multiply13=0;
	matrix_t temp18_multiply14=0;
	matrix_t temp18_multiply15=0;
	matrix_t temp18_multiply16=0;
	matrix_t temp18_multiply17=0;
	matrix_t temp18_multiply18[row];
	matrix_t temp18_multiply19[row];
	matrix_t temp18_multiply20[row];
	matrix_t temp18_multiply21[row];
	matrix_t temp18_multiply22[row];
	matrix_t temp18_multiply23[row];
	matrix_t temp18_multiply24[row];
	matrix_t temp18_multiply25[row];
	matrix_t temp18_multiply26[row];
	matrix_t temp18_multiply27[row];
	matrix_t temp18_multiply28[row];
	matrix_t temp18_multiply29[row];
	matrix_t temp18_multiply30[row];
	matrix_t temp18_multiply31[row];
	matrix_t temp18_multiply32[row];
	matrix_t temp18_multiply33[row];
	matrix_t temp18_multiply34[row];
	matrix_t temp18_multiply35[row];
	for(int i = 0; i <column; i++)
	{
		temp18_multiply1+=((*(ptr_ee18+i))*q_e1[i]);
		temp18_multiply2+=((*(ptr_ee18+i))*q_e2[i]);
		temp18_multiply3+=((*(ptr_ee18+i))*q_e3[i]);
		temp18_multiply4+=((*(ptr_ee18+i))*q_e4[i]);
		temp18_multiply5+=((*(ptr_ee18+i))*q_e5[i]);
		temp18_multiply6+=((*(ptr_ee18+i))*q_e6[i]);
		temp18_multiply7+=((*(ptr_ee18+i))*q_e7[i]);
		temp18_multiply8+=((*(ptr_ee18+i))*q_e8[i]);
		temp18_multiply9+=((*(ptr_ee18+i))*q_e9[i]);
		temp18_multiply10+=((*(ptr_ee18+i))*q_e10[i]);
		temp18_multiply11+=((*(ptr_ee18+i))*q_e11[i]);
		temp18_multiply12+=((*(ptr_ee18+i))*q_e12[i]);
		temp18_multiply13+=((*(ptr_ee18+i))*q_e13[i]);
		temp18_multiply14+=((*(ptr_ee18+i))*q_e14[i]);
		temp18_multiply15+=((*(ptr_ee18+i))*q_e15[i]);
		temp18_multiply16+=((*(ptr_ee18+i))*q_e16[i]);
		temp18_multiply17+=((*(ptr_ee18+i))*q_e17[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp18_multiply18[i]=((q_e1[i]) * temp18_multiply1);
		temp18_multiply19[i]=((q_e2[i]) * temp18_multiply2);
		temp18_multiply20[i]=((q_e3[i]) * temp18_multiply3);
		temp18_multiply21[i]=((q_e4[i]) * temp18_multiply4);
		temp18_multiply22[i]=((q_e5[i]) * temp18_multiply5);
		temp18_multiply23[i]=((q_e6[i]) * temp18_multiply6);
		temp18_multiply24[i]=((q_e7[i]) * temp18_multiply7);
		temp18_multiply25[i]=((q_e8[i]) * temp18_multiply8);
		temp18_multiply26[i]=((q_e9[i]) * temp18_multiply9);
		temp18_multiply27[i]=((q_e10[i]) * temp18_multiply10);
		temp18_multiply28[i]=((q_e11[i]) * temp18_multiply11);
		temp18_multiply29[i]=((q_e12[i]) * temp18_multiply12);
		temp18_multiply30[i]=((q_e13[i]) * temp18_multiply13);
		temp18_multiply31[i]=((q_e14[i]) * temp18_multiply14);
		temp18_multiply32[i]=((q_e15[i]) * temp18_multiply15);
		temp18_multiply33[i]=((q_e16[i]) * temp18_multiply16);
		temp18_multiply34[i]=((q_e17[i]) * temp18_multiply17);
	}

	for(int i = 0; i <column; i++)
	{
		temp18_multiply35[i]=( (*(ptr_ee18+i)) - (temp18_multiply18[i]) - (temp18_multiply19[i]) - (temp18_multiply20[i]) - (temp18_multiply21[i]) -
				(temp18_multiply22[i]) - (temp18_multiply23[i]) - (temp18_multiply24[i])  - (temp18_multiply25[i])  - (temp18_multiply26[i]) - (temp18_multiply27[i])
				- (temp18_multiply28[i])- (temp18_multiply29[i]) - (temp18_multiply30[i]) - (temp18_multiply31[i])- (temp18_multiply32[i]) - (temp18_multiply33[i])
				- (temp18_multiply34[i]) );
		temp18_pow=temp18_pow+(pow(temp18_multiply35[i],2));
	}
	det_e18 =sqrt(temp18_pow);
	for(int i = 0; i <column; i++)
	{
		q_e18[i]=(temp18_multiply35[i])/ det_e18;
	}
}
void caculate_ee19(matrix_t ptr_ee19[column])
{
	matrix_t temp19_pow=0;
	matrix_t det_e19 =0;
	matrix_t temp19_multiply1=0;
	matrix_t temp19_multiply2=0;
	matrix_t temp19_multiply3=0;
	matrix_t temp19_multiply4=0;
	matrix_t temp19_multiply5=0;
	matrix_t temp19_multiply6=0;
	matrix_t temp19_multiply7=0;
	matrix_t temp19_multiply8=0;
	matrix_t temp19_multiply9=0;
	matrix_t temp19_multiply10=0;
	matrix_t temp19_multiply11=0;
	matrix_t temp19_multiply12=0;
	matrix_t temp19_multiply13=0;
	matrix_t temp19_multiply14=0;
	matrix_t temp19_multiply15=0;
	matrix_t temp19_multiply16=0;
	matrix_t temp19_multiply17=0;
	matrix_t temp19_multiply18=0;
	matrix_t temp19_multiply19[row];
	matrix_t temp19_multiply20[row];
	matrix_t temp19_multiply21[row];
	matrix_t temp19_multiply22[row];
	matrix_t temp19_multiply23[row];
	matrix_t temp19_multiply24[row];
	matrix_t temp19_multiply25[row];
	matrix_t temp19_multiply26[row];
	matrix_t temp19_multiply27[row];
	matrix_t temp19_multiply28[row];
	matrix_t temp19_multiply29[row];
	matrix_t temp19_multiply30[row];
	matrix_t temp19_multiply31[row];
	matrix_t temp19_multiply32[row];
	matrix_t temp19_multiply33[row];
	matrix_t temp19_multiply34[row];
	matrix_t temp19_multiply35[row];
	matrix_t temp19_multiply36[row];
	matrix_t temp19_multiply37[row];
	for(int i = 0; i <column; i++)
	{
		temp19_multiply1+= ((*(ptr_ee19+i))*q_e1[i]);
		temp19_multiply2+= ((*(ptr_ee19+i))*q_e2[i]);
		temp19_multiply3+= ((*(ptr_ee19+i))*q_e3[i]);
		temp19_multiply4+= ((*(ptr_ee19+i))*q_e4[i]);
		temp19_multiply5+= ((*(ptr_ee19+i))*q_e5[i]);
		temp19_multiply6+= ((*(ptr_ee19+i))*q_e6[i]);
		temp19_multiply7+= ((*(ptr_ee19+i))*q_e7[i]);
		temp19_multiply8+= ((*(ptr_ee19+i))*q_e8[i]);
		temp19_multiply9+= ((*(ptr_ee19+i))*q_e9[i]);
		temp19_multiply10+=((*(ptr_ee19+i))*q_e10[i]);
		temp19_multiply11+=((*(ptr_ee19+i))*q_e11[i]);
		temp19_multiply12+=((*(ptr_ee19+i))*q_e12[i]);
		temp19_multiply13+=((*(ptr_ee19+i))*q_e13[i]);
		temp19_multiply14+=((*(ptr_ee19+i))*q_e14[i]);
		temp19_multiply15+=((*(ptr_ee19+i))*q_e15[i]);
		temp19_multiply16+=((*(ptr_ee19+i))*q_e16[i]);
		temp19_multiply17+=((*(ptr_ee19+i))*q_e17[i]);
		temp19_multiply18+=((*(ptr_ee19+i))*q_e18[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp19_multiply19[i]=((q_e1[i])  * temp19_multiply1);
		temp19_multiply20[i]=((q_e2[i])  * temp19_multiply2);
		temp19_multiply21[i]=((q_e3[i])  * temp19_multiply3);
		temp19_multiply22[i]=((q_e4[i])  * temp19_multiply4);
		temp19_multiply23[i]=((q_e5[i])  * temp19_multiply5);
		temp19_multiply24[i]=((q_e6[i])  * temp19_multiply6);
		temp19_multiply25[i]=((q_e7[i])  * temp19_multiply7);
		temp19_multiply26[i]=((q_e8[i])  * temp19_multiply8);
		temp19_multiply27[i]=((q_e9[i])  * temp19_multiply9);
		temp19_multiply28[i]=((q_e10[i]) * temp19_multiply10);
		temp19_multiply29[i]=((q_e11[i]) * temp19_multiply11);
		temp19_multiply30[i]=((q_e12[i]) * temp19_multiply12);
		temp19_multiply31[i]=((q_e13[i]) * temp19_multiply13);
		temp19_multiply32[i]=((q_e14[i]) * temp19_multiply14);
		temp19_multiply33[i]=((q_e15[i]) * temp19_multiply15);
		temp19_multiply34[i]=((q_e16[i]) * temp19_multiply16);
		temp19_multiply35[i]=((q_e17[i]) * temp19_multiply17);
		temp19_multiply36[i]=((q_e18[i]) * temp19_multiply18);
	}

	for(int i = 0; i <column; i++)
	{
		temp19_multiply37[i]=( (*(ptr_ee19+i)) - (temp19_multiply19[i]) - (temp19_multiply20[i]) - (temp19_multiply21[i]) - (temp19_multiply22[i]) -
				(temp19_multiply23[i]) - (temp19_multiply24[i]) - (temp19_multiply25[i])  - (temp19_multiply26[i])  - (temp19_multiply27[i]) - (temp19_multiply28[i])
				- (temp19_multiply29[i])- (temp19_multiply30[i]) - (temp19_multiply31[i]) - (temp19_multiply32[i])- (temp19_multiply33[i]) - (temp19_multiply34[i])
				- (temp19_multiply35[i]) - (temp19_multiply36[i]) );
		temp19_pow=temp19_pow+(pow(temp19_multiply37[i],2));
	}
	det_e19 =sqrt(temp19_pow);
	for(int i = 0; i <column; i++)
	{
		q_e19[i]=(temp19_multiply37[i])/ det_e19;
	}
}
void caculate_ee20(matrix_t ptr_ee20[column])
{
	matrix_t temp20_pow=0;
	matrix_t det_e20 =0;
	matrix_t temp20_multiply1=0;
	matrix_t temp20_multiply2=0;
	matrix_t temp20_multiply3=0;
	matrix_t temp20_multiply4=0;
	matrix_t temp20_multiply5=0;
	matrix_t temp20_multiply6=0;
	matrix_t temp20_multiply7=0;
	matrix_t temp20_multiply8=0;
	matrix_t temp20_multiply9=0;
	matrix_t temp20_multiply10=0;
	matrix_t temp20_multiply11=0;
	matrix_t temp20_multiply12=0;
	matrix_t temp20_multiply13=0;
	matrix_t temp20_multiply14=0;
	matrix_t temp20_multiply15=0;
	matrix_t temp20_multiply16=0;
	matrix_t temp20_multiply17=0;
	matrix_t temp20_multiply18=0;
	matrix_t temp20_multiply19=0;
	matrix_t temp20_multiply20[row];
	matrix_t temp20_multiply21[row];
	matrix_t temp20_multiply22[row];
	matrix_t temp20_multiply23[row];
	matrix_t temp20_multiply24[row];
	matrix_t temp20_multiply25[row];
	matrix_t temp20_multiply26[row];
	matrix_t temp20_multiply27[row];
	matrix_t temp20_multiply28[row];
	matrix_t temp20_multiply29[row];
	matrix_t temp20_multiply30[row];
	matrix_t temp20_multiply31[row];
	matrix_t temp20_multiply32[row];
	matrix_t temp20_multiply33[row];
	matrix_t temp20_multiply34[row];
	matrix_t temp20_multiply35[row];
	matrix_t temp20_multiply36[row];
	matrix_t temp20_multiply37[row];
	matrix_t temp20_multiply38[row];
	matrix_t temp20_multiply39[row];
	for(int i = 0; i <column; i++)
	{
		temp20_multiply1+= ((*(ptr_ee20+i))*q_e1[i]);
		temp20_multiply2+= ((*(ptr_ee20+i))*q_e2[i]);
		temp20_multiply3+= ((*(ptr_ee20+i))*q_e3[i]);
		temp20_multiply4+= ((*(ptr_ee20+i))*q_e4[i]);
		temp20_multiply5+= ((*(ptr_ee20+i))*q_e5[i]);
		temp20_multiply6+= ((*(ptr_ee20+i))*q_e6[i]);
		temp20_multiply7+= ((*(ptr_ee20+i))*q_e7[i]);
		temp20_multiply8+= ((*(ptr_ee20+i))*q_e8[i]);
		temp20_multiply9+= ((*(ptr_ee20+i))*q_e9[i]);
		temp20_multiply10+=((*(ptr_ee20+i))*q_e10[i]);
		temp20_multiply11+=((*(ptr_ee20+i))*q_e11[i]);
		temp20_multiply12+=((*(ptr_ee20+i))*q_e12[i]);
		temp20_multiply13+=((*(ptr_ee20+i))*q_e13[i]);
		temp20_multiply14+=((*(ptr_ee20+i))*q_e14[i]);
		temp20_multiply15+=((*(ptr_ee20+i))*q_e15[i]);
		temp20_multiply16+=((*(ptr_ee20+i))*q_e16[i]);
		temp20_multiply17+=((*(ptr_ee20+i))*q_e17[i]);
		temp20_multiply18+=((*(ptr_ee20+i))*q_e18[i]);
		temp20_multiply19+=((*(ptr_ee20+i))*q_e19[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp20_multiply20[i]=((q_e1[i])  * temp20_multiply1);
		temp20_multiply21[i]=((q_e2[i])  * temp20_multiply2);
		temp20_multiply22[i]=((q_e3[i])  * temp20_multiply3);
		temp20_multiply23[i]=((q_e4[i])  * temp20_multiply4);
		temp20_multiply24[i]=((q_e5[i])  * temp20_multiply5);
		temp20_multiply25[i]=((q_e6[i])  * temp20_multiply6);
		temp20_multiply26[i]=((q_e7[i])  * temp20_multiply7);
		temp20_multiply27[i]=((q_e8[i])  * temp20_multiply8);
		temp20_multiply28[i]=((q_e9[i])  * temp20_multiply9);
		temp20_multiply29[i]=((q_e10[i]) * temp20_multiply10);
		temp20_multiply30[i]=((q_e11[i]) * temp20_multiply11);
		temp20_multiply31[i]=((q_e12[i]) * temp20_multiply12);
		temp20_multiply32[i]=((q_e13[i]) * temp20_multiply13);
		temp20_multiply33[i]=((q_e14[i]) * temp20_multiply14);
		temp20_multiply34[i]=((q_e15[i]) * temp20_multiply15);
		temp20_multiply35[i]=((q_e16[i]) * temp20_multiply16);
		temp20_multiply36[i]=((q_e17[i]) * temp20_multiply17);
		temp20_multiply37[i]=((q_e18[i]) * temp20_multiply18);
		temp20_multiply38[i]=((q_e19[i]) * temp20_multiply19);
	}

	for(int i = 0; i <column; i++)
	{
		temp20_multiply39[i]=( (*(ptr_ee20+i)) - (temp20_multiply20[i]) - (temp20_multiply21[i]) - (temp20_multiply22[i]) - (temp20_multiply23[i]) -
				(temp20_multiply24[i]) - (temp20_multiply25[i]) - (temp20_multiply26[i])  - (temp20_multiply27[i])  - (temp20_multiply28[i]) - (temp20_multiply29[i])
				- (temp20_multiply30[i])- (temp20_multiply31[i]) - (temp20_multiply32[i]) - (temp20_multiply33[i])- (temp20_multiply34[i]) - (temp20_multiply35[i])
				- (temp20_multiply36[i]) - (temp20_multiply37[i])  - (temp20_multiply38[i]) );
		temp20_pow=temp20_pow+(pow(temp20_multiply39[i],2));
	}
	det_e20 =sqrt(temp20_pow);
	for(int i = 0; i <column; i++)
	{
		q_e20[i]=(temp20_multiply39[i])/ det_e20;
	}
}
void caculate_ee21(matrix_t ptr_ee21[column])
{
	matrix_t temp21_pow=0;
	matrix_t det_e21 =0;
	matrix_t temp21_multiply1=0;
	matrix_t temp21_multiply2=0;
	matrix_t temp21_multiply3=0;
	matrix_t temp21_multiply4=0;
	matrix_t temp21_multiply5=0;
	matrix_t temp21_multiply6=0;
	matrix_t temp21_multiply7=0;
	matrix_t temp21_multiply8=0;
	matrix_t temp21_multiply9=0;
	matrix_t temp21_multiply10=0;
	matrix_t temp21_multiply11=0;
	matrix_t temp21_multiply12=0;
	matrix_t temp21_multiply13=0;
	matrix_t temp21_multiply14=0;
	matrix_t temp21_multiply15=0;
	matrix_t temp21_multiply16=0;
	matrix_t temp21_multiply17=0;
	matrix_t temp21_multiply18=0;
	matrix_t temp21_multiply19=0;
	matrix_t temp21_multiply20=0;
	matrix_t temp21_multiply21[row];
	matrix_t temp21_multiply22[row];
	matrix_t temp21_multiply23[row];
	matrix_t temp21_multiply24[row];
	matrix_t temp21_multiply25[row];
	matrix_t temp21_multiply26[row];
	matrix_t temp21_multiply27[row];
	matrix_t temp21_multiply28[row];
	matrix_t temp21_multiply29[row];
	matrix_t temp21_multiply30[row];
	matrix_t temp21_multiply31[row];
	matrix_t temp21_multiply32[row];
	matrix_t temp21_multiply33[row];
	matrix_t temp21_multiply34[row];
	matrix_t temp21_multiply35[row];
	matrix_t temp21_multiply36[row];
	matrix_t temp21_multiply37[row];
	matrix_t temp21_multiply38[row];
	matrix_t temp21_multiply39[row];
	matrix_t temp21_multiply40[row];
	matrix_t temp21_multiply41[row];
	for(int i = 0; i <column; i++)
	{
		temp21_multiply1+= ((*(ptr_ee21+i))*q_e1[i]);
		temp21_multiply2+= ((*(ptr_ee21+i))*q_e2[i]);
		temp21_multiply3+= ((*(ptr_ee21+i))*q_e3[i]);
		temp21_multiply4+= ((*(ptr_ee21+i))*q_e4[i]);
		temp21_multiply5+= ((*(ptr_ee21+i))*q_e5[i]);
		temp21_multiply6+= ((*(ptr_ee21+i))*q_e6[i]);
		temp21_multiply7+= ((*(ptr_ee21+i))*q_e7[i]);
		temp21_multiply8+= ((*(ptr_ee21+i))*q_e8[i]);
		temp21_multiply9+= ((*(ptr_ee21+i))*q_e9[i]);
		temp21_multiply10+=((*(ptr_ee21+i))*q_e10[i]);
		temp21_multiply11+=((*(ptr_ee21+i))*q_e11[i]);
		temp21_multiply12+=((*(ptr_ee21+i))*q_e12[i]);
		temp21_multiply13+=((*(ptr_ee21+i))*q_e13[i]);
		temp21_multiply14+=((*(ptr_ee21+i))*q_e14[i]);
		temp21_multiply15+=((*(ptr_ee21+i))*q_e15[i]);
		temp21_multiply16+=((*(ptr_ee21+i))*q_e16[i]);
		temp21_multiply17+=((*(ptr_ee21+i))*q_e17[i]);
		temp21_multiply18+=((*(ptr_ee21+i))*q_e18[i]);
		temp21_multiply19+=((*(ptr_ee21+i))*q_e19[i]);
		temp21_multiply20+=((*(ptr_ee21+i))*q_e20[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp21_multiply21[i]=((q_e1[i])  * temp21_multiply1);
		temp21_multiply22[i]=((q_e2[i])  * temp21_multiply2);
		temp21_multiply23[i]=((q_e3[i])  * temp21_multiply3);
		temp21_multiply24[i]=((q_e4[i])  * temp21_multiply4);
		temp21_multiply25[i]=((q_e5[i])  * temp21_multiply5);
		temp21_multiply26[i]=((q_e6[i])  * temp21_multiply6);
		temp21_multiply27[i]=((q_e7[i])  * temp21_multiply7);
		temp21_multiply28[i]=((q_e8[i])  * temp21_multiply8);
		temp21_multiply29[i]=((q_e9[i])  * temp21_multiply9);
		temp21_multiply30[i]=((q_e10[i]) * temp21_multiply10);
		temp21_multiply31[i]=((q_e11[i]) * temp21_multiply11);
		temp21_multiply32[i]=((q_e12[i]) * temp21_multiply12);
		temp21_multiply33[i]=((q_e13[i]) * temp21_multiply13);
		temp21_multiply34[i]=((q_e14[i]) * temp21_multiply14);
		temp21_multiply35[i]=((q_e15[i]) * temp21_multiply15);
		temp21_multiply36[i]=((q_e16[i]) * temp21_multiply16);
		temp21_multiply37[i]=((q_e17[i]) * temp21_multiply17);
		temp21_multiply38[i]=((q_e18[i]) * temp21_multiply18);
		temp21_multiply39[i]=((q_e19[i]) * temp21_multiply19);
		temp21_multiply40[i]=((q_e20[i]) * temp21_multiply20);
	}

	for(int i = 0; i <column; i++)
	{
		temp21_multiply41[i]=( (*(ptr_ee21+i)) - (temp21_multiply21[i]) - (temp21_multiply22[i]) - (temp21_multiply23[i]) - (temp21_multiply24[i]) -
				(temp21_multiply25[i]) - (temp21_multiply26[i]) - (temp21_multiply27[i])  - (temp21_multiply28[i])  - (temp21_multiply29[i]) - (temp21_multiply30[i])
				- (temp21_multiply31[i])- (temp21_multiply32[i]) - (temp21_multiply33[i]) - (temp21_multiply34[i])- (temp21_multiply35[i]) - (temp21_multiply36[i])
				- (temp21_multiply37[i]) - (temp21_multiply38[i])  - (temp21_multiply39[i]) - (temp21_multiply40[i]) );
		temp21_pow=temp21_pow+(pow(temp21_multiply41[i],2));
	}
	det_e21 =sqrt(temp21_pow);
	for(int i = 0; i <column; i++)
	{
		q_e21[i]=(temp21_multiply41[i])/ det_e21;
	}
}
void caculate_ee22(matrix_t ptr_ee22[column])
{
	matrix_t temp22_pow=0;
	matrix_t det_e22 =0;
	matrix_t temp22_multiply1=0;
	matrix_t temp22_multiply2=0;
	matrix_t temp22_multiply3=0;
	matrix_t temp22_multiply4=0;
	matrix_t temp22_multiply5=0;
	matrix_t temp22_multiply6=0;
	matrix_t temp22_multiply7=0;
	matrix_t temp22_multiply8=0;
	matrix_t temp22_multiply9=0;
	matrix_t temp22_multiply10=0;
	matrix_t temp22_multiply11=0;
	matrix_t temp22_multiply12=0;
	matrix_t temp22_multiply13=0;
	matrix_t temp22_multiply14=0;
	matrix_t temp22_multiply15=0;
	matrix_t temp22_multiply16=0;
	matrix_t temp22_multiply17=0;
	matrix_t temp22_multiply18=0;
	matrix_t temp22_multiply19=0;
	matrix_t temp22_multiply20=0;
	matrix_t temp22_multiply21=0;
	matrix_t temp22_multiply22[row];
	matrix_t temp22_multiply23[row];
	matrix_t temp22_multiply24[row];
	matrix_t temp22_multiply25[row];
	matrix_t temp22_multiply26[row];
	matrix_t temp22_multiply27[row];
	matrix_t temp22_multiply28[row];
	matrix_t temp22_multiply29[row];
	matrix_t temp22_multiply30[row];
	matrix_t temp22_multiply31[row];
	matrix_t temp22_multiply32[row];
	matrix_t temp22_multiply33[row];
	matrix_t temp22_multiply34[row];
	matrix_t temp22_multiply35[row];
	matrix_t temp22_multiply36[row];
	matrix_t temp22_multiply37[row];
	matrix_t temp22_multiply38[row];
	matrix_t temp22_multiply39[row];
	matrix_t temp22_multiply40[row];
	matrix_t temp22_multiply41[row];
	matrix_t temp22_multiply42[row];
	matrix_t temp22_multiply43[row];
	for(int i = 0; i <column; i++)
	{
		temp22_multiply1+= ((*(ptr_ee22+i))*q_e1[i]);
		temp22_multiply2+= ((*(ptr_ee22+i))*q_e2[i]);
		temp22_multiply3+= ((*(ptr_ee22+i))*q_e3[i]);
		temp22_multiply4+= ((*(ptr_ee22+i))*q_e4[i]);
		temp22_multiply5+= ((*(ptr_ee22+i))*q_e5[i]);
		temp22_multiply6+= ((*(ptr_ee22+i))*q_e6[i]);
		temp22_multiply7+= ((*(ptr_ee22+i))*q_e7[i]);
		temp22_multiply8+= ((*(ptr_ee22+i))*q_e8[i]);
		temp22_multiply9+= ((*(ptr_ee22+i))*q_e9[i]);
		temp22_multiply10+=((*(ptr_ee22+i))*q_e10[i]);
		temp22_multiply11+=((*(ptr_ee22+i))*q_e11[i]);
		temp22_multiply12+=((*(ptr_ee22+i))*q_e12[i]);
		temp22_multiply13+=((*(ptr_ee22+i))*q_e13[i]);
		temp22_multiply14+=((*(ptr_ee22+i))*q_e14[i]);
		temp22_multiply15+=((*(ptr_ee22+i))*q_e15[i]);
		temp22_multiply16+=((*(ptr_ee22+i))*q_e16[i]);
		temp22_multiply17+=((*(ptr_ee22+i))*q_e17[i]);
		temp22_multiply18+=((*(ptr_ee22+i))*q_e18[i]);
		temp22_multiply19+=((*(ptr_ee22+i))*q_e19[i]);
		temp22_multiply20+=((*(ptr_ee22+i))*q_e20[i]);
		temp22_multiply21+=((*(ptr_ee22+i))*q_e21[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp22_multiply22[i]=((q_e1[i])  * temp22_multiply1);
		temp22_multiply23[i]=((q_e2[i])  * temp22_multiply2);
		temp22_multiply24[i]=((q_e3[i])  * temp22_multiply3);
		temp22_multiply25[i]=((q_e4[i])  * temp22_multiply4);
		temp22_multiply26[i]=((q_e5[i])  * temp22_multiply5);
		temp22_multiply27[i]=((q_e6[i])  * temp22_multiply6);
		temp22_multiply28[i]=((q_e7[i])  * temp22_multiply7);
		temp22_multiply29[i]=((q_e8[i])  * temp22_multiply8);
		temp22_multiply30[i]=((q_e9[i])  * temp22_multiply9);
		temp22_multiply31[i]=((q_e10[i]) * temp22_multiply10);
		temp22_multiply32[i]=((q_e11[i]) * temp22_multiply11);
		temp22_multiply33[i]=((q_e12[i]) * temp22_multiply12);
		temp22_multiply34[i]=((q_e13[i]) * temp22_multiply13);
		temp22_multiply35[i]=((q_e14[i]) * temp22_multiply14);
		temp22_multiply36[i]=((q_e15[i]) * temp22_multiply15);
		temp22_multiply37[i]=((q_e16[i]) * temp22_multiply16);
		temp22_multiply38[i]=((q_e17[i]) * temp22_multiply17);
		temp22_multiply39[i]=((q_e18[i]) * temp22_multiply18);
		temp22_multiply40[i]=((q_e19[i]) * temp22_multiply19);
		temp22_multiply41[i]=((q_e20[i]) * temp22_multiply20);
		temp22_multiply42[i]=((q_e21[i]) * temp22_multiply21);
	}

	for(int i = 0; i <column; i++)
	{
		temp22_multiply43[i]=( (*(ptr_ee22+i)) - (temp22_multiply22[i]) - (temp22_multiply23[i]) - (temp22_multiply24[i]) - (temp22_multiply25[i]) -
				(temp22_multiply26[i]) - (temp22_multiply27[i]) - (temp22_multiply28[i])  - (temp22_multiply29[i])  - (temp22_multiply30[i]) - (temp22_multiply31[i])
				- (temp22_multiply32[i])- (temp22_multiply33[i]) - (temp22_multiply34[i]) - (temp22_multiply35[i])- (temp22_multiply36[i]) - (temp22_multiply37[i])
				- (temp22_multiply38[i]) - (temp22_multiply39[i])  - (temp22_multiply40[i]) - (temp22_multiply41[i]) - (temp22_multiply42[i]) );
		temp22_pow=temp22_pow+(pow(temp22_multiply43[i],2));
	}
	det_e22 =sqrt(temp22_pow);
	for(int i = 0; i <column; i++)
	{
		q_e22[i]=(temp22_multiply43[i])/ det_e22;
	}
}
void caculate_ee23(matrix_t ptr_ee23[column])
{
	matrix_t temp23_pow=0;
	matrix_t det_e23 =0;
	matrix_t temp23_multiply1=0;
	matrix_t temp23_multiply2=0;
	matrix_t temp23_multiply3=0;
	matrix_t temp23_multiply4=0;
	matrix_t temp23_multiply5=0;
	matrix_t temp23_multiply6=0;
	matrix_t temp23_multiply7=0;
	matrix_t temp23_multiply8=0;
	matrix_t temp23_multiply9=0;
	matrix_t temp23_multiply10=0;
	matrix_t temp23_multiply11=0;
	matrix_t temp23_multiply12=0;
	matrix_t temp23_multiply13=0;
	matrix_t temp23_multiply14=0;
	matrix_t temp23_multiply15=0;
	matrix_t temp23_multiply16=0;
	matrix_t temp23_multiply17=0;
	matrix_t temp23_multiply18=0;
	matrix_t temp23_multiply19=0;
	matrix_t temp23_multiply20=0;
	matrix_t temp23_multiply21=0;
	matrix_t temp23_multiply22=0;
	matrix_t temp23_multiply23[row];
	matrix_t temp23_multiply24[row];
	matrix_t temp23_multiply25[row];
	matrix_t temp23_multiply26[row];
	matrix_t temp23_multiply27[row];
	matrix_t temp23_multiply28[row];
	matrix_t temp23_multiply29[row];
	matrix_t temp23_multiply30[row];
	matrix_t temp23_multiply31[row];
	matrix_t temp23_multiply32[row];
	matrix_t temp23_multiply33[row];
	matrix_t temp23_multiply34[row];
	matrix_t temp23_multiply35[row];
	matrix_t temp23_multiply36[row];
	matrix_t temp23_multiply37[row];
	matrix_t temp23_multiply38[row];
	matrix_t temp23_multiply39[row];
	matrix_t temp23_multiply40[row];
	matrix_t temp23_multiply41[row];
	matrix_t temp23_multiply42[row];
	matrix_t temp23_multiply43[row];
	matrix_t temp23_multiply44[row];
	matrix_t temp23_multiply45[row];
	for(int i = 0; i <column; i++)
	{
		temp23_multiply1+= ((*(ptr_ee23+i))*q_e1[i]);
		temp23_multiply2+= ((*(ptr_ee23+i))*q_e2[i]);
		temp23_multiply3+= ((*(ptr_ee23+i))*q_e3[i]);
		temp23_multiply4+= ((*(ptr_ee23+i))*q_e4[i]);
		temp23_multiply5+= ((*(ptr_ee23+i))*q_e5[i]);
		temp23_multiply6+= ((*(ptr_ee23+i))*q_e6[i]);
		temp23_multiply7+= ((*(ptr_ee23+i))*q_e7[i]);
		temp23_multiply8+= ((*(ptr_ee23+i))*q_e8[i]);
		temp23_multiply9+= ((*(ptr_ee23+i))*q_e9[i]);
		temp23_multiply10+=((*(ptr_ee23+i))*q_e10[i]);
		temp23_multiply11+=((*(ptr_ee23+i))*q_e11[i]);
		temp23_multiply12+=((*(ptr_ee23+i))*q_e12[i]);
		temp23_multiply13+=((*(ptr_ee23+i))*q_e13[i]);
		temp23_multiply14+=((*(ptr_ee23+i))*q_e14[i]);
		temp23_multiply15+=((*(ptr_ee23+i))*q_e15[i]);
		temp23_multiply16+=((*(ptr_ee23+i))*q_e16[i]);
		temp23_multiply17+=((*(ptr_ee23+i))*q_e17[i]);
		temp23_multiply18+=((*(ptr_ee23+i))*q_e18[i]);
		temp23_multiply19+=((*(ptr_ee23+i))*q_e19[i]);
		temp23_multiply20+=((*(ptr_ee23+i))*q_e20[i]);
		temp23_multiply21+=((*(ptr_ee23+i))*q_e21[i]);
		temp23_multiply22+=((*(ptr_ee23+i))*q_e22[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp23_multiply23[i]=((q_e1[i])  * temp23_multiply1);
		temp23_multiply24[i]=((q_e2[i])  * temp23_multiply2);
		temp23_multiply25[i]=((q_e3[i])  * temp23_multiply3);
		temp23_multiply26[i]=((q_e4[i])  * temp23_multiply4);
		temp23_multiply27[i]=((q_e5[i])  * temp23_multiply5);
		temp23_multiply28[i]=((q_e6[i])  * temp23_multiply6);
		temp23_multiply29[i]=((q_e7[i])  * temp23_multiply7);
		temp23_multiply30[i]=((q_e8[i])  * temp23_multiply8);
		temp23_multiply31[i]=((q_e9[i])  * temp23_multiply9);
		temp23_multiply32[i]=((q_e10[i]) * temp23_multiply10);
		temp23_multiply33[i]=((q_e11[i]) * temp23_multiply11);
		temp23_multiply34[i]=((q_e12[i]) * temp23_multiply12);
		temp23_multiply35[i]=((q_e13[i]) * temp23_multiply13);
		temp23_multiply36[i]=((q_e14[i]) * temp23_multiply14);
		temp23_multiply37[i]=((q_e15[i]) * temp23_multiply15);
		temp23_multiply38[i]=((q_e16[i]) * temp23_multiply16);
		temp23_multiply39[i]=((q_e17[i]) * temp23_multiply17);
		temp23_multiply40[i]=((q_e18[i]) * temp23_multiply18);
		temp23_multiply41[i]=((q_e19[i]) * temp23_multiply19);
		temp23_multiply42[i]=((q_e20[i]) * temp23_multiply20);
		temp23_multiply43[i]=((q_e21[i]) * temp23_multiply21);
		temp23_multiply44[i]=((q_e22[i]) * temp23_multiply22);
	}

	for(int i = 0; i <column; i++)
	{
		temp23_multiply45[i]=( (*(ptr_ee23+i)) - (temp23_multiply23[i]) - (temp23_multiply24[i]) - (temp23_multiply25[i]) - (temp23_multiply26[i]) -
				(temp23_multiply27[i]) - (temp23_multiply28[i]) - (temp23_multiply29[i])  - (temp23_multiply30[i])  - (temp23_multiply31[i]) - (temp23_multiply32[i])
				- (temp23_multiply33[i])- (temp23_multiply34[i]) - (temp23_multiply35[i]) - (temp23_multiply36[i])- (temp23_multiply37[i]) - (temp23_multiply38[i])
				- (temp23_multiply39[i]) - (temp23_multiply40[i])  - (temp23_multiply41[i]) - (temp23_multiply42[i]) - (temp23_multiply43[i])- (temp23_multiply44[i]) );
		temp23_pow=temp23_pow+(pow(temp23_multiply45[i],2));
	}
	det_e23 =sqrt(temp23_pow);
	for(int i = 0; i <column; i++)
	{
		q_e23[i]=(temp23_multiply45[i])/ det_e23;
	}
}
void caculate_ee24(matrix_t ptr_ee24[column])
{
	matrix_t temp24_pow=0;
	matrix_t det_e24 =0;
	matrix_t temp24_multiply1=0;
	matrix_t temp24_multiply2=0;
	matrix_t temp24_multiply3=0;
	matrix_t temp24_multiply4=0;
	matrix_t temp24_multiply5=0;
	matrix_t temp24_multiply6=0;
	matrix_t temp24_multiply7=0;
	matrix_t temp24_multiply8=0;
	matrix_t temp24_multiply9=0;
	matrix_t temp24_multiply10=0;
	matrix_t temp24_multiply11=0;
	matrix_t temp24_multiply12=0;
	matrix_t temp24_multiply13=0;
	matrix_t temp24_multiply14=0;
	matrix_t temp24_multiply15=0;
	matrix_t temp24_multiply16=0;
	matrix_t temp24_multiply17=0;
	matrix_t temp24_multiply18=0;
	matrix_t temp24_multiply19=0;
	matrix_t temp24_multiply20=0;
	matrix_t temp24_multiply21=0;
	matrix_t temp24_multiply22=0;
	matrix_t temp24_multiply23=0;
	matrix_t temp24_multiply24[row];
	matrix_t temp24_multiply25[row];
	matrix_t temp24_multiply26[row];
	matrix_t temp24_multiply27[row];
	matrix_t temp24_multiply28[row];
	matrix_t temp24_multiply29[row];
	matrix_t temp24_multiply30[row];
	matrix_t temp24_multiply31[row];
	matrix_t temp24_multiply32[row];
	matrix_t temp24_multiply33[row];
	matrix_t temp24_multiply34[row];
	matrix_t temp24_multiply35[row];
	matrix_t temp24_multiply36[row];
	matrix_t temp24_multiply37[row];
	matrix_t temp24_multiply38[row];
	matrix_t temp24_multiply39[row];
	matrix_t temp24_multiply40[row];
	matrix_t temp24_multiply41[row];
	matrix_t temp24_multiply42[row];
	matrix_t temp24_multiply43[row];
	matrix_t temp24_multiply44[row];
	matrix_t temp24_multiply45[row];
	matrix_t temp24_multiply46[row];
	matrix_t temp24_multiply47[row];
	for(int i = 0; i <column; i++)
	{
		temp24_multiply1+= ((*(ptr_ee24+i))*q_e1[i]);
		temp24_multiply2+= ((*(ptr_ee24+i))*q_e2[i]);
		temp24_multiply3+= ((*(ptr_ee24+i))*q_e3[i]);
		temp24_multiply4+= ((*(ptr_ee24+i))*q_e4[i]);
		temp24_multiply5+= ((*(ptr_ee24+i))*q_e5[i]);
		temp24_multiply6+= ((*(ptr_ee24+i))*q_e6[i]);
		temp24_multiply7+= ((*(ptr_ee24+i))*q_e7[i]);
		temp24_multiply8+= ((*(ptr_ee24+i))*q_e8[i]);
		temp24_multiply9+= ((*(ptr_ee24+i))*q_e9[i]);
		temp24_multiply10+=((*(ptr_ee24+i))*q_e10[i]);
		temp24_multiply11+=((*(ptr_ee24+i))*q_e11[i]);
		temp24_multiply12+=((*(ptr_ee24+i))*q_e12[i]);
		temp24_multiply13+=((*(ptr_ee24+i))*q_e13[i]);
		temp24_multiply14+=((*(ptr_ee24+i))*q_e14[i]);
		temp24_multiply15+=((*(ptr_ee24+i))*q_e15[i]);
		temp24_multiply16+=((*(ptr_ee24+i))*q_e16[i]);
		temp24_multiply17+=((*(ptr_ee24+i))*q_e17[i]);
		temp24_multiply18+=((*(ptr_ee24+i))*q_e18[i]);
		temp24_multiply19+=((*(ptr_ee24+i))*q_e19[i]);
		temp24_multiply20+=((*(ptr_ee24+i))*q_e20[i]);
		temp24_multiply21+=((*(ptr_ee24+i))*q_e21[i]);
		temp24_multiply22+=((*(ptr_ee24+i))*q_e22[i]);
		temp24_multiply23+=((*(ptr_ee24+i))*q_e23[i]);
	}
	for(int i = 0; i <column; i++)
	{
		temp24_multiply24[i]=((q_e1[i])  * temp24_multiply1);
		temp24_multiply25[i]=((q_e2[i])  * temp24_multiply2);
		temp24_multiply26[i]=((q_e3[i])  * temp24_multiply3);
		temp24_multiply27[i]=((q_e4[i])  * temp24_multiply4);
		temp24_multiply28[i]=((q_e5[i])  * temp24_multiply5);
		temp24_multiply29[i]=((q_e6[i])  * temp24_multiply6);
		temp24_multiply30[i]=((q_e7[i])  * temp24_multiply7);
		temp24_multiply31[i]=((q_e8[i])  * temp24_multiply8);
		temp24_multiply32[i]=((q_e9[i])  * temp24_multiply9);
		temp24_multiply33[i]=((q_e10[i]) * temp24_multiply10);
		temp24_multiply34[i]=((q_e11[i]) * temp24_multiply11);
		temp24_multiply35[i]=((q_e12[i]) * temp24_multiply12);
		temp24_multiply36[i]=((q_e13[i]) * temp24_multiply13);
		temp24_multiply37[i]=((q_e14[i]) * temp24_multiply14);
		temp24_multiply38[i]=((q_e15[i]) * temp24_multiply15);
		temp24_multiply39[i]=((q_e16[i]) * temp24_multiply16);
		temp24_multiply40[i]=((q_e17[i]) * temp24_multiply17);
		temp24_multiply41[i]=((q_e18[i]) * temp24_multiply18);
		temp24_multiply42[i]=((q_e19[i]) * temp24_multiply19);
		temp24_multiply43[i]=((q_e20[i]) * temp24_multiply20);
		temp24_multiply44[i]=((q_e21[i]) * temp24_multiply21);
		temp24_multiply45[i]=((q_e22[i]) * temp24_multiply22);
		temp24_multiply46[i]=((q_e23[i]) * temp24_multiply23);
	}

	for(int i = 0; i <column; i++)
	{
		temp24_multiply47[i]=( (*(ptr_ee24+i)) - (temp24_multiply24[i]) - (temp24_multiply25[i]) - (temp24_multiply26[i]) - (temp24_multiply27[i]) -
				(temp24_multiply28[i]) - (temp24_multiply29[i]) - (temp24_multiply30[i])  - (temp24_multiply31[i])  - (temp24_multiply32[i]) - (temp24_multiply33[i])
				- (temp24_multiply34[i])- (temp24_multiply35[i]) - (temp24_multiply36[i]) - (temp24_multiply37[i])- (temp24_multiply38[i]) - (temp24_multiply39[i])
				- (temp24_multiply40[i]) - (temp24_multiply41[i])  - (temp24_multiply42[i]) - (temp24_multiply43[i]) - (temp24_multiply44[i])- (temp24_multiply45[i])
				- (temp24_multiply46[i]) );
		temp24_pow=temp24_pow+(pow(temp24_multiply47[i],2));
	}
	det_e24 =sqrt(temp24_pow);
	for(int i = 0; i <column; i++)
	{
		q_e24[i]=(temp24_multiply47[i])/ det_e24;
	}
}

void  upper_triagular_matrix(matrix_t ptr_col1[column],matrix_t ptr_col2[column],matrix_t ptr_col3[column],matrix_t ptr_col4[column],matrix_t ptr_col5[column],
		matrix_t ptr_col6[column],matrix_t ptr_col7[column],matrix_t ptr_col8[column],matrix_t ptr_col9[column],matrix_t ptr_col10[column],matrix_t ptr_col11[column],
		matrix_t ptr_col12[column],matrix_t ptr_col13[column],matrix_t ptr_col14[column],matrix_t ptr_col15[column],matrix_t ptr_col16[column],matrix_t ptr_col17[column],
		matrix_t ptr_col18[column],matrix_t ptr_col19[column],matrix_t ptr_col20[column],matrix_t ptr_col21[column],matrix_t ptr_col22[column],matrix_t ptr_col23[column],
		matrix_t ptr_col24[column])
{
	///////////////////////////////////////row1//////////////////////////////////////////
    matrix_t *ptr_ee[] = {q_e1,q_e2,q_e3,q_e4,q_e5,q_e6,q_e7,q_e8,q_e9,q_e10,q_e11,q_e12,q_e13,q_e14,q_e15,q_e16,q_e17,q_e18,q_e19,q_e20,q_e21,q_e22,q_e23,q_e24};
    matrix_t *ptr_col[] = {ptr_col1,ptr_col2,ptr_col3,ptr_col4,ptr_col5,ptr_col6,ptr_col7,ptr_col8,ptr_col9,ptr_col10,ptr_col11,ptr_col12,
    		     	 	ptr_col13,ptr_col14,ptr_col15,ptr_col16,ptr_col17,ptr_col18,ptr_col19,ptr_col20,ptr_col21,ptr_col22,ptr_col23,ptr_col24};
    ///////////////////////////////////////row1//////////////////////////////////////////

    ///////row0///////
	for (int i = 0; i <=23; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i]+j))*(ptr_ee[0][j]));
		}
	}
	////////////
    ///////row1///////
	int i1=1;
	for (int i = 25; i <= 47; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i1]+j))*(ptr_ee[1][j]));
		}
		++i1;
	}
	////////////
    ///////row2///////
	int i2=2;
	for (int i = 50; i <= 71; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i2]+j))*(ptr_ee[2][j]));
		}
		++i2;
	}
	////////////
    ///////row3///////
	int i3=3;
	for (int i = 75; i <= 95; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i3]+j))*(ptr_ee[3][j]));
		}
		++i3;
	}
	////////////
    ///////row4///////
	int i4=4;
	for (int i = 100; i <= 119; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i4]+j))*(ptr_ee[4][j]));
		}
		++i4;
	}
	////////////
    ///////row5///////
	int i5=5;
	for (int i = 125; i <= 143; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i5]+j))*(ptr_ee[5][j]));
		}
		++i5;
	}
	////////////
    ///////row6///////
	int i6=6;
	for (int i = 150; i <= 167; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i6]+j))*(ptr_ee[6][j]));
		}
		++i6;
	}
	//////////////
    ///////row7///////
	int i7=7;
	for (int i = 175; i <= 191; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i7]+j))*(ptr_ee[7][j]));
		}
		++i7;
	}
	////////////////
    ///////row8///////
	int i8=8;
	for (int i = 200; i <= 215; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i8]+j))*(ptr_ee[8][j]));
		}
		++i8;
	}
	////////////
    ///////row9///////
	int i9=9;
	for (int i = 225; i <= 239; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i9]+j))*(ptr_ee[9][j]));
		}
		++i9;
	}
	////////////
    ///////row10///////
	int i10=10;
	for (int i = 250; i <= 263; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i10]+j))*(ptr_ee[10][j]));
		}
		++i10;
	}
	////////////
    ///////row1///////
	int i11=11;
	for (int i = 275; i <= 287; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i11]+j))*(ptr_ee[11][j]));
		}
		++i11;
	}
	////////////
    ///////row12///////
	int i12=12;
	for (int i = 300; i <= 311; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i12]+j))*(ptr_ee[12][j]));
		}
		++i12;
	}
	////////////
    ///////row13///////
	int i13=13;
	for (int i = 325; i <= 335; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i13]+j))*(ptr_ee[13][j]));
		}
		++i13;
	}
	////////////
    ///////row14///////
	int i14=14;
	for (int i = 350; i <= 359; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i14]+j))*(ptr_ee[14][j]));
		}
		++i14;
	}
	////////////
    ///////row15///////
	int i15=15;
	for (int i = 375; i <= 383; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i15]+j))*(ptr_ee[15][j]));
		}
		++i15;
	}
	////////////
    ///////row16///////
	int i16=16;
	for (int i = 400; i <= 407; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i16]+j))*(ptr_ee[16][j]));
		}
		++i16;
	}
	//////////////
    ///////row17///////
	int i17=17;
	for (int i = 425; i <= 431; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i17]+j))*(ptr_ee[17][j]));
		}
		++i17;
	}
	////////////////
    ///////row18///////
	int i18=18;
	for (int i = 450; i <= 455; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i18]+j))*(ptr_ee[18][j]));
		}
		++i18;
	}
	////////////
    ///////row19///////
	int i19=19;
	for (int i = 475; i <= 479; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i19]+j))*(ptr_ee[19][j]));
		}
		++i19;
	}
	////////////
    ///////row20///////
	int i20=20;
	for (int i = 500; i <= 503; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i20]+j))*(ptr_ee[20][j]));
		}
		++i20;
	}
	////////////
    ///////row21///////
	int i21=21;
	for (int i = 525; i <= 527; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i21]+j))*(ptr_ee[21][j]));
		}
		++i21;
	}
	////////////
    ///////row22///////
	int i22=22;
	for (int i = 550; i <= 551; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i22]+j))*(ptr_ee[22][j]));
		}
		++i22;
	}
	////////////
    ///////row23///////
	int i23=23;
	for (int i = 575; i <= 575; i++)
	{
		for (int j = 0; j < row; j++)
		{
			RR[i]+=((*(ptr_col[i23]+j))*(ptr_ee[23][j]));
		}
		++i23;
	}
	////////////
}


////////////////////////////////////////////////////////////////////////////////////



