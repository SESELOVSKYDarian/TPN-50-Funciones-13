#include<iostream>
using namespace std;
float ConvertirPiesaPulgadas(float pies);
float ConvertirPiesaYardas(float pies);
float ConvertirPiesaCm(float pies);
float ConvertirPiesaMetros(float pies);
int main ()	
{
	int n;
	cout<<"ingrese cuantos pies: ";
	cin>>n;
	cout<<"En pulgadas: "<<ConvertirPiesaPulgadas (n)<<endl;
    cout<<"En yardas: "<<ConvertirPiesaYardas (n)<<endl;
	cout<<"En cm: "<<ConvertirPiesaCm (n)<<endl;
    cout<<"En metros: "<<ConvertirPiesaMetros (n)<<endl;
	return 0;
}
float ConvertirPiesaPulgadas(float pies)
{
    float pulgadas;
    pulgadas = pies*12;
	return pulgadas;
}
float ConvertirPiesaYardas(float pies)
{
    float yardas;
    yardas = pies/3;
	return yardas;
}
float ConvertirPiesaCm(float pies)
{
    float pulgadas, cm;
    pulgadas = pies*12;
    cm = pulgadas*2.54;
	return cm;
}
float ConvertirPiesaMetros(float pies)
{
    float pulgadas, cm, m;
    pulgadas = pies*12;
    cm = pulgadas*2.54;
    m = cm/100;
	return m;
}