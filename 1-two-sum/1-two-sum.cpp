class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       unordered_map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < numbers.size(); i++) 
    {
		int numberToFind = target - numbers[i];

            //if numberToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) 
        {
                    //+1 because indices are NOT zero based
			result.push_back(hash[numberToFind] );
			result.push_back(i );			
			return result;
		}

            //number was not found. Put it in the map.
		hash[numbers[i]] = i;
	}
	return result;
    }
    
};

