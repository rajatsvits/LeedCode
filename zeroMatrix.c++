class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        bool fRHZ=0,fCHZ=0;
        for(int i=0;i<m.size();i++){
            if(m[0][i]==0){
                fRHZ=1;
                break;
            }
        }
        
        for(int i=0;i<m[0].size();i++){
            if(m[i][0]==0){
                fCHZ=1;
                break;
            }
        }
        
        for(int i=1;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    m[i][0]=0;
                    m[0][j]=0;
                    break;
                }
            }
            
        }
        
        for(int i=0;i<m.size();i++){
            if(m[i][0]==0){
                for(int j=0;j<m[0].size();j++){
                    m[i][j]=0;
                       
                }
            }
        }
        
        for(int i=0;i<m[0].size();i++){
            if(m[0][i]==0){
                for(int j=0;j<m.size();j++){
                    m[j][i]=0;
                       
                }
            }
        }
        
        if(fRHZ==1){
            for(int i=0;i<m.size();i++){
                m[0][i]=0;
            }
        }
        
        if(fCHZ==1){
            for(int i=0;i<m[0].size();i++){
                m[i][0]=0;
            }
        }
        
        
        
    }
};
