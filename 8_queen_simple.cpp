/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>

bool checkvalid(std::vector<std::vector<int>> &v,int p,int q)
{
    for(int i=0 ; i<8;i++)
    {
        if(v[p][i]==1)
        return false;
    }
    for(int i=0 ; i<8;i++)
    {
        if(v[i][q]==1)
        return false;
    }
    int x=p;
    int y=q;
    while(x>=0&&y>=0)
    {
        if(v[x][y]==1)return false;
        --x;
        --y;
    }
    x=p;
    y=q;
    while(x<8&&y>=0)
    {
        if(v[x][y]==1)return false;
        ++x;
        --y;
    }
    x=p;
    y=q;
    while(y<8&&x>=0)
    {
        if(v[x][y]==1)return false;
        ++y;
        --x;
    }
    x=p;
    y=q;
    while(y<8&&x<8)
    {
        if(v[x][y]==1)return false;
        ++y;
        ++x;
    }
    return true;
}

int fun(std::vector<std::vector<int>> v,int p,int q)
{
    v[p][q]=1;
    int x = 1;
    for(int i=0 ; i<8 ; i++)
    {
        for(int j=0 ; j<8 ; j++)
        {
            if(checkvalid(v,i,j))
            {
               v[i][j]=1;
               x=x+1;
            }
        }
    }
    
    if(x==8)
    {
        for(int i=0 ; i<8 ; i++)
    {
        for(int j=0 ; j<8 ; j++)
        {
            std::cout<<v[i][j]<<"|";
        }
        std::cout<<std::endl;
    }
    return 1;
    }
    return 0;
}


int main()
{
    std::vector<std::vector<int>> v{8, std::vector<int>(8, 0)};
    
    for(int i=0 ; i<8;i++)
    {
        for(int j=0 ; j<8;j++)
        {
            int x = fun(v,i,j);
            if(x==1)break;
        }
    }
    std::cout<<"hello";
    return 0;
}
