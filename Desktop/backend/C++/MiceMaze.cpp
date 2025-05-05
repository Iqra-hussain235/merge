#include<bits/stdc++.h>
using namespace std;


void solveMaze(int maze[4][4], int n, vector<vector<int>> &path,int x,int y){
    if(x == n-1 && y == n-1){
        cout<<"path found :"<<endl;
        for(int i=0; i<path.size(); i++){
            cout<<path[i][0]<<""<<path[i][j]<<"->";
        }
        cout<<
    }
}

int main(){
    int n=4;
    vector<vector<int>>path;
    int maze[4][4] ={
        {1,0,0,0},
        {1,1,1,1},
        {0,1,0,0},
        {0,1,1,1}
    };
    solveMaze(maze,n,path,0,0);

}