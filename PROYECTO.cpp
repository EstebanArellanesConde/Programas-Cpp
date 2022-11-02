#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

struct jugadores{
	char nombre[30],contra[30];
	int win=0,lose=0;
};
char Lab1[10][10],Lab2[20][20],Lab3[30][30];
int op;

main(){
	
	int elemento,x=0;
	int i,j,f,c;
	int opn1,opn2,opn3;
	//Crear Usuario al iniciar el juego.//
	printf("Bienvenido a el proyecto final del equipo...\n");
	printf("(Redoble de tambores)\n");
	Sleep (2000);
	printf("\t***INFINITE***\n");
	Sleep (3000);
	system("cls");
	FILE *ap;
	int b=0;
	char user[100],user1[100];
	char contra [30];
	ap=fopen("Usuarios.txt","r");
	printf ("Ingresa tu nombre de usuario:\n");
	fflush(stdin);
	gets(user);
	Sleep (2000);
	while (feof(ap)==NULL){
		fscanf(ap,"%s",user1);
		if (strcmp (user,user1) == 0){
			printf("El usuario ya existe\n");
			b=1;
			Sleep (2000);
			printf ("Ingresa tu nombre de usuario:\n");
			fflush(stdin);
			gets(user);
			printf("\n");
			b=0;
			Sleep (2000);
		}
	}
	fclose(ap);
	if(b==0){
		printf ("Usuario disponible.\n");
		Sleep(1000);
		printf ("Tu contraseña debe contener algun caracter especial y algun numero.\n");
		Sleep (1500);
		printf ("Ingrese su contraseña:\n");
		fflush (stdin);
		gets (contra);
		printf("\n");
		Sleep (2000);
		ap==fopen("Usuarios.txt","a");
		fprintf(ap, "%s ", user);
		fprintf(ap, "%s \n", contra);
	}
	fclose(ap);
	printf("Se ha creado la cuenta con exito :)\n");
	Sleep (2000);
	system("cls");
	
	//Menu del juego//
	jugadores J;
	do{
	system("cls");
	printf ("\t***MENU***\n");
	printf ("---------------------------\n");
	Sleep (1500);
	printf("Que deseas hacer?\n [1]---->Jugar\n [2]---->Crear Usuario\n [3]---->Salir\n");
	Sleep (1500);
	scanf("%d",&op);
	printf("\n");
	system("cls");
	
	switch(op){
		case 1:
			do{
				system("cls");
			for (int seg=10;seg>=0;seg--){
				printf ("***Nivel [1]***\n");
				printf("Cargando en...[%d]\n",seg);
				Sleep(1000);
				system("cls");
			}
			printf ("***Nivel [1]***\n");
			for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			Lab1[i][j]='X';	
		}
	}
	Lab1[0][1]=Lab1[1][1]=Lab1[0][1]=Lab1[2][1]=Lab1[3][1]=Lab1[4][1]=Lab1[4][2]=Lab1[5][2]=Lab1[6][2]=Lab1[6][1]=Lab1[7][1]=Lab1[8][1]=Lab1[8][2]=Lab1[8][3]=Lab1[8][4]=Lab1[7][4]=Lab1[6][4]=Lab1[6][5]=Lab1[6][6]=Lab1[5][6]=Lab1[5][4]=Lab1[5][5]=Lab1[7][6]=Lab1[8][6]=Lab1[8][7]=Lab1[8][8]=Lab1[8][8]=Lab1[7][8]=Lab1[6][8]=Lab1[4][4]=Lab1[3][4]=Lab1[3][5]=Lab1[3][6]=Lab1[3][7]=Lab1[2][7]=Lab1[1][7]=Lab1[1][8]=Lab1[0][8]=Lab1[2][4]=Lab1[1][4]=Lab1[1][3]=' ';
	for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf(" %c",Lab1[i][j]);	
		}
		printf("\n");
	}
	i=0;
	j=1;
	char opcion;
	while (i!=0  ||  j!=8 ){
		printf("\n");
		fflush(stdin);
		opcion=getch();
		switch (opcion){
			case 72:
				i--;//Izquierda//
				if (Lab1[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					i++;
					Lab1[i][j]='X';
					system("cls");
					printf ("***Nivel [1]***\n");
					for (c=0;c<10;c++){
						for(f=0;f<10;f++){
							printf("\x1b[31m %c \x1b[0m",Lab1[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab1[i][j]==' ' || Lab1[i][j]=='0' ){
					Lab1[i][j]='*';
					Lab1[i+1][j]='0';
					system("cls");
					printf ("***Nivel [1]***\n");
					for (c=0;c<10;c++){
						for(f=0;f<10;f++){
							printf(" %c",Lab1[c][f]);	
						}
						printf("\n");
					}
					break;
				}
			case 80:
				i++;//Derecha//
				if (Lab1[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					i--;
					Lab1[i][j]='X';
					system("cls");
					printf ("***Nivel [1]***\n");
					for (c=0;c<10;c++){
						for(f=0;f<10;f++){
							printf("\x1b[31m %c \x1b[0m",Lab1[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab1[i][j]==' ' || Lab1[i][j]=='0' ){
					Lab1[i][j]='*';
					Lab1[i-1][j]='0';
					system("cls");
					printf ("***Nivel [1]***\n");
					for (c=0;c<10;c++){
						for(f=0;f<10;f++){
							printf(" %c",Lab1[c][f]);	
						}
						printf("\n");
					}
					break;
				}
			case 75:
				j--;//Arriba//
				if (Lab1[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					j++;
					Lab1[i][j]='X';
					system("cls");
					printf ("***Nivel [1]***\n");
					for (c=0;c<10;c++){
						for(f=0;f<10;f++){
							printf("\x1b[31m %c \x1b[0m",Lab1[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab1[i][j]==' ' || Lab1[i][j]=='0' ){
					Lab1[i][j]='*';
					Lab1[i][j+1]='0';
					system("cls");
					printf ("***Nivel 1[1]***\n");
					for (c=0;c<10;c++){
						for(f=0;f<10;f++){
							printf(" %c",Lab1[c][f]);	
						}
						printf("\n");
					}
					break;
				}
			case 77:
				j++;//Abajo//
				if (Lab1[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					j--;
					Lab1[i][j]='X';
					system("cls");
					printf ("***Nivel [1]***\n");
					for (c=0;c<10;c++){
						for(f=0;f<10;f++){
							printf("\x1b[31m %c \x1b[0m",Lab1[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab1[i][j]==' ' || Lab1[i][j]=='0' ){
					Lab1[i][j]='*';
					Lab1[i][j-1]='0';
					system("cls");
					printf ("***Nivel [1]***\n");
					for ( c=0;c<10;c++){
						for( f=0;f<10;f++){
							printf(" %c",Lab1[c][f]);	
						}
						printf("\n");
					}
					break;
				}
		}
		if (i==0 && j==8){
			printf("\nFacil, no?!!\n");
		}
		}
		printf("Quieres jugar el nivel otra vez?\n1-Si 2-No\n");
		scanf("%d",&opn1);
		if (opn1==2){
			FILE*ap1;
			ap1=fopen("Estadisticas.txt","a");
			printf ("Ingresa tu nombre de usuario:\n");
			fflush(stdin);
			gets(user);
			if(ap1==NULL){
				printf("No te has registrado :(\n");
			}
			else {
				J.win=J.win+1;
				fscanf(ap1,"%s %d %d",user,&J.win,&J.lose);
				fprintf(ap1, "%s ", user);
				fprintf(ap1, "%d \n", J.win);
			fclose(ap1);
		}
		}	
		if (opn3==2){
		    FILE*ap1;
		    ap1=fopen("Estadisticas.txt","r");
			printf("Bienvenido %s! Tus estadisticas son:\n",user);
			printf("Has ganado %d juegos y has perdido %d veces\n",J.win,J.lose);
			fclose(ap1);
		}
		}while(opn1==1);
		
		//Segundo Laberinto//
		do{
				system("cls");
			for (int seg=10;seg>=0;seg--){
				printf ("***Nivel [2]***\n");
				printf("Cargando en...[%d]",seg);
				Sleep(1000);
				system("cls");
			}
			printf ("***Nivel [2]***\n");
			for (i=0;i<20;i++){
		for(j=0;j<20;j++){
			Lab2[i][j]='X';	
		}
	}
	Lab2[18][0]=Lab2[18][1]=Lab2[18][2]=Lab2[18][3]=Lab2[18][4]=Lab2[17][4]=Lab2[16][4]=Lab2[16][3]=Lab2[16][2]=Lab2[15][2]=Lab2[14][2]=Lab2[13][2]=Lab2[12][2]=Lab2[11][2]=Lab2[11][3]=Lab2[11][4]=Lab2[11][5]=Lab2[11][6]=Lab2[13][3]=Lab2[13][4]=Lab2[13][5]=Lab2[13][6]=Lab2[14][6]=Lab2[15][6]=Lab2[16][6]=Lab2[17][6]=Lab2[17][7]=Lab2[17][8]=Lab2[17][9]=Lab2[17][10]=Lab2[16][10]=Lab2[15][10]=Lab2[14][10]=Lab2[13][10]=Lab2[12][10]=Lab2[12][9]=Lab2[12][8]=Lab2[11][8]=Lab2[10][8]=Lab2[9][8]=Lab2[9][7]=Lab2[9][6]=Lab2[9][5]=Lab2[9][4]=Lab2[9][3]=Lab2[9][2]=Lab2[9][1]=Lab2[8][1]=Lab2[7][1]=Lab2[7][2]=Lab2[7][3]=Lab2[7][4]=Lab2[7][5]=Lab2[7][6]=Lab2[7][7]=Lab2[7][8]=Lab2[6][8]=Lab2[5][8]=Lab2[4][8]=Lab2[4][7]=Lab2[4][6]=Lab2[4][5]=Lab2[4][4]=Lab2[4][3]=Lab2[4][2]=Lab2[3][2]=Lab2[2][2]=Lab2[2][3]=Lab2[2][4]=Lab2[2][5]=Lab2[2][6]=Lab2[2][7]=Lab2[2][8]=Lab2[2][9]=Lab2[2][10]=Lab2[3][10]=Lab2[4][10]=Lab2[5][10]=Lab2[5][11]=Lab2[5][12]=Lab2[4][12]=Lab2[3][12]=Lab2[2][12]=Lab2[1][12]=Lab2[1][13]=Lab2[1][14]=Lab2[2][14]=Lab2[3][14]=Lab2[4][14]=Lab2[5][14]=Lab2[6][14]=Lab2[7][14]=Lab2[7][13]=Lab2[7][12]=Lab2[7][11]=Lab2[7][10]=Lab2[8][10]=Lab2[9][10]=Lab2[9][11]=Lab2[9][12]=Lab2[9][13]=Lab2[9][14]=Lab2[9][15]=Lab2[9][16]=Lab2[8][16]=Lab2[7][16]=Lab2[6][16]=Lab2[5][16]=Lab2[4][16]=Lab2[4][16]=Lab2[3][16]=Lab2[2][16]=Lab2[10][13]=Lab2[11][13]=Lab2[12][13]=Lab2[13][13]=Lab2[13][12]=Lab2[14][12]=Lab2[15][12]=Lab2[15][13]=Lab2[16][13]=Lab2[17][13]=Lab2[17][14]=Lab2[17][15]=Lab2[17][16]=Lab2[17][17]=Lab2[16][17]=Lab2[15][17]=Lab2[14][17]=Lab2[13][17]=Lab2[12][17]=Lab2[11][17]=Lab2[10][17]=Lab2[10][18]=Lab2[9][18]=Lab2[8][18]=Lab2[7][18]=Lab2[6][18]=Lab2[5][18]=Lab2[4][18]=Lab2[3][18]=Lab2[2][18]=Lab2[1][18]=Lab2[0][18]=' ';
	for (i=0;i<20;i++){
		for(j=0;j<20;j++){
			printf(" %c",Lab2[i][j]);	
		}
		printf("\n");
	}
	i=18;
	j=0;
	char opcion;
	while (i!=0  ||  j!=18 ){
		printf("\n");
		fflush(stdin);
		opcion=getch();
		switch (opcion){
			case 72:
				i--;//Izquierda//
				if (Lab2[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					i++;
					Lab2[i][j]='X';
					system("cls");
					printf ("***Nivel [2]***\n");
					for (c=0;c<20;c++){
						for(f=0;f<20;f++){
							printf("\x1b[31m %c \x1b[0m",Lab2[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab2[i][j]==' ' || Lab2[i][j]=='0' ){
					Lab2[i][j]='*';
					Lab2[i+1][j]='0';
					system("cls");
					printf ("***Nivel [2]***\n");
					for (c=0;c<20;c++){
						for(f=0;f<20;f++){
							printf(" %c",Lab2[c][f]);	
						}
						printf("\n");
					}
					break;
				}
			case 80:
				i++;//Derecha//
				if (Lab2[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					i--;
					Lab2[i][j]='X';
					system("cls");
					printf ("***Nivel [2]***\n");
					for (c=0;c<20;c++){
						for(f=0;f<20;f++){
							printf("\x1b[31m %c \x1b[0m",Lab2[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab2[i][j]==' ' || Lab2[i][j]=='0' ){
					Lab2[i][j]='*';
					Lab2[i-1][j]='0';
					system("cls");
					printf ("***Nivel [2]***\n");
					for (c=0;c<20;c++){
						for(f=0;f<20;f++){
							printf(" %c",Lab2[c][f]);	
						}
						printf("\n");
					}
					break;
				}
			case 75:
				j--;//Arriba//
				if (Lab2[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					j++;
					Lab2[i][j]='X';
					system("cls");
					printf ("***Nivel [2]***\n");
					for (c=0;c<20;c++){
						for(f=0;f<20;f++){
							printf("\x1b[31m %c \x1b[0m",Lab2[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab2[i][j]==' ' || Lab2[i][j]=='0' ){
					Lab2[i][j]='*';
					Lab2[i][j+1]='0';
					system("cls");
					printf ("***Nivel [2]***\n");
					for (c=0;c<20;c++){
						for(f=0;f<20;f++){
							printf(" %c",Lab2[c][f]);	
						}
						printf("\n");
					}
					break;
				}
			case 77:
				j++;//Abajo//
				if (Lab2[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					j--;
					Lab2[i][j]='X';
					system("cls");
					printf ("***Nivel [2]***\n");
					for (c=0;c<20;c++){
						for(f=0;f<20;f++){
							printf("\x1b[31m %c \x1b[0m",Lab2[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab2[i][j]==' ' || Lab2[i][j]=='0' ){
					Lab2[i][j]='*';
					Lab2[i][j-1]='0';
					system("cls");
					printf ("***Nivel [2]***\n");
					for ( c=0;c<20;c++){
						for( f=0;f<20;f++){
							printf(" %c",Lab2[c][f]);	
						}
						printf("\n");
					}
					break;
				}
		}
		if (i==0 && j==18){
			printf("\n Vamos al ultimo nivel!\n");
		}
		}
		printf("Quieres jugar el nivel otra vez?\n1-Si 2-No\n");
		scanf("%d",&opn2);
		if (opn2==2){
			FILE*ap1;
			ap1=fopen("Estadisticas.txt","a");
			printf ("Ingresa tu nombre de usuario:\n");
			fflush(stdin);
			gets(user);
			if(ap1==NULL){
				printf("No te has registrado :(\n");
			}
			else {
				J.win=J.win+1;
				fscanf(ap1,"%s %d %d",user,&J.win,&J.lose);
				fprintf(ap1, "%s ", user);
				fprintf(ap1, "%d \n", J.win);
			fclose(ap1);
		}
		}
		if (opn3==2){
		    FILE*ap1;
		    ap1=fopen("Estadisticas.txt","r");
			printf("Bienvenido %s! Tus estadisticas son:\n",user);
			printf("Has ganado %d juegos y has perdido %d veces\n",J.win,J.lose);
			fclose(ap1);
		}
		}while(opn2==1);
		//Tercer nivel//
		
		do{
				system("cls");
			for (int seg=10;seg>=0;seg--){
				printf ("***Nivel [3]***\n");
				printf("Cargando en ...%d\n",seg);
				Sleep(1000);
				system("cls");
			}
			printf ("***Nivel [3]***\n");
			for (i=0;i<30;i++){
		for(j=0;j<30;j++){
			Lab3[i][j]='X';	
		}
	}
	Lab3[0][0]=Lab3[0][1]=Lab3[1][1]=Lab3[1][2]=Lab3[1][3]=Lab3[2][3]=Lab3[3][3]=Lab3[3][2]=Lab3[3][1]=Lab3[4][1]=Lab3[5][1]=Lab3[5][2]=Lab3[5][3]=Lab3[6][3]=Lab3[7][3]=Lab3[8][3]=Lab3[9][3]=Lab3[9][4]=Lab3[9][5]=Lab3[9][6]=Lab3[8][6]=Lab3[7][6]=Lab3[6][6]=Lab3[5][6]=Lab3[4][6]=Lab3[3][6]=Lab3[2][6]=Lab3[1][6]=Lab3[1][7]=Lab3[1][8]=Lab3[1][9]=Lab3[2][9]=Lab3[3][9]=Lab3[4][9]=Lab3[5][9]=Lab3[5][10]=Lab3[5][11]=Lab3[4][11]=Lab3[3][11]=Lab3[2][11]=Lab3[1][11]=Lab3[1][12]=Lab3[1][13]=Lab3[1][14]=Lab3[2][14]=Lab3[3][14]=Lab3[4][14]=Lab3[5][14]=Lab3[6][14]=Lab3[7][14]=Lab3[7][13]=Lab3[7][12]=Lab3[7][11]=Lab3[8][11]=Lab3[9][11]=Lab3[10][11]=Lab3[11][11]=Lab3[11][10]=Lab3[11][9]=Lab3[11][8]=Lab3[11][7]=Lab3[11][6]=Lab3[11][5]=Lab3[11][4]=Lab3[11][3]=Lab3[11][2]=Lab3[11][1]=Lab3[12][5]=Lab3[13][5]=Lab3[14][5]=Lab3[14][4]=Lab3[14][3]=Lab3[14][2]=Lab3[14][1]=Lab3[15][1]=Lab3[16][1]=Lab3[17][1]=Lab3[17][2]=Lab3[17][3]=Lab3[17][4]=Lab3[17][5]=Lab3[17][6]=Lab3[17][7]=Lab3[17][8]=Lab3[16][8]=Lab3[15][8]=Lab3[14][8]=Lab3[14][9]=Lab3[14][10]=Lab3[14][11]=Lab3[13][11]=Lab3[13][12]=Lab3[13][13]=Lab3[12][13]=Lab3[11][13]=Lab3[10][13]=Lab3[9][13]=Lab3[9][14]=Lab3[9][15]=Lab3[17][9]=Lab3[17][10]=Lab3[17][11]=Lab3[17][12]=Lab3[17][13]=Lab3[17][14]=Lab3[17][15]= Lab3[16][15]=Lab3[15][15]=Lab3[14][15]=Lab3[13][15]=Lab3[12][15]=Lab3[11][15]=Lab3[11][16]=Lab3[11][17]=Lab3[10][17]=Lab3[9][17]=Lab3[8][17]=Lab3[7][17]=Lab3[6][17]=Lab3[5][17]=Lab3[4][17]=Lab3[3][17]=Lab3[2][17]=Lab3[2][18]=Lab3[2][19]=Lab3[2][20]=Lab3[2][21]=Lab3[2][22]=Lab3[2][23]=Lab3[2][24]=Lab3[1][24]=Lab3[1][25]=Lab3[1][26]=Lab3[1][27]=Lab3[1][28]=Lab3[2][28]=Lab3[3][28]=Lab3[4][28]=Lab3[5][28]=Lab3[6][28]=Lab3[7][28]=Lab3[8][28]=Lab3[9][28]=Lab3[10][28]=Lab3[11][28]=Lab3[12][28]=Lab3[13][28]=Lab3[14][28]=Lab3[15][28]=Lab3[16][28]=Lab3[17][28]=Lab3[18][28]=Lab3[19][28]=Lab3[19][27]=Lab3[19][26]=Lab3[19][25]=Lab3[19][24]=Lab3[19][23]=Lab3[19][22]=Lab3[20][22]=Lab3[21][22]=Lab3[22][22]=Lab3[23][22]=Lab3[24][22]=Lab3[25][22]=Lab3[25][23]=Lab3[25][24]=Lab3[25][25]=Lab3[25][26]=Lab3[25][27]=Lab3[25][28]=Lab3[24][26]=Lab3[23][26]=Lab3[22][26]=Lab3[22][25]=Lab3[22][24]=Lab3[11][18]=Lab3[11][19]=Lab3[11][20]=Lab3[11][21]=Lab3[11][22]=Lab3[10][20]=Lab3[9][20]=Lab3[8][20]=Lab3[7][20]=Lab3[6][20]=Lab3[5][20]=Lab3[4][20]=Lab3[4][21]=Lab3[4][22]=Lab3[4][23]=Lab3[4][24]=Lab3[4][25]=Lab3[4][26]=Lab3[5][26]=Lab3[6][26]=Lab3[7][26]=Lab3[8][26]=Lab3[9][26]=Lab3[10][26]=Lab3[11][26]=Lab3[12][26]=Lab3[13][26]=Lab3[14][26]=Lab3[15][26]=Lab3[16][26]=Lab3[17][26]=Lab3[17][25]=Lab3[17][24]=Lab3[17][23]=Lab3[17][22]=Lab3[17][21]=Lab3[17][20]=Lab3[18][20]=Lab3[19][20]=Lab3[20][20]=Lab3[21][20]=Lab3[22][20]=Lab3[23][20]=Lab3[24][20]=Lab3[25][20]=Lab3[26][20]=Lab3[10][22]=Lab3[9][22]=Lab3[8][22]=Lab3[7][22]=Lab3[6][22]=Lab3[6][23]=Lab3[6][24]=Lab3[7][24]=Lab3[8][24]=Lab3[9][24]=Lab3[10][24]=Lab3[11][24]=Lab3[12][24]=Lab3[13][24]=Lab3[13][23]=Lab3[13][22]=Lab3[13][21]=Lab3[13][22]=Lab3[13][21]=Lab3[13][20]=Lab3[13][19]=Lab3[13][18]=Lab3[13][17]=Lab3[14][17]=Lab3[15][17]=Lab3[16][17]=Lab3[17][17]=Lab3[18][17]=Lab3[19][17]=Lab3[20][17]=Lab3[20][16]=Lab3[20][15]=Lab3[20][14]=Lab3[20][13]=Lab3[20][12]=Lab3[20][11]=Lab3[20][10]=Lab3[20][9]=Lab3[20][8]=Lab3[20][7]=Lab3[20][6]=Lab3[20][5]=Lab3[20][4]=Lab3[20][3]=Lab3[20][2]=Lab3[21][2]=Lab3[22][2]=Lab3[23][2]=Lab3[24][2]=Lab3[25][2]=Lab3[26][2]=Lab3[26][1]=Lab3[27][1]=Lab3[28][1]=Lab3[28][2]=Lab3[28][3]=Lab3[28][4]=Lab3[28][5]=Lab3[28][6]=Lab3[28][7]=Lab3[28][8]=Lab3[27][8]=Lab3[26][8]=Lab3[26][9]=Lab3[26][10]=Lab3[26][11]=Lab3[26][12]=Lab3[26][13]=Lab3[26][14]=Lab3[26][15]=Lab3[25][15]=Lab3[24][15]=Lab3[23][15]=Lab3[22][15]=Lab3[22][16]=Lab3[22][17]=Lab3[23][17]=Lab3[24][17]=Lab3[25][17]=Lab3[26][17]=Lab3[27][17]=Lab3[28][17]=Lab3[28][18]=Lab3[28][19]=Lab3[28][20]=Lab3[28][21]=Lab3[28][22]=Lab3[28][23]=Lab3[28][24]=Lab3[28][25]=Lab3[28][26]=Lab3[28][27]=Lab3[28][28]=Lab3[29][28]=Lab3[24][3]=Lab3[24][4]=Lab3[24][5]=Lab3[24][6]=Lab3[24][7]=Lab3[24][8]=Lab3[24][9]=Lab3[24][10]=Lab3[24][11]=Lab3[24][12]=Lab3[24][13]=Lab3[23][13]=Lab3[22][13]=Lab3[22][12]=Lab3[22][11]=Lab3[22][10]=Lab3[22][9]=Lab3[22][8]=Lab3[22][7]=Lab3[22][6]=Lab3[22][5]=Lab3[22][4]=' ';
	for (i=0;i<30;i++){
		for(j=0;j<30;j++){
			printf(" %c",Lab3[i][j]);	
		}
		printf("\n");
	}
	i=0;
	j=0;
	char opcion;
	while (i!=29  ||  j!=28 ){
		printf("\n");
		fflush(stdin);
		opcion=getch();
		switch (opcion){
			case 72:
				i--;//Izquierda//
				if (Lab3[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					i++;
					Lab3[i][j]='X';
					system("cls");
					printf ("***Nivel [3]***\n");
					for (c=0;c<30;c++){
						for(f=0;f<30;f++){
							printf("\x1b[31m %c \x1b[0m",Lab3[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab3[i][j]==' ' || Lab3[i][j]=='0' ){
					Lab3[i][j]='*';
					Lab3[i+1][j]='0';
					system("cls");
					printf ("***Nivel [3]***\n");
					for (c=0;c<30;c++){
						for(f=0;f<30;f++){
							printf(" %c",Lab3[c][f]);	
						}
						printf("\n");
					}
					break;
				}
			case 80:
				i++;//Derecha//
				if (Lab3[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					i--;
					Lab3[i][j]='X';
					system("cls");
					printf ("***Nivel [3]***\n");
					for (c=0;c<30;c++){
						for(f=0;f<30;f++){
							printf("\x1b[31m %c \x1b[0m",Lab3[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab3[i][j]==' ' || Lab3[i][j]=='0' ){
					Lab3[i][j]='*';
					Lab3[i-1][j]='0';
					system("cls");
					printf ("***Nivel [3]***\n");
					for (c=0;c<30;c++){
						for(f=0;f<30;f++){
							printf(" %c",Lab3[c][f]);	
						}
						printf("\n");
					}
					break;
				}
			case 75:
				j--;//Arriba//
				if (Lab3[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					j++;
					Lab3[i][j]='X';
					system("cls");
					printf ("***Nivel [3]***\n");
					for (c=0;c<30;c++){
						for(f=0;f<30;f++){
							printf("\x1b[31m %c \x1b[0m",Lab3[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab3[i][j]==' ' || Lab3[i][j]=='0' ){
					Lab3[i][j]='*';
					Lab3[i][j+1]='0';
					system("cls");
					printf ("***Nivel [3]***\n");
					for (c=0;c<30;c++){
						for(f=0;f<30;f++){
							printf(" %c",Lab3[c][f]);	
						}
						printf("\n");
					}
					break;
				}
			case 77:
				j++;//Abajo//
				if (Lab3[i][j]=='X'){
					printf("\nIntenta de nuevo\n");
					j--;
					Lab3[i][j]='X';
					system("cls");
					printf ("***Nivel [3]***\n");
					for (c=0;c<30;c++){
						for(f=0;f<30;f++){
							printf("\x1b[31m %c \x1b[0m",Lab3[c][f]);	
						}
						printf("\n");
					}
					break;	
				}
				else if (Lab3[i][j]==' ' || Lab3[i][j]=='0' ){
					Lab3[i][j]='*';
					Lab3[i][j-1]='0';
					system("cls");
					printf ("***Nivel [3]***\n");
					for ( c=0;c<30;c++){
						for( f=0;f<30;f++){
							printf(" %c",Lab3[c][f]);	
						}
						printf("\n");
					}
					break;
				}
		}
		if (i==29 && j==28){
			printf("\n Gracias por jugar!\n");
		}
		}
		printf("Quieres jugar el nivel otra vez?\n1-Si 2-No\n");
		scanf("%d",&opn3);
		if (opn3==2){
			FILE*ap1;
			ap1=fopen("Estadisticas.txt","a");
			printf ("Ingresa tu nombre de usuario:\n");
			fflush(stdin);
			gets(user);
			if(ap1==NULL){
				printf("No te has registrado :(\n");
			}
			else {
				J.win=J.win+1;
				fscanf(ap1,"%s %d %d",user,&J.win,&J.lose);
				fprintf(ap1, "%s ", user);
				fprintf(ap1, "%d \n", J.win);
			fclose(ap1);
		}
		}
		if (opn3==2){
		    FILE*ap1;
		    ap1=fopen("Estadisticas.txt","r");
			printf("Bienvenido %s! Tus estadisticas son:\n",user);
			printf("Has ganado %d juegos y has perdido %d veces\n",J.win,J.lose);
			fclose(ap1);
		}
		}while(opn3==1);
		break;
		
		case 2:
			
			ap=fopen("Usuarios.txt","r");
			printf ("Ingresa tu nombre de usuario:\n");
			fflush(stdin);
			gets(user);
			printf("\n");
			Sleep (2000);
			while (feof(ap)==NULL){
				fscanf(ap,"%s",user1);
					if (strcmp (user,user1) == 0){
			printf("El usuario ya existe\n");
			b=1;
			Sleep (2000);
			printf ("Ingresa tu nombre de usuario:\n");
			fflush(stdin);
			gets(user);
			printf("\n");
			b=0;
			Sleep (2000);
		}
	}
	fclose(ap);
	if(b==0){
		printf ("Tu contraseña debe contener algun caracter especial y algun numero.\n");
		Sleep (1500);
		printf ("Usuario disponible.\nIngrese su contraseña:\n");
		fflush (stdin);
		gets (contra);
		printf("\n");
		Sleep (2000);
		ap==fopen("Usuarios.txt","a");
		fprintf(ap, "%s ", user);
		fprintf(ap, "%s \n", contra);
	}
	fclose(ap);
	printf("Se ha creado la cuenta con exito :)\n");
	Sleep (2000);
	system("cls");
		break;
		
		case 3:
			printf("Gracias por jugar, saquenos 10. :))\n");
			Sleep (2000);
			return 0;
		break;
	}
}while(op<3);
}