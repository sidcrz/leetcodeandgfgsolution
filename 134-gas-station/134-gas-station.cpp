class Solution
{
    public:
        int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
        {
            int sumGas = 0;
    int sumCost = 0;
    int start = 0;
    int tank = 0;
    for (int i = 0; i < gas.size(); i++) {
        sumGas += gas[i];
        sumCost += cost[i];
        tank += gas[i] - cost[i];
        if (tank < 0) {
            start = i + 1;
            tank = 0;
        }
    }
    if (sumGas < sumCost) {
        return -1;
    } else 
    {
        return start;
    }
        }
};