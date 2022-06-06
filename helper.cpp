#include "dec.h"
#include <iostream>
#define _COMPLEX_MULTIPLIER_H_
#include <complex>
#include "stdio.h"
#include "stdint.h"
#include "hls/linear_algebra/utils/x_hls_matrix_utils.h"
#include "hls_stream.h"
using namespace hls;
using namespace std;
static matrix_t A1[row][column];
static matrix_t QR[row][column];
static matrix_t eigen_vector[row][column]={ {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
											{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
};
extern matrix_t q_e1[row];
extern matrix_t q_e2[row];
extern matrix_t q_e3[row];
extern matrix_t q_e4[row];
extern matrix_t q_e5[row];
extern matrix_t q_e6[row];
extern matrix_t q_e7[row];
extern matrix_t q_e8[row];
extern matrix_t q_e9[row];
extern matrix_t q_e10[row];
extern matrix_t q_e11[row];
extern matrix_t q_e12[row];
extern matrix_t q_e13[row];
extern matrix_t q_e14[row];
extern matrix_t q_e15[row];
extern matrix_t q_e16[row];
extern matrix_t q_e17[row];
extern matrix_t q_e18[row];
extern matrix_t q_e19[row];
extern matrix_t q_e20[row];
extern matrix_t q_e21[row];
extern matrix_t q_e22[row];
extern matrix_t q_e23[row];
extern matrix_t q_e24[row];
extern matrix_t RR[575];
void Status_check_call(matrix_t input[row][column])
{
	matrix_t col1[column];
	matrix_t col2[column];
	matrix_t col3[column];
	matrix_t col4[column];
	matrix_t col5[column];
	matrix_t col6[column];
	matrix_t col7[column];
	matrix_t col8[column];
	matrix_t col9[column];
	matrix_t col10[column];
	matrix_t col11[column];
	matrix_t col12[column];
	matrix_t col13[column];
	matrix_t col14[column];
	matrix_t col15[column];
	matrix_t col16[column];
	matrix_t col17[column];
	matrix_t col18[column];
	matrix_t col19[column];
	matrix_t col20[column];
	matrix_t col21[column];
	matrix_t col22[column];
	matrix_t col23[column];
	matrix_t col24[column];

	matrix_t Q[row][column];
	matrix_t R[row][column];

	matrix_t diff1=0;
	matrix_t diff2=0;
	int iterations=1;
	int  check=1;
	do
	{

			iterations++;
			hls::matrix_multiply<hls::NoTranspose,hls::NoTranspose,matrix_size,matrix_size,matrix_size,matrix_size,matrix_size,matrix_size,matrix_t,matrix_t>(input, eigen_vector,A1);
			/////////////////////////for filling columns///////////////////////////////////////////
			for(int i = 0; i <column; i++)
			{
				col1[i] =A1[i][0];
				col2[i] =A1[i][1];
				col3[i] =A1[i][2];
				col4[i] =A1[i][3];
				col5[i] =A1[i][4];
				col6[i] =A1[i][5];
				col7[i] =A1[i][6];
				col8[i] =A1[i][7];
				col9[i] =A1[i][8];
				col10[i]=A1[i][9];
				col11[i]=A1[i][10];
				col12[i]=A1[i][11];
				col13[i]=A1[i][12];
				col14[i]=A1[i][13];
				col15[i]=A1[i][14];
				col16[i]=A1[i][15];
				col17[i]=A1[i][16];
				col18[i]=A1[i][17];
				col19[i]=A1[i][18];
				col20[i]=A1[i][19];
				col21[i]=A1[i][20];
				col22[i]=A1[i][21];
				col23[i]=A1[i][22];
				col24[i]=A1[i][23];

			}
			/////////////////////////////////////////////////////////////////////////////////////////////
			////////////////for col1 calculations/////////////////////////

			caculate_ee1(col1);

			////////////////for col2 calculations/////////////////////////

			caculate_ee2(col2);


			caculate_ee3(col3);

			////////////////for col4 calculations/////////////////////////

			caculate_ee4(col4);

			////////////////for col5 calculations/////////////////////////

			caculate_ee5(col5);

			////////////////for col6 calculations/////////////////////////

			caculate_ee6(col6);

			////////////////for col7 calculations/////////////////////////

			caculate_ee7(col7);

			////////////////for col8 calculations/////////////////////////

			caculate_ee8(col8);

			////////////////for col9 calculations/////////////////////////

			caculate_ee9(col9);

			////////////////for col10 calculations/////////////////////////

			caculate_ee10(col10);

			////////////////for col11 calculations/////////////////////////
			caculate_ee11(col11);

			////////////////for col12 calculations/////////////////////////
			caculate_ee12(col12);

			////////////////for col13 calculations/////////////////////////
			caculate_ee13(col13);

			////////////////for col14 calculations/////////////////////////
			caculate_ee14(col14);

			////////////////for col15 calculations/////////////////////////
			caculate_ee15(col15);

			////////////////for col16 calculations/////////////////////////
			caculate_ee16(col16);

			////////////////for col17 calculations/////////////////////////
			caculate_ee17(col17);

			////////////////for col18 calculations/////////////////////////
			caculate_ee18(col18);

			////////////////for col19 calculations/////////////////////////
			caculate_ee19(col19);

			////////////////for col20 calculations/////////////////////////
			caculate_ee20(col20);

			////////////////for col21 calculations/////////////////////////
			caculate_ee21(col21);

			////////////////for col22 calculations/////////////////////////
			caculate_ee22(col22);

			////////////////for col23 calculations/////////////////////////
			caculate_ee23(col23);

			////////////////for col24 calculations/////////////////////////
			caculate_ee24(col24);

			///////////////////////////////////////////////////////////////////////////////////////////////////////////

			///////////for RR calculation//////////////////////////////////////////////////////////////////////////////

			upper_triagular_matrix(col1,col2,col3,col4,col5,col6,col7,col8,col9,col10,col11,col12,col13,col14,col15,col16,col17,col18,col19,col20,
								   col21,col22,col23,col24);
			////////////////////////////////////Filling r1////////////////////////////////////////////////////////////
			for(int i=0;i<row;i++)
			{
				R[0][i]=RR[i];
			}
			////////////////////////////////////Filling r2////////////////////////////////////////////////////////////
			 int a2=24;
			for(int i=0;i<row;i++)
			{
				if(i<1)
				{
					R[1][i]=0;
				}
				else
				{
					R[1][i]=RR[a2];
				}
			   a2++;
			}
			////////////////////////////////////Filling r3////////////////////////////////////////////////////////////
			int a3=48;
			for(int i=0;i<row;i++)
			{
				if(i<2)
				{
					R[2][i]=0;
				}
				else
				{
					R[2][i]=RR[a3];
				}
			   a3++;
			}
			////////////////////////////////////Filling r4////////////////////////////////////////////////////////////
			int a4=72;
			for(int i=0;i<row;i++)
			{
				if(i<3)
				{
					R[3][i]=0;
				}
				else
				{
					R[3][i]=RR[a4];
				}
			   a4++;
			}
			////////////////////////////////////Filling r5////////////////////////////////////////////////////////////
			int a5=96;
			for(int i=0;i<row;i++)
			{
				if(i<4)
				{
					R[4][i]=0;
				}
				else
				{
					R[4][i]=RR[a5];
				}
			   a5++;
			}
			////////////////////////////////////Filling r6////////////////////////////////////////////////////////////
			int a6=120;
			for(int i=0;i<row;i++)
			{
				if(i<5)
				{
					R[5][i]=0;
				}
				else
				{
					R[5][i]=RR[a6];
				}
			   a6++;
			}
			////////////////////////////////////Filling r7////////////////////////////////////////////////////////////
			int a7=144;
			for(int i=0;i<row;i++)
			{
				if(i<6)
				{
					R[6][i]=0;
				}
				else
				{
					R[6][i]=RR[a7];
				}
			   a7++;
			}
			////////////////////////////////////Filling r8////////////////////////////////////////////////////////////
			int a8=168;
			for(int i=0;i<row;i++)
			{
				if(i<7)
				{
					R[7][i]=0;
				}
				else
				{
					R[7][i]=RR[a8];
				}
			   a8++;
			}
			////////////////////////////////////Filling r9////////////////////////////////////////////////////////////
			int a9=192;
			for(int i=0;i<row;i++)
			{
				if(i<8)
				{
					R[8][i]=0;
				}
				else
				{
					R[8][i]=RR[a9];
				}
			   a9++;
			}
			////////////////////////////////////Filling r10////////////////////////////////////////////////////////////
			int a10=216;
			for(int i=0;i<row;i++)
			{
				if(i<9)
				{
					R[9][i]=0;
				}
				else
				{
					R[9][i]=RR[a10];
				}
			   a10++;
			}
			////////////////////////////////////Filling r11////////////////////////////////////////////////////////////
			 int a11=240;
			for(int i=0;i<row;i++)
			{
				if(i<10)
				{
					R[10][i]=0;
				}
				else
				{
					R[10][i]=RR[a11];
				}
			   a11++;
			}
			////////////////////////////////////Filling r12////////////////////////////////////////////////////////////
			int a12=264;
			for(int i=0;i<row;i++)
			{
				if(i<11)
				{
					R[11][i]=0;
				}
				else
				{
					R[11][i]=RR[a12];
				}
			   a12++;
			}
			////////////////////////////////////Filling r13////////////////////////////////////////////////////////////
			int a13=288;
			for(int i=0;i<row;i++)
			{
				if(i<12)
				{
					R[12][i]=0;
				}
				else
				{
					R[12][i]=RR[a13];
				}
			   a13++;
			}
			////////////////////////////////////Filling r14////////////////////////////////////////////////////////////
			int a14=312;
			for(int i=0;i<row;i++)
			{
				if(i<13)
				{
					R[13][i]=0;
				}
				else
				{
					R[13][i]=RR[a14];
				}
			   a14++;
			}
			////////////////////////////////////Filling r15////////////////////////////////////////////////////////////
			int a15=336;
			for(int i=0;i<row;i++)
			{
				if(i<14)
				{
					R[14][i]=0;
				}
				else
				{
					R[14][i]=RR[a15];
				}
			   a15++;
			}
			////////////////////////////////////Filling r16////////////////////////////////////////////////////////////
			int a16=360;
			for(int i=0;i<row;i++)
			{
				if(i<15)
				{
					R[15][i]=0;
				}
				else
				{
					R[15][i]=RR[a16];
				}
			   a16++;
			}
			////////////////////////////////////Filling r17////////////////////////////////////////////////////////////
			int a17=384;
			for(int i=0;i<row;i++)
			{
				if(i<16)
				{
					R[16][i]=0;
				}
				else
				{
					R[16][i]=RR[a17];
				}
			   a17++;
			}
			////////////////////////////////////Filling r18////////////////////////////////////////////////////////////
			int a18=408;
			for(int i=0;i<row;i++)
			{
				if(i<17)
				{
					R[17][i]=0;
				}
				else
				{
					R[17][i]=RR[a18];
				}
			   a18++;
			}
			////////////////////////////////////Filling r19////////////////////////////////////////////////////////////
			int a19=432;
			for(int i=0;i<row;i++)
			{
				if(i<18)
				{
					R[18][i]=0;
				}
				else
				{
					R[18][i]=RR[a19];
				}
			   a19++;
			}
			////////////////////////////////////Filling r20////////////////////////////////////////////////////////////
			int a20=456;
			for(int i=0;i<row;i++)
			{
				if(i<19)
				{
					R[19][i]=0;
				}
				else
				{
					R[19][i]=RR[a20];
				}
			   a20++;
			}
			////////////////////////////////////Filling r21////////////////////////////////////////////////////////////
			int a21=480;
			for(int i=0;i<row;i++)
			{
				if(i<20)
				{
					R[20][i]=0;
				}
				else
				{
					R[20][i]=RR[a21];
				}
			   a21++;
			}
			////////////////////////////////////Filling r22////////////////////////////////////////////////////////////
			int a22=504;
			for(int i=0;i<row;i++)
			{
				if(i<21)
				{
					R[21][i]=0;
				}
				else
				{
					R[21][i]=RR[a22];
				}
			   a22++;
			}
			////////////////////////////////////Filling r23////////////////////////////////////////////////////////////
			int a23=528;
			for(int i=0;i<row;i++)
			{
				if(i<22)
				{
					R[22][i]=0;
				}
				else
				{
					R[22][i]=RR[a23];
				}
			   a23++;
			}
			////////////////////////////////////Filling r24////////////////////////////////////////////////////////////
			int a24=552;
			for(int i=0;i<row;i++)
			{
				if(i<23)
				{
					R[23][i]=0;
				}
				else
				{
					R[23][i]=RR[a24];
				}
			   a24++;
			}
			//////////////////////////////////////////end of Filling///////////////////////////////////////////////////////////////////

			/////////////////////////////////filling Q/////////////////

			for(int i=0;i < row;i++)
			{
				for(int j=0;j < 1;j++)
				{
					Q[i][0] =q_e1[i];
					Q[i][1] =q_e2[i];
					Q[i][2] =q_e3[i];
					Q[i][3] =q_e4[i];
					Q[i][4] =q_e5[i];
					Q[i][5] =q_e6[i];
					Q[i][6] =q_e7[i];
					Q[i][7] =q_e8[i];
					Q[i][8] =q_e9[i];
					Q[i][9] =q_e10[i];
					Q[i][10]=q_e11[i];
					Q[i][11]=q_e12[i];
					Q[i][12]=q_e13[i];
					Q[i][13]=q_e14[i];
					Q[i][14]=q_e15[i];
					Q[i][15]=q_e16[i];
					Q[i][16]=q_e17[i];
					Q[i][17]=q_e18[i];
					Q[i][18]=q_e19[i];
					Q[i][19]=q_e20[i];
					Q[i][20]=q_e21[i];
					Q[i][21]=q_e22[i];
					Q[i][22]=q_e23[i];
					Q[i][23]=q_e24[i];
				}
			}
			for(int i = 0; i <row; i++)
			{
					for(int j=0; j<row;j++)
					{
						eigen_vector[i][j]=Q[i][j];
					}
			}
			  ///////////////////////////////////////////final step/////////////////////////////////////////////
	} while(iterations < 7);
	 matrix_t eig_values[row][column];
	 matrix_t constant = 24;
	for(int i = 0; i <row; i++)
	{
			for(int j=0; j<row;j++)
			{
				eig_values[i][j]=((input[i][j] *constant)/eigen_vector[i][j]);
			}
	}
	//eig_values=A(1,:)*eig_vectors./eig_vectors(1,:);
	printf("iterations : %d \n ",iterations);
	printf("\n Eigen Values=\n");
	for(int i = 0; i <row; i++)
	{
			for(int j=0; j<column;j++)
			{
				cout<<eig_values[i][j];
				//printf("%1.0f  ",QR[i][j]);
			}
			printf("\n");
	}

}

