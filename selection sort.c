#include <stdio.h>

int a, b, input, x, hasil[50];

int main()
{
   
	printf("Program Selection Sort\n");
	printf("------------------- \n\n");
	printf("Jumlah angka yang akan di urutkan : ");
	scanf("%d",&input);
	
	printf("Masukkan %d angka: \n", input);
	for(a=0; a<input; a++)
	scanf("%d",&hasil[a]);

// Proses Seleksi
   for(a=0; a<input; a++)
   {
      for(b = a+1; b<input; b++)
	  {
         if(hasil[a]>hasil[b])
		 {
            x=hasil[a];
            hasil[a]=hasil[b];
            hasil[b]=x;
         }
      }
   }

//proses Running
   printf("Hasil yang diurutkan : \n");
   for(a=0; a<input; a++)
      printf("%d\n",hasil[a]);

   return 0;
}
