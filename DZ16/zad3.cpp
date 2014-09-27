#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>

using namespace std;

    int **MM = new int *[2];
    //m[2][2] эквивалентно *(*(ь+2)+3)

    int FunkSum(int **a, int **b)   {return **a+ **b;}

int main()
{
    int **ppx,**ppy;
    int *px,*py;
    int x,y;

    px=&x;
    py=&y;
    ppx=&px;
    ppy=&py;

    cout<<"Enter first number -  ";
    cin>>x;
    cout<<"Enter second number-  ";
    cin>>y;cout<<endl;

    cout<<"x+y = "<<**ppx+**ppy<<endl<<endl;
    cout<<"x+y = "<<FunkSum(ppx, ppy)<<endl;

    int M[2][2];
    cout<<"Enter first number -  x=";
    cin>>**M;
    cout<<"Enter second number-  y=";
    cin>>*(*M+1);
    cout<<"Enter first number -  z=";
    cin>>**(M+1);
    cout<<"Enter second number-  q=";
    cin>>*(*(M+1)+1);

    y=0;
    for(int i=0;i<4;i++) y+=*(*M+i);

    cout<<"x+y+z+q = "<<y<<endl<<endl;

    cout<<M[0][0]<<endl;
    cout<<M[0][1]<<endl;
    cout<<M[1][0]<<endl;
    cout<<M[1][1]<<endl;


    cout<<"Enter first number -  x=";
    cin>>**MM;
    cout<<"Enter second number-  y=";
    cin>>*(*MM+1);
    cout<<"Enter first number -  z=";
    cin>>**(MM+1);
    cout<<"Enter second number-  q=";
    cin>>*(*(MM+1)+1);

    y=0;
    for(int i=0;i<4;i++) y+=*(*M+i);

    cout<<"x+y+z+q = "<<y<<endl<<endl;

    cout<<M[0][0]<<endl;
    cout<<M[0][1]<<endl;
    cout<<M[1][0]<<endl;
    cout<<M[1][1]<<endl;

    delete [] MM;
    return 0;
}
