// 33. ให้นักศึกษารับข้อมูลเก็บใน arrayขนาด 10 ช่องแล้วแสดงค่าตัวเลขต่างๆ ใน array และแสดงตัวเลขที่เลขข้างเคียงเป็นเลขคี่ ตัวอย่างการทำงานของโปรแกรม (แสดง Output หลังจากใส่ค่า Input) (Level 3)
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main()
{
	int a[10],i;
	printf("Data in array: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Result: ");
	for (i = 0; i <= 10; i++)
	{
		if (a[i + 1] % 2 == 1 && a[i - 1] % 2 == 1 && i != 0)
		{
			printf("%d ", a[i]);
		}
	}
	
	return 0;
}