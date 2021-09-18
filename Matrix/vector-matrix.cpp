#include<iostream>
using namespace std;

class vector;
class matrix
{
public:
    int r,c,ma[10][10];
    void get(int r, int c=3)
    {
        int i,j;
        cout<<"Enter the matrix elements\n";
        for(i=0; i<r; i++)
            for(j=0; j<c; j++)
            {
                cin>>ma[i][j];
            }
        cout<<"Your input: ";
        for(i=0; i<r; i++)
        {
            cout<<"\n";
            for(j=0; j<c; j++)
            {
                cout<<ma[i][j]<<"\t";
            }
        }
    }
    friend void calc(matrix m,vector v);
};

class vector
{
public:
    int val,va[10];
    void get(int v=3)
    {
        int i;
        cout<<"\nEnter the vector values\n";
        for(i=0; i<v; i++)
        {
            cin>>va[i];
        }
        cout<<"\nYour input:\n";
        for(i=0; i<v; i++)
        {
            cout<<va[i]<<"\t";
        }
    }
    friend void calc(matrix m,vector v);
};

void calc(matrix m,vector v)
{
    int c[10],i,j;
    if(m.c == v.val)
    {
        for(i=0; i<v.val; i++)
        {
            cout<<"Entered 1st loop";
            c[i] = 0;
            for(j=0; j<m.r; j++)
            {
                c[i] = c[i]+(m.ma[i][j] * v.va[j]);
            }
        }
    }
    cout<<"\nThe result is :\n";
    for(i=0; i<m.r; i++)
    {
        cout<<"Entered for";
        cout<<"\n"<<c[i];
    }
}

int main()
{
    int r;
    matrix m1;
    vector v1;
    cout<<"Enter the number of rows = ";
    cin>>r;
    m1.get(r);
    v1.get();
    calc(m1,v1);
    return 0;
}