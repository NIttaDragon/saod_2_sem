#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

stack <float> stacke;

int polar_tagle(int x, int y, int i, float max_f, float max_r)
{
  float f, r;  //float max_r = 0;  float max_f = 0;
  int nov_i = 0;
  // cout<<x<<" "<<y<<" ";
  if(x == 0)
    {
      if(y > 0)  f = 90;
      else  f = -90;
    }
  else
    {
      f = atan2(x,y)*180/3.14;
      if(x < 0)  f = f + 180;
    }
  // cout<<f<<" ";
  if(f < max_f)
    {
      max_f = f;
      r = sqrt(x*x+y*y);
      if(r > max_r)
      {
        max_r = r;
        nov_i = i;
      }
      // cout<<r<<endl;
    }
  stacke.push(max_f);
  stacke.push(max_r);
  return nov_i;
}

int main()
{
  int dano, g, pred_i, max_x, x, y;

  cout<<"Введите количество точек: \n";
  cin>>dano;

  int** tochki = new int* [dano]; //создание матрицы
  for (int i = 0; i<dano; i++)
    tochki[i] = new int[2];

  int* obolochka = new int [dano];  //точки оболочки

  for(int i = 0; i<dano; i++) //заполнение матрицы
  {
    cout<<"Введите координаты для точки "<<i+1<<": \n";
    cout<<"x1=";
    cin>>tochki[i][0];
    cout<<"y1=";
    cin>>tochki[i][1];
  }

  for(int i = 0; i < dano; i++) //сортировка по возрастанию x и возрастанию y
    for(int j = 0; j < dano-1; j++)
    {
      if(tochki[j][0]>tochki[j+1][0])
      {
        g=tochki[j][0];
        tochki[j][0]=tochki[j+1][0];
        tochki[j+1][0]=g;
        g=tochki[j][1];
        tochki[j][1]=tochki[j+1][1];
        tochki[j+1][1]=g;
      }
      else if((tochki[j][0]==tochki[j+1][0])and(tochki[j][1]<tochki[j+1][1]))
      {
        g=tochki[j][1];
        tochki[j][1]=tochki[j+1][1];
        tochki[j+1][1]=g;
      }
    }

  max_x = 0;  //нахождение начальной точки оболочки
  for(int i = 0; i < dano; i++)
  {
    if(tochki[i][0] >= max_x)
    {
      max_x = tochki[i][0];
      pred_i = i;
    }
  }

  cout<<"x = "<<tochki[pred_i][0]<<" y = "<<tochki[pred_i][1]<<endl;

  float max_f = 1000; float max_r = 0; int nov_i; int kol = 0;


  for(int i = 0; i<dano; i++)
    if(i!=pred_i)
    {
      x = tochki[i][0] - tochki[pred_i][0];
      y = tochki[i][1] - tochki[pred_i][1];
      nov_i = polar_tagle(x, y, i, max_f, max_r);
      max_r = stacke.top();
      stacke.pop();
      max_f = stacke.top();
      stacke.pop();
      cout<<max_f<<" "<<max_r<<" "<<nov_i<<endl;
      obolochka[kol] = nov_i;
      kol++;
    }

  // cout<<tochki[nov_i][0]<<" "<<tochki[nov_i][1]<<" "<<f<<" "<<r<<endl;

  for(int i=0; i<dano; i++) //удаление матрицы
    delete [] tochki[i];
  delete [] tochki;
  delete [] obolochka;
}
