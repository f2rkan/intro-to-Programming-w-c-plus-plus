#include <stdio.h>
#include <string.h>
struct Yapi_Ornek {
 int integer;
 float decimal;
 char name[20];
};
union Birlik_Ornek{
 int integer;
 float decimal;
 char name[20];
}; 

int main() {
 struct Yapi_Ornek s={22,45.5,"ISTE-bm"};
 printf("structure Degerleri:\n integer: %d\n"
 "decimal: %.2f\n name: %s\n",
 s.integer, s.decimal, s.name);
 printf("\nStructure Boyutu : %d\n", sizeof(s));
 s.integer = 1453; s.decimal = 78;
 strcpy(s.name, "ISTE-Teknoversite");
 printf("structure Degerleri:\n integer: %d\n"
 "decimal: %.2f\n name: %s\n",
 s.integer, s.decimal, s.name);
 return 0;
}
