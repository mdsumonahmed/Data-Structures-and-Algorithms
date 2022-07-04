
#include<bits/stdc++.h>
using namespace std;

int solve(int table[][50],int row, int col)
{

    cout<<"\n\nYour DP table\n";
    int DP_Table[row][col];

    DP_Table[0][0] = table[0][0];

    for(int i=1; i<row; i++)
    {
        DP_Table[i][0] = table[i][0]+DP_Table[i-1][0];
    }

    for(int j=1; j<col; j++)
    {
        DP_Table[0][j] = table[0][j]+DP_Table[0][j-1];
    }

    for(int i=1; i<row; i++)
    {

        for(int j=1; j<col; j++)
        {
            int minmum = min(DP_Table[i-1][j],DP_Table[i][j-1]);
            DP_Table[i][j] = table[i][j] + minmum;

        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<DP_Table[i][j]<<"\t";

        }
        cout<<endl;
        cout<<endl;
    }

    return DP_Table[row-1][col-1];
}

int main()
{
    int row,col;
    cout<<"Enter total number of row = ";
    cin>>row;
    cout<<"Enter total number of column = ";
    cin>>col;
    int table[50][50];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>table[i][j];
        }
        cout<<endl;
    }

    cout<<"Your given table\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<table[i][j]<<"\t";
        }
        cout<<endl;
        cout<<endl;
    }
    int path_cost = solve(table,row,col);

    cout<<"Minimum path cost = "<<path_cost<<endl;

    return 0;
}
