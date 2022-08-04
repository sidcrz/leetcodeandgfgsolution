class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       unordered_map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < numbers.size(); i++) 
    {
		

            
		if (hash.find(target - numbers[i]) != hash.end()) 
        {
                   
			result.push_back(hash[target - numbers[i]] );
			result.push_back(i );			
			return result;
		}

		hash[numbers[i]] = i;
	}
	return result;
    }
    
};

