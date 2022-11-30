class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        
        int n = arr.size();
        
        // declare a stack
        
        stack<int> st;
        
        for(int i = 0; i < n; i++)
        {
            // if aesteroid is moving in right direction simply push into stack
            
            if(arr[i] > 0)
            {
                st.push(arr[i]);
            }
            
            // if aesteroid is moving in left direction then we have multiple cases
            
            else if(arr[i] < 0)
            {
                bool flag = true;
                
                while(st.empty() == false) 
                {
                    if(st.top() < 0)
                    {
                        break;
                    }
                    else if(st.top() < abs(arr[i]))
                    {
                        st.pop();
                    }
                    else if(st.top() == abs(arr[i]))
                    {
                        flag = false;
                        
                        st.pop();
                        
                        break;
                    }
                    else
                    {
                        flag = false;
                        
                        break;
                    }
                }
                if(flag)
                {
                    st.push(arr[i]);
                }
            }
        }

        vector<int> res;
        
        while(st.empty() == false)
        {
            res.push_back(st.top());
            
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};