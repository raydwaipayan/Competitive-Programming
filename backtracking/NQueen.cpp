#include <iostream>
#define N 4
using namespace std;

bool isSafe(int board[N][N], int row, int col)
{
    int i,j;
    for(i=0;i<col;i++)
        if(board[row][i])
            return false;
    for(i=row,j=col;i>=0&&j>=0;i--,j--)
        if(board[i][j])
            return false;
    for(i=row,j=col;j>=0&& i<N;i++,j--)
        if(board[i][j])
            return false;
    return true;
}
void printSolution(int sol[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cout<<sol[i][j]<<" ";
        cout<<"\n";
    }
}
bool solveNQUtil(int board[N][N], int col)
{
    if(col>=N)
        return true;
    for(int i=0;i<N;i++)
    {

        if(isSafe(board,i,col))
        {
            board[i][col]=1;
            if(solveNQUtil(board, col+1))
                return true;
            board[i][col]=0;//backtracking
        }
    }
    return false;
}
bool solveNQ()
{

    int board[N][N]={
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0}
    };
    if(solveNQUtil(board,0))
        printSolution(board);
    else
    {
        cout<<"Solution does not exist\n";
        return false;
    }
    return true;
}
//driver function
int main()
{
    if(solveNQ())
        cout<<"Successful\n";
    return 0;
}

