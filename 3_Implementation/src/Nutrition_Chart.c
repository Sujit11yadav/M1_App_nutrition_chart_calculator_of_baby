#my project
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int n,p,c,ca,cal,i,vA,z,vD,vE,v;
	printf("---------------------------------------------------------------------------");
	printf("-----------WELCOME TO THE NUTRITION CHART CALCULATOR OF BABY---------------");
	printf("-------------------------------------------------------------------------------------");
	printf("Enter 1 to show the amount of protein consume by a baby per day\n");
	printf("Enter 2 to show the amount of carbohydrate consume by a baby per day\n");
	printf("Enter 3 to show the amount of calories consume by per day\n");
	printf("Enter 4 to show the amount of calcium consume by a  baby per day\n");
	printf("Enter 5 to show the amount of iron consume by a baby per day\n");
	printf("Enter 6 to show the amount of vitaminA consume by a baby per day\n");
	printf("Enter 7 to show the amount of zink consume  by a baby per day\n");
	printf("Enter 8 to show the amount of vitaminD consume by a baby per day\n");
	printf("Enter 9 to show the amount of vitaminE consume by a baby per day\n");
	printf("Enter 10 to show the amount of vitamin12 & other B vitamins consume by a baby per day\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
			printf("Enter protein consume by the baby in a day\n");
			scanf("%d",&p);
			if(p>12 && p<20)
			{
				printf("The amount of protein  intake by the baby is good for health\n");
			}
			else
			{
				printf("The amount of protein intake by the baby is not good for health\n");
				printf("This should be between 13 to 19 gm  per day\n");
	        }	
	        break;
    case 2:
	        printf("Enter carbohydrate consume by the baby in a day\n");
			scanf("%d",&c);
			if(c>15 && c<32)
			{
				printf("The amount of carbohydrate intake by the baby is good for health\n");	
			}
			else
			{
				printf("The amount of carbohydrate intake by the baby is not good for health  \n");
				printf("This should be between 17 to 30 gm per day\n");
		    }
		    break;
	case 3:
		    printf("Enter calories consume by the baby in a day\n");
			scanf("%d",&ca);
			if(ca>400 && ca<1500)
			{
				printf("The amount of calories intake by the baby is good for health\n");
			}
			else
			{
				printf("The amount of calories intake by the baby is not good for health\n");
				printf("This should be between 500 to 1450 calories per day\n");
			}
			break;
	case 4:
		    printf("Enter calcium consume by the baby in a day\n");
			scanf("%d",&cal);
			if(cal>650 && cal<1050)
			{
				printf("The amount of calcium intake by the baby is good for health\n");
			}
			else
			{
				printf("The amount of calcium intake by the baby is not good for health\n");
				printf("This should be between 700 to 1000 mg per day\n");
			}
			break;
	case 5:
		    printf("Enter iron consume by the baby in a day\n");
			scanf("%d",&i);
			if(i>5 && i<13)
			{
				printf("The amount of iron intake by the baby is good for health\n");
			}
			else
			{
				printf("The amount of iron intake by the baby is not good for health\n");
				printf("This should be between 7 to 11 mg per day\n");
			}
			break;
	case 6:
		    printf("Enter vitaminA consume by the baby in a day\n");
			scanf("%d",&vA);
			if(vA>250 && vA<450)
			{
				printf("The amount of vitaminA intake by the baby is good for health\n");
			}
			else
			{
				printf("The amount of vitaminA intake by the baby is not good for health\n");
				printf("This should be between 300 to 400 mcg per day\n");
			}
			break;		
	case 7:
		    printf("Enter zink consume by the baby in a day\n");
			scanf("%d",&z);
			if(z>2 && z<10)
			{
				printf("The amount of zink intake by the baby is good for health\n");
			}
			else
			{
				printf("The amount of zink intake by the baby is not good for health\n");
				printf("This should be between 3 to 8 mg per day\n");
			}
			break;
	case 8:
		    printf("Enter vitaminD consume by the baby in a day\n");
			scanf("%d",&vD);
			if(vD>300 && vD<500)
			{
				printf("The amount of vitaminD intake by the baby is good for health\n");
			}
			else
			{
				printf("The amount of vitaminD intake by the baby is not good for health\n");
				printf("This should be between 400 to 450 IU per day\n");
			}	
			break;										
	case 9:
		    printf("Enter vitaminE consume by the baby in a day\n");
			scanf("%d",&vE);
			if(vE>8 && vE<15)
			{
				printf("The amount of vitaminE intake by the baby is good for health\n");
			}
			else
			{
				printf("The amount of vitaminE intake by the baby is not good for health\n");
				printf("This should be between 9 to 14 IU per day\n");
			}
			break;
	case 10:
		    printf("Enter vitamin12 & other B vitamins consume by the baby in a day\n");
			scanf("%d",&v);
			if(v>0 && v<3)
			{
				printf("The amount of vitamin12 & other B vitamins intake by the baby is good for health\n");
			}
			else
			{
				printf("The amount of  vitamin12 & other B vitamin intake by the baby is not good for health\n");
				printf("This should be between 1 to 2 mcg per day\n");
			}	
			break;														
    }
	} 
