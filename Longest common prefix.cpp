class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if (strs.size() == 0)
            return "";
        string ans = strs[0];

        for (int i = 1; i < strs.size(); ++i)
        {
          string temps = strs[i];
          if (temps.size() == 0 || ans == "")
              return "";

          ans = ans.substr(0, min(ans.size(), temps.size()));

            for (int k = 0; k < temps.size() && k < ans.size(); ++k)
            {
                if (temps[k] != ans[k])
                {
                    ans = ans.substr(0, k);
                    break;
                }
            }
        }
        return ans;
    }
};
