#include <stdio.h.>

//deklarasi variabel

//deklarasi struct


// main
int main()
{
	int jam, gaji, gajiperjam, x;

	gajiperjam = 10625;
	scanf("%d", &gaji);
	if (gaji <= 8)
	{
		gaji = gaji;
		gaji = gaji * gajiperjam;
		printf("%d\n", gaji);
	} else if (gaji > 8)
	{
		x = gaji - 8;
		gaji = gaji - x;
		gaji = gaji * gajiperjam;
		gaji = gaji + (x * (gajiperjam * 8));
		printf("%d\n", gaji);
	}
	/* code */
	return 0;
}
