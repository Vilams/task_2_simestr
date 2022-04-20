#include <iostream>
#include <cstdlib> //библиотека для рандома
#include <ctime>   //тоже для рандома
#include <cmath>	
#include <fstream>
using namespace std;




int main(){
	float sammm,E1,I1,E2,I2;
	E1=20;
	I1=0.3129;
	E2=30;
	I2=0.481;
	float I[5] {0.3129,0.481,0.0075,0.3204,0.1606};
	float R[5] {65,45,45,25,52};
	cout<<E1<<" "<<I1<<endl;
	cout<<E2<<' '<<I2<<endl;
	for (int i = 0; i < 5; ++i)
	{
		cout<<"I"<<i+1<<"="<<I[i]<<" "<<"R"<<i+1<<"="<<R[i]<<endl;
	}
	for (int i = 0; i < 5; ++i)
	{
		sammm+=I[i]*I[i]*R[i];
	}
	cout<<(E1*I1+E2*I2)<<'='<<sammm;
}








