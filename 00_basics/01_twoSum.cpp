#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::cout << "size: " << nums.size() << '\n';
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (result.size() != 0) {
                break;
            }
            for (int j = 0; j < nums.size(); j++) {
                if (i == j) {
                    continue;
                }
                std::cout << "" << nums[i] << "/" << nums[j] << '\n';
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};

int main(int argc, const char *argv[])
{
	// input init
	
	vector<int> n;
	n.push_back(2);
	n.push_back(7);
	n.push_back(11);
	n.push_back(15);
	
	int t = 9;
	
	// solution processing
	
	Solution s;
	vector<int> r = s.twoSum(n, t);

	// output pretty result
	std::cout << "[";
	for (int i = 0; i < r.size(); i++) {
		std::cout << "" << r[i];
		if (i != r.size() - 1) {
			std::cout << ", ";
		}
	}
	std::cout << "]" << '\n';
	
	return 0;
}

