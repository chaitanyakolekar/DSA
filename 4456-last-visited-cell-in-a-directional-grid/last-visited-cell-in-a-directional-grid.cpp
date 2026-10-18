class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
      
        int m=grid.size();
        int n=grid[0].size();
        
        int i=0;
        int j=0;
    vector<vector<bool>>visited(m,vector<bool>(n,false));
        visited[i][j]=true;
        
        while(true){
            int x=i;
            int y=j;
            if(grid[i][j]=='R'){
                y++;
                }
            
            else if(grid[i][j]=='L'){
                y--;
            }
            else if(grid[i][j]=='U'){
                x--;
            }
            else if(grid[i][j]=='D'){
                x++;
            }
        if(x<0 || x>=m || y>=n ||y<0 || visited[x][y]){
            break;
        }
        i=x;
        j=y;
        visited[i][j]=true;
        }

    vector<int> ans;
ans.push_back(i);
ans.push_back(j);
return ans;
    
    }
};