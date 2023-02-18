#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
  int len1, len2, i, j;
  char str1[80];
  char str2[70];
  cout<<"Введите строку: \n";
  cin.getline(str1,80);
  len1 = strlen(str1)+1;
  cout<<"Введите подстроку \n";
  cin.getline(str2, 70);
  len2 = strlen(str2)+1;
  for(i = 0; i<len1; i++)
  {
    for(j = 0; j<len2; j++)
      if (str1[i+j] != str2[j])
        break;
    if (j == len2-1)
      cout<<"Начало подстроки: "<<i<<endl;
  }
}
