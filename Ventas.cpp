//#include<iostream>
using namespace std;

int main(){
	double compra;
	double total=0;
	double s1=0, s2=0, s3=0;
	double c1=0, c2=0, c3=0;
	
	do{
		cout<<"Ingrese el valor de la compra: ";
		cin>>compra;
		total=total+compra;
		if(compra<500){
			s1=s1+compra;
			c1++;
		}else if(compra>500 & compra<=1000){
			s2=s2+compra;
			c2++;
		}else{
			s3=s3+compra;
			c3++;
		}
		
	}while(compra!=0);
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Cierre de caja"<<endl;
	cout<<endl;
	cout<<"La cantidad de ventas menores a 500 es: "<<c1-1<<endl;
	cout<<"El valor total de ventas menores a 500 es: "<<s1<<endl;
	cout<<"La cantidad de ventas mayores a 500 y menores a 1000 es: "<<c2<<endl;
	cout<<"El valor total de ventas mayores a 500 y menores a 1000 es: "<<s2<<endl;
	cout<<"La cantidad de ventas mayores a 1000 es: "<<c3<<endl;
	cout<<"El valor total de ventas mayores a 1000 es: "<<s3<<endl;
	cout<<"El valor total de ventas es: "<<total<<endl;
	return 0;
}