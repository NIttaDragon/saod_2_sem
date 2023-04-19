//файл в ansi
//код в cp866

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
ifstream file;  //поток для чтения файла

int main()
{
  setlocale(LC_ALL, "");
  int n = 700, k = 0;
  char arra[n][20]; //массив слов
  int arr[700][1]; //массив для хеша
  for (int i = 0;i<700; i++)
    arr[i][0]=0;
  string s; //строка для чтения из файла

  file.open("text3.txt"); //открытие файла

  while (!file.eof()) //чтение данных из файла
  {
    file>>s;
    cout<<s<<endl;
    for(int i =0;i<20;i++)
      arra[k][i] = '\0';
    for(int i=0;i<s.length();i++)
    {
      arra[k][i] = s[i];
      cout<<arra[k][i]<<endl;
    }
    k++;
  }
  cout << endl;

  for(int i = 0; i<700;i++)
    for(int j = 0; j<20; j++)
    {
      switch(arra[i][j])
      {
        case 'А':
          arr[i][0] = arr[i][0] + 1;
          break;
        case 'а':
          arr[i][0] = arr[i][0] + 2;
          break;
        case 'Б':
          arr[i][0] = arr[i][0] + 3;
          break;
        case 'б':
          arr[i][0] = arr[i][0] + 4;
          break;
        case 'В':
          arr[i][0] = arr[i][0] + 5;
          break;
        case 'в':
          arr[i][0] = arr[i][0] + 6;
          break;
        case 'Г':
          arr[i][0] = arr[i][0] + 7;
          break;
        case 'г':
          arr[i][0] = arr[i][0] + 8;
          break;
        case 'Д':
          arr[i][0] = arr[i][0] + 9;
          break;
        case 'д':
          arr[i][0] = arr[i][0] + 10;
          break;
        case 'Е':
          arr[i][0] = arr[i][0] + 11;
          break;
        case 'е':
          arr[i][0] = arr[i][0] + 12;
          break;
        case 'Ё':
          arr[i][0] = arr[i][0] + 13;
          break;
        case 'ё':
          arr[i][0] = arr[i][0] + 14;
          break;
        case 'Ж':
          arr[i][0] = arr[i][0] + 15;
          break;
        case 'ж':
          arr[i][0] = arr[i][0] + 16;
          break;
        case 'З':
          arr[i][0] = arr[i][0] + 17;
          break;
        case 'з':
          arr[i][0] = arr[i][0] + 18;
          break;
        case 'И':
          arr[i][0] = arr[i][0] + 19;
          break;
        case 'и':
          arr[i][0] = arr[i][0] + 20;
          break;
        case 'Й':
          arr[i][0] = arr[i][0] + 21;
          break;
        case 'й':
          arr[i][0] = arr[i][0] + 22;
          break;
        case 'К':
          arr[i][0] = arr[i][0] + 23;
          break;
        case 'к':
          arr[i][0] = arr[i][0] + 24;
          break;
        case 'Л':
          arr[i][0] = arr[i][0] + 25;
          break;
        case 'л':
          arr[i][0] = arr[i][0] + 26;
          break;
        case 'М':
          arr[i][0] = arr[i][0] + 27;
          break;
        case 'м':
          arr[i][0] = arr[i][0] + 28;
          break;
        case 'Н':
          arr[i][0] = arr[i][0] + 29;
          break;
        case 'н':
          arr[i][0] = arr[i][0] + 30;
          break;
        case 'О':
          arr[i][0] = arr[i][0] + 31;
          break;
        case 'о':
          arr[i][0] = arr[i][0] + 32;
          break;
        case 'П':
          arr[i][0] = arr[i][0] + 33;
          break;
        case 'п':
          arr[i][0] = arr[i][0] + 34;
          break;
        case 'Р':
          arr[i][0] = arr[i][0] + 35;
          break;
        case 'р':
          arr[i][0] = arr[i][0] + 36;
          break;
        case 'С':
          arr[i][0] = arr[i][0] + 37;
          break;
        case 'с':
          arr[i][0] = arr[i][0] + 38;
          break;
        case 'Т':
          arr[i][0] = arr[i][0] + 39;
          break;
        case 'т':
          arr[i][0] = arr[i][0] + 40;
          break;
        case 'У':
          arr[i][0] = arr[i][0] + 41;
          break;
        case 'у':
          arr[i][0] = arr[i][0] + 42;
          break;
        case 'Ф':
          arr[i][0] = arr[i][0] + 43;
          break;
        case 'ф':
          arr[i][0] = arr[i][0] + 44;
          break;
        case 'Х':
          arr[i][0] = arr[i][0] + 45;
          break;
        case 'х':
          arr[i][0] = arr[i][0] + 46;
          break;
        case 'Ц':
          arr[i][0] = arr[i][0] + 47;
          break;
        case 'ц':
          arr[i][0] = arr[i][0] + 48;
          break;
        case 'Ч':
          arr[i][0] = arr[i][0] + 49;
          break;
        case 'ч':
          arr[i][0] = arr[i][0] + 50;
          break;
        case 'Ш':
          arr[i][0] = arr[i][0] + 51;
          break;
        case 'ш':
          arr[i][0] = arr[i][0] + 52;
          break;
        case 'Щ':
          arr[i][0] = arr[i][0] + 53;
          break;
        case 'щ':
          arr[i][0] = arr[i][0] + 54;
          break;
        case 'ъ':
          arr[i][0] = arr[i][0] + 55;
          break;
        case 'ы':
          arr[i][0] = arr[i][0] + 56;
          break;
        case 'ь':
          arr[i][0] = arr[i][0] + 57;
          break;
        case 'Э':
          arr[i][0] = arr[i][0] + 58;
          break;
        case 'э':
          arr[i][0] = arr[i][0] + 59;
          break;
        case 'Ю':
          arr[i][0] = arr[i][0] + 60;
          break;
        case 'ю':
          arr[i][0] = arr[i][0] + 61;
          break;
        case 'Я':
          arr[i][0] = arr[i][0] + 62;
          break;
        case 'я':
          arr[i][0] = arr[i][0] + 63;
          break;
        }
      }

  cout<<"Что вы хотите сделать:"<<endl;
  cout<<"1.Хеширование по первой букве алфавита:"<<endl;
  cout<<"2.Хеширование по числу глассных и числу согласных букв в словах:"<<endl;
  cout<<"3.Авторское хеширование:"<<endl;
  cout<<"4.Завершить программу:"<<endl;

  file.close();

  return 0;
}
