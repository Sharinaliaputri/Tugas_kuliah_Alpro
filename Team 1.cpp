#include <stdio.h>

int main(){
	int umur;
	char nama[60];
	char ice[20];
	printf("%c Mari Belajar Algoritma dengan Bahasa C %C\n",3,3);
	printf("========================================\n\n");
	printf("Masukkan nama anda[13..52] : ");
	scanf("%[^\n]s",&nama);
	fflush(stdin);
	printf("Masukkan umur anda : ");
	scanf("%d",&umur);
	fflush(stdin);
	
	printf("\n%c%c%c%c%c ",3,3,3,3,3);
	printf("BeLaJaR algo itu menyenangkan seperti makan es krim");
	printf(" %c%c%c%c%c\n",3,3,3,3,3);
	printf("Rasa Es Krim yang disukai");
	scanf("%s",ice);
printf("================================================================\n\n");
	printf("%S berumur %D tahun menyukai es krim rasa %s\n\n",nama,umur,ice);
	printf("    .-\"`'\"-.\n");
    	printf("   /        \\\n");
    	printf("   |        |\n");
    	printf("   /'---'--`\\\n");
    	printf("  |          |\n");
    	printf("  \.--.---.-./\n");
    	printf("  (_.--._.-._)\n");
    	printf("    \\=-=-=-/\n");
    	printf("     \=-=-/\n");
    	printf("      \\=-/\n");
    	printf("       \/\n");
	printf("\n");
    	printf("SELAMAT BELAJAR ALGORITMA %c !\n\n",2);
	
fflush(stdin);
	getchar();
	return 0;
}

