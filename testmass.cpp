#include <iostream>
#include <cstdlib> //библиотека для рандома
#include <ctime>   //тоже для рандома
#include <cmath>	
#include <fstream>
using namespace std;

int sum_sun(int arr_ma[][4], int row3){
int sum_alll = 0;
	for (int i = 0; i < row3; ++i)
	{
		for (int j = 0; j < row3; ++j)
		{
			sum_alll += arr_ma[i][j];
		}
	}
	return sum_alll;

}
int sum_matrix (int arr_mat[][4], int row2){
	int sum_all = 0;
	for (int i=0; i<row2; i++){
		for (int j=0; j<row2; j++){
			if (j==row2-1 && i!=row2-1){
				sum_all+=arr_mat[i][j]*arr_mat[i][0]+arr_mat[i][j]*arr_mat[i+1][j];
				
			}else if (i==row2-1 && j!=row2-1){
				sum_all+=arr_mat[i][j]*arr_mat[0][j]+arr_mat[i][j]*arr_mat[i][j+1];
				
			}else if (i==row2-1 && j==row2-1){
				sum_all+=arr_mat[i][j]*arr_mat[i][0]+arr_mat[i][j]*arr_mat[0][j];
				
			}else {
				sum_all+=arr_mat[i][j]*arr_mat[i][j+1]+arr_mat[i][j]*arr_mat[i+1][j];
				
			}
		}	
	}
	return sum_all;
}

void print(int arr[][4], int row){
	for (int i=0; i<row; i++){
		for (int j=0; j<row; j++) {
			cout<<arr[i][j]<<'\t';
		}
		cout<<'\n';
	}
	cout<<'\n';
}


int main(){
	ofstream fout;
	fout.open("matrix_summ.txt ");
	fout<<"sam1"<<' '<<"sum2"<<" "<<"matrix"<<endl;
	bool flag=true;
	const int a = 4;
	int matrix[a][a] {0};
	int matrix2[a][a] {0};
	 
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < a; ++j)
		{
			matrix[i][j]=1;
			matrix2[i][j]=1;
		}
	}
	int x=0;
	int y=0;
	int n=0;
	fout<<sum_matrix(matrix2,a)<<'\t'<<sum_sun(matrix2,a)<<endl;
	//cout<<sum_sun(matrix2,a)<<endl;
	while(flag){
		
		for (int i = 0; i <a ; ++i)
		{
			for (int j = 0; j < a; ++j)
			{if (matrix2[i][j]!=-1){ 
				n++;
				matrix2[i][j]= -1;
				for (int i1 = 0; i1 < a; i1++){
    				for (int j1 = 0; j1 < a; j1++){
    					fout<<matrix2[i1][j1]; 
						}
						fout<<endl;
				}
				fout<<endl;
				fout<<sum_matrix(matrix2,a)<<'\t'<<sum_sun(matrix2,a)<<endl;
				for (int i1 = 0; i1 < a; i1++){
    				for (int j1 = 0; j1 < a; j1++){
    					matrix2[i1][j1] = matrix[i1][j1];
						}
				}
				
			}
		}
					
		}
		if (x==a && y==a){
			//cout<<3;
			flag=false;
			cout<<n;
		}else if (x==a+1 && y!=a){

		
		x=0;
		y++;
		matrix[y][x]= -1;
		for (int i1 = 0; i1 < a; i1++){
    				for (int j1 = 0; j1 < a; j1++){
    					matrix2[i1][j1] = matrix[i1][j1];
						}
				}
		//cout<<y<<x;
	}else{
		matrix[y][x]= -1;
		//cout<<y<<x;
		for (int i1 = 0; i1 < a; i1++){
    				for (int j1 = 0; j1 < a; j1++){
    					matrix2[i1][j1] = matrix[i1][j1];
						}
				}
		
		x++;
	}


	}
	
	
}








