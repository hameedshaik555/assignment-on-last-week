
int main() {
  char str[20], *pt;
  int i = 0;
  printf("Enter a string : ");
  scanf("%s",str);
  pt = str;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("Length of String : %d", i);

  return 0;
}
