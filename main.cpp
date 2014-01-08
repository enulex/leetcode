#include <iostream>
#include <assert.h>
#include <vector>
#include <string>

#include "maximumSubArray.hpp"
#include "simplifyPath.hpp"

using namespace std;


void test_maxsubarray_solution() {
    int a[] = {1};
    MaxSubArraySolution solution = MaxSubArraySolution();
    int max = solution.maxSubArray(a, 1);
    assert(max == 1);
}


void test_simplify_path() {
    SimplifyPathSolution solution = SimplifyPathSolution();
    //string s("/a/./b/../../c/");
    string s("/...");
    string result = solution.simplifyPath(s);
    cout << result;
}


int main() {
    test_maxsubarray_solution();
    test_simplify_path();
    return 0;
}
