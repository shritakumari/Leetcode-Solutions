class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        vector<int>vec;
        sort(skill.begin(),skill.end());
        int i=0;
        int j=skill.size()-1;
        int sum=skill[i]+skill[j];
        while (i<j)
        {
            if (skill[i]+skill[j]==sum)
            {
                vec.push_back(skill[i]*skill[j]);
            }
            else
            {
                return -1;
            }
            i++;
            j--;
        }
        long long res=0;
        for (int i=0;i<vec.size();i++)
        {
            res=res+vec[i];
        }
    return res;        
    }
};