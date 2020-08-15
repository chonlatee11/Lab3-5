#include <stdio.h>

int main(void) {
  #include <stdio.h>
int main(void) {
  float b, h, area; 
  printf("Enter Base : ");
  scanf("%f", &b);		 // รับค่า base
  printf("Enter Hight : ");
  scanf("%f", &h);		 // รับค่า hight
  area = 0.5 * b * h;		 // คำนวณ ตามสูตรการหาพื้นที่สามเหลี่ยม
  printf("Area of Triangle is %.2f", area); // แสดงผลลัพธ์ที่คำนวณได้
  return 0;
}
}