//䠩� � ansi
//��� � cp866

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
ifstream file;  //��⮪ ��� �⥭�� 䠩��

int main()
{
  setlocale(LC_ALL, "");
  int n = 700, k = 0;
  char arra[n][20]; //���ᨢ ᫮�
  int arr[700][1]; //���ᨢ ��� ��
  for (int i = 0;i<700; i++)
    arr[i][0]=0;
  string s; //��ப� ��� �⥭�� �� 䠩��

  file.open("text3.txt"); //����⨥ 䠩��

  while (!file.eof()) //�⥭�� ������ �� 䠩��
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
        case '�':
          arr[i][0] = arr[i][0] + 1;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 2;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 3;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 4;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 5;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 6;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 7;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 8;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 9;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 10;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 11;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 12;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 13;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 14;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 15;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 16;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 17;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 18;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 19;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 20;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 21;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 22;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 23;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 24;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 25;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 26;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 27;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 28;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 29;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 30;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 31;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 32;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 33;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 34;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 35;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 36;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 37;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 38;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 39;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 40;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 41;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 42;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 43;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 44;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 45;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 46;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 47;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 48;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 49;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 50;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 51;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 52;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 53;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 54;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 55;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 56;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 57;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 58;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 59;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 60;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 61;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 62;
          break;
        case '�':
          arr[i][0] = arr[i][0] + 63;
          break;
        }
      }

  cout<<"�� �� ��� ᤥ����:"<<endl;
  cout<<"1.���஢���� �� ��ࢮ� �㪢� ��䠢��:"<<endl;
  cout<<"2.���஢���� �� ��� ������� � ��� ᮣ����� �㪢 � ᫮���:"<<endl;
  cout<<"3.����᪮� ��஢����:"<<endl;
  cout<<"4.�������� �ணࠬ��:"<<endl;

  file.close();

  return 0;
}
