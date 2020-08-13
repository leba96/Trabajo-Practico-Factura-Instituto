#include <stdio.h>
#include <stdlib.h>

int validar();
int main()
{
    int cliente, factura, facturas=0, fact_ant=-1, cantidad, codigo, promedio, total=0, articulomv=0;
    int art1=0, art2=0, art3=0, art4=0, art5=0, art6=0, art7=0, art8=0, art9=0, art10=0;
    do
    {
        cliente=validar(0,50,"\nIng cliente: \t");
        if(cliente!=0)
        {
            factura=validar(fact_ant+1,10000,"\nIngrese nro factura: "), facturas++;
            fact_ant=factura;
            cantidad=validar(1,100,"\nCantidad solicitada: ");
            codigo=validar(1,10,"\nCodigo articulo: ");
                if (codigo==1)
                {
                    art1=art1+cantidad;
                }
                else if (codigo==2)
                {
                    art2=art2+cantidad;
                }
                else if (codigo==3)
                {
                    art3=art3+cantidad;
                }
                else if (codigo==4)
                {
                    art4=art4+cantidad;
                }
                else if (codigo==5)
                {
                    art5=art5+cantidad;
                }
                else if (codigo==6)
                {
                    art6=art6+cantidad;
                }
                else if (codigo==7)
                {
                    art7=art7+cantidad;
                }
                else if (codigo==8)
                {
                    art8=art8+cantidad;
                }
                else if (codigo==9)
                {
                    art9=art9+cantidad;
                }
                else if (codigo==10)
                {
                    art10=art10+cantidad;
                }
                if(articulomv<cantidad)
                {
                    articulomv=cantidad;
                    articulomv=codigo;
                }
                total=art1+art2+art3+art4+art5+art6+art7+art8+art9+art10;
                printf("\nCliente: %d, Factura: %d, Cantidad: %d, Codigo: %d", cliente, factura, cantidad, codigo);
            }
        }
    while(cliente!=0 && facturas<3);
    if(facturas!=0)
    {
        promedio=total/facturas;
        printf("\nEl promedio es: %d", promedio);
    }
    printf("\nLa cantidad vendido por articulo 1 es: %d", art1);
    printf("\nLa cantidad vendido por articulo 2 es: %d", art2);
    printf("\nLa cantidad vendido por articulo 3 es: %d", art3);
    printf("\nLa cantidad vendido por articulo 4 es: %d", art4);
    printf("\nLa cantidad vendido por articulo 5 es: %d", art5);
    printf("\nLa cantidad vendido por articulo 6 es: %d", art6);
    printf("\nLa cantidad vendido por articulo 7 es: %d", art7);
    printf("\nLa cantidad vendido por articulo 8 es: %d", art8);
    printf("\nLa cantidad vendido por articulo 9 es: %d", art9);
    printf("\nLa cantidad vendido por articulo 10 es: %d", art10);
    printf("\nEl total es: %d", total);
    printf("\nEl articulo con mayor venta individual es: %d", articulomv);
    return 0;
}

int validar(int lim_inf, int lim_sup, char texto[50])
{
    int numero;
    do
    {
        printf("\n%s",texto);
        scanf("%d", &numero);
    }
    while(numero<lim_inf || numero>lim_sup);
    return numero;
}
