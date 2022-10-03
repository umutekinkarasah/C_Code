#include <stdio.h> 

int time_spend()
{
	int day, hour, min, sec;
	
	
	printf("\n\n\n\n\t\t\t\t\t\t\t\t\tLutfen seyehatinizin kac gun, saat, dakika ve saniye oldugunu giriniz.");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tLutfen gun bilgisini giriniz : ");
	scanf("%d", &day);
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tLutfen saat bilgisini giriniz : ");
	scanf("%d", &hour);
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tLutfen dakika bilgisini giriniz : ");
	scanf("%d", &min);
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tLutfen saniye bilgisini giriniz : ");
	scanf("%d", &sec);
	
	
	if (day < 0 || hour < 0 || min < 0 || sec < 0)
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tHatali giris, sure degeri eski olamaz.\n\n\n\n\n\n");
	
	else
	{
	
	if(sec > 60)
	{	
		min += (sec / 60);	
		sec = sec % 60; 			
	}

	if(min > 60)
	{	
		hour += (min / 60);
		min %= 60;
	}	

	if(hour > 24)
	{	
		day += (hour / 24);
		hour = hour % 24;
	
	}

	printf("\n\n\t\t\t\t\t\t\t\t\t\tSeyahatiniz %d gun, %d saat, %d dakika ve %d saniye surmustur.\n\n\n\n", day, hour, min, sec);

    }
}




int main(){
	
	time_spend();
	return 0;
	
}

