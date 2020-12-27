class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currentGas = 0;
        int totalGas = 0;
        int startPoint = 0;

        for (int i = 0; i < gas.size(); ++i) {
            currentGas += gas[i] - cost[i];
            totalGas += gas[i] - cost[i];

            if (currentGas < 0) {
                currentGas = 0;
                startPoint = i + 1;
            }
        }

        if (totalGas < 0) {
            return -1;
        }

        return startPoint;
    }
};
