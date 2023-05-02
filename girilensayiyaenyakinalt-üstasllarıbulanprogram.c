#include <stdio.h>

int asalmi(int sayi){
	int i;
    int flag=1;

    for(i=2;i<=sayi/2;i++){
    	if(sayi%i==0){
    		flag = 0;
    	}
    }
    return flag;
}

int main(int argc, char const *argv[])
{
	

  int i,j,sayi,flag=0,flag2=0;

  printf("sayi giriniz : ");
  scanf("%d",&sayi);
  
  for(i=0;flag==0&&flag2==0;i++){

  	   if((sayi-i)>1 || (sayi+i)>1){

         flag = asalmi(sayi+i);
         if(flag == 1){
            printf("en yakin asal %d\n",sayi+i);
         }
          

         flag2= asalmi(sayi-i);
         if(flag2==1)
            printf("en yakin asal %d",sayi-i);
         }

  }



  

	return 0;
}