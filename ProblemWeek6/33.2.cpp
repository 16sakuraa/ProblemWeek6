// 33.ให้นักศึกษารับข้อมูลเก็บใน arrayขนาด 10 ช่องแล้วแสดงค่าตัวเลขต่างๆ ใน array และแสดงตัวเลขที่เลขข้างเคียงเป็นเลขคี่ ตัวอย่างการทำงานของโปรแกรม (แสดง Output หลังจากใส่ค่า Input) (Level 3)
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main()
{
	int a[10], i;
	printf("Data in array: ");
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &a[i]);
		}

	printf("Result: ");
		for (i = 0; i < 10; i++)
		{
			if (a[i]==1 || a[i] == 3 || a[i] == 5 || a[i] == 7 || a[i] == 9)
			{
				if (a[i + 2] == 1 || a[i + 2] == 3 || a[i + 2] == 5 || a[i + 2] == 7 || a[i + 2] == 9)
				{
					printf("%d ", a[i+1]);
				}
				
			}
		}

	return 0;
}