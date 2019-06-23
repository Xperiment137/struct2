#include <stdio.h>
#include <stdlib.h>

 struct CANCION{
char nombre[25];
char autor[25];
char genero[20];
int votosp;
int  votosn;
int aceptacion;
};





void sacarcanciones(struct CANCION list[20]);




int main()
{
    FILE *f;
    int i=0;

    struct CANCION list[20];
	int elegir=0;
	 do{
scanf("%d",&elegir);
switch(elegir)
{
    case 1:
        if(!(f=fopen("registro.txt","r")))
{
    printf("Error");
     return(1);
}
       for(i=0;i<5;i++)
{
fscanf(f,"%s",list[i].nombre);
fscanf(f,"%s%s%d%d",list[i].autor,list[i].genero,&list[i].votosp,&list[i].votosn);
}
        fclose(f);
    break;
    case 2:sacarcanciones(list);
    break;
    default:printf("Abutarda......SALIENDOOOOOOOOOOOOOO\n");
}
}
while(elegir!=0);
system("pause");
    return 0;

}


void sacarcanciones(struct CANCION list[])
{
    int i=0;
    for(i=0;i<3;i++)
    {
    printf("%s\n%s\n%s\n%d\n%d\n",list[i].nombre,list[i].autor,list[i].genero,list[i].votosp,list[i].votosn);
    }
}

