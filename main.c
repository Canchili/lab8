#include <stdio.h>
/*
Создать текстовый файл с записями, включающие имя/фамилию человека, год
рождения, пол и рост (в метрах). Упорядочить элементы по году рождения,
имени/фамилии, полу или росту. Вывести результат. Указать элемент, по которому
следует упорядочить, через консоль. А также реализовать возможность задавать
несколько полей для упорядочивания.
  */
struct humen {
  char name[20];
  char surname[20];
  int year;
  char gender;
  double height;
};
int main(void) {
  FILE *f;
  char n;
  printf("Если вы хотите упорядочить по имени нажмите: n\nЕсли по фамилии: "
         "f\nЕсли по году рождения: y\nЕсли по полу: g\nЕсли по росту: h\n");
  scanf("%c", &n);

  int i = 0;
  char *s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
