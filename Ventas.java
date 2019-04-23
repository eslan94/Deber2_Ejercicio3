import java.util.Scanner;

class Main{
    public static void main(String[]args) {
        double compra;
        double total=0;
        double s1=0, s2=0, s3=0;
        double c1=0, c2=0, c3=0;
        do{ 
            Scanner s= new Scanner(System.in);
            System.out.println("Ingrese el valor de la compra: ");
            compra=s.nextDouble();
            total=total+compra;
            if(compra<=500){
                s1=s1+compra;
                c1=c1+1;
            }else if(compra>500 & compra<1000){
                s2=s2+compra;
                c2=c2+1;
            }else{
                s3=s3+costo;
                c3=c3+1;
            }
        }while(compra!=0);
        System.out.println("Cierre de caja")
        System.out.println("La cantidad de ventas menores a 500 es: " + (c1-1));
        System.out.println("El valor total de ventas menores a 500 es: " + s1);
        System.out.println("La cantidad de ventas mayores a 500 y menores a 1000 es: " + c2);
        System.out.println("El valor total de ventas mayores a 500 y menores a 1000 es: " + s2);
        System.out.println("La cantidad de ventas mayores a 1000 es: " + c3);
        System.out.println("El valor total de ventas mayores a 1000 es: " + s3);
        System.out.println("El valor total de ventas es: " + total);

    }
}