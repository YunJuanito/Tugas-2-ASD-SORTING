#include <stdio.h>

int a, b, input, x, hasil[50];

int main()
{

	printf("Program Insertion Sort\n");
	printf("------------------- \n\n");
	printf("Jumlah angka yang akan diurutkan : ");
	scanf("%d",&input);
	
	printf("Masukkan %d angka: \n", input);
	for(a=0; a<input; a++)
      scanf("%d",&hasil[a]);
	
//proses insetion
	for(a=1; a<input; a++)
	{
      x = hasil[a];
      b = a-1;
	
	while((x<hasil[b])&&(b>=0))
	{
         hasil[b+1]=hasil[b];
         b=b-1;
    }
      hasil[b+1]=x;
	}
// proses running
   printf("\n\nHasil yang di urutkan :\n");
   for(a=0; a<input; a++)
      printf("%d\n",hasil[a]);

   return 0;
}
