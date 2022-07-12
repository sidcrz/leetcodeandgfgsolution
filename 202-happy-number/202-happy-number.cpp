class Solution {
public:
    // Detect Cycle using  Floyd Cycle detection Algorithm(it is using 2 pointers(slow & fast pointer))
    // if we detect cycle then it is not a happy number otherwise yes
    // it can also solved by using HashMap or Set
    int solve(int n) {
        int sum = 0;
        while(n > 0) {
			int r = n%10;
            sum += r*r;
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int slow = n, fast = n;
        do {
            slow = solve(slow);
            fast = solve(solve(fast));
            if(fast == 1) return 1;
        } while(slow != fast);
        return 0;
    }
};