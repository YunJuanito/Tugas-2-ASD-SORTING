#include <stdio.h>

int a = 0, b = 0, c, hasil[100], input;

// Membuat code
void bubble_sort(int hasil[], int input)
{
    for (a=0; a<input; a++)
	{
        for (b=0; b<input-a-1; b++)
		{
            if (hasil[b] > hasil[b+1])
			{
                c = hasil[b];
                hasil[b] = hasil[b+1];
                hasil[b+1] = c;
            }
        }
    }
}

//Proses running
int main()
{
	printf("Program Bubble Sort\n");
	printf("------------------- \n\n");
	printf("Jumlah angka yang akan di urutkan : ");
	scanf("%d", &input);
	printf("Masukkan %d angka \n", input);
	for (a = 0; a < input; a++)
		scanf("%d", &hasil[a]);
		bubble_sort(hasil, input);

	printf("\n\n");
	printf("hasil yang telah diurutkan :\n");
    for (a = 0; a < input; a++)
        printf("%d\n", hasil[a]);

  return 0;
}
