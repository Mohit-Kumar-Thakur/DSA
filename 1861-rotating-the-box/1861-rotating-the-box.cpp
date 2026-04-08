class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int r = boxGrid.size();
        int c = boxGrid[0].size();
        vector<vector<char>> rot_box(c,vector<char>(r));

        for(int i =0;i<r;i++){
            int cell = c-1;
            for(int j=c-1;j>=0;j--){
                if(boxGrid[i][j]=='*'){
                    cell = j-1;
                }
                else if(boxGrid[i][j]=='#'){
                    boxGrid[i][j]='.';
                    boxGrid[i][cell--] = '#';
                }
            }
        }
        for(int i =0;i<r;i++){
            for(int j=0;j<c;j++){
                rot_box[j][r-i-1] = boxGrid[i][j];
            }
        }
        return rot_box;
    }
};