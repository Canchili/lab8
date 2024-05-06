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
// printf("%c\n", s[4]);
  struct humen m1[3],m2[3],m3[3];
  f = fopen("humen_g.txt", "r");
  for (i = 0; i < 3; i++) {
    fscanf(f, "%s %s %d %c %lf", m1[i].name, m1[i].surname, &m1[i].year,
           &m1[i].gender, &m1[i].height);
    m2[i] = m1[i];
  }
}
  for (i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      if(n == "y")
      {
        if (m2[j].year > m2[j + 1].year) {
        m3[j] = m2[j];
        m2[j] = m2[j + 1];
        m2[j + 1] = m3[j];
        }
      }
      
    }
  }
