#include <iostream>
#define N 4
using namespace std;
bool isSafe(int x, int y, int maze[N][N])
{
    return (x>=0&&x<N && y>=0 &&y<N && maze[x][y]==1);
}
void printSolution(int sol[N][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<"\n";
    }
}
bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N])
{

    if(x==N-1 && y==N-1)
    {
        sol[x][y]=1;
        return true;
    }
    if(isSafe(x,y,maze))
    {
        sol[x][y]=1;
        if(solveMazeUtil(maze, x+1,y,sol))
            return true;
        if(solveMazeUtil(maze, x, y+1, sol))
            return true;

        sol[x][y]=0;//backtracking
        return false;
    }
    return false;
}
int solveMaze(int maze[N][N])
{
    int sol[N][N]={
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0}
    };
    if(solveMazeUtil(maze,0,0, sol))
    {
        printSolution(sol);
    }
    else
    {
        cout<<"Solution does not exist\n";
        return false;
    }
}
//driver function
int main()
{
    int maze[N][N]={
    {1,0,0,0},
    {1,1,0,1},
    {0,1,0,0},
    {1,1,1,1}
    };
    if(solveMaze(maze))
        cout<<"Successful\n";
    return 0;
}
