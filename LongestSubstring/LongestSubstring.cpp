#include <iostream>
#include <String>
#include <vector>

class Solution
{
public:
    int lengthOfLongestSubstring(std::string str)
    {
        if(str!="")
        { 
        std::string subStr, maxStr(1,str[0]);
        for (auto it : str)
        {
            size_t pos = subStr.find(it);
            if (pos != std::string::npos)
            {
                maxStr.length() < subStr.length() ? maxStr = subStr : maxStr;
                subStr.clear();
                subStr += it;
            }
            else
            {
                subStr += it;
            }
        }
        
        std::cout << maxStr.length();

        return maxStr.length();
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Solution solution;
    std::string s("au");
    solution.lengthOfLongestSubstring(s);
    return EXIT_SUCCESS;
}