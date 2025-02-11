#include <stdio.h>
#include <string.h>


void inssortdesc(char arr[7][10], int arrlen) {
  for (int i = 0; i < arrlen; i++) {
    for (int j = i; j >= 0 && strcmp(arr[j], arr[j-1]) < 0; j--) {
      char temp[10];
      strcpy(temp, arr[j]);
      strcpy(arr[j], arr[j-1]);
      strcpy(arr[j-1], temp);
    }
  }
}

int binsearch(char arr[7][10], int arrlen, char search[]) {
  int left = 0;
  int right = arrlen - 1;
  while (left <= right) {  // Променено условие
    int mid = (right + left) / 2;
    if (strcmp(arr[mid], search) == 0) 
      return mid;
    if (strcmp(search, arr[mid]) < 0) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  } 

  return -1;
}

int main(void) {

  char arr[7][10] = {
    "Ivan",
    "Marin",
    "Marianna",
    "Daniel",
    "Nikolai",
    "Plamena",
    "Atanas",
  };

  inssortdesc(arr, 7);

  printf("%s in array? => %d\n", "Dragan", binsearch(arr, 7, "Dragan"));
  printf("%s in array? => %d\n", "Marin", binsearch(arr, 7, "Marin"));
  return 0;
}