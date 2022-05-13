/* #include <stdio.h>
int main()
{
  int a = 10;
  printf("%p\n", &a);
  int* p = &a;
  printf("%p\n", p);
  *p = 20;//*——解引用操作符，间接访问操作符
  printf("%d\n", a);
  printf("%d\n", sizeof(int*));
  return 0;
}
 */
#include <stdio.h>
struct Book
{
  char name[20];
  short price;
};
int main()
{
  struct Book b1 = {"C语言程序设计", 55};
  struct Book* pd=&b1;
  printf("%p\n", b1);
  printf("%s\n", (*pd).name);
  printf("%d\n", (*pd).price);
  printf("%s\n", pd->name);
  printf("%d\n", pd->price);
  printf("书名:%s\n", b1.name);
  printf("价格:%d\n",b1.price);
  b1.price = 15;
  printf("修改后的价格:%d\n",b1.price);
  return 0;

}
