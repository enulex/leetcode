#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <vector>
#include <string>

#include "maximumSubArray.hpp"
#include "simplifyPath.hpp"
#include "strStr.hpp"

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
}


void test_str_str() {
    char haystack[] = "hello, world!!!";
    char needle[] = "world";

    StrStrSolution solution = StrStrSolution();
    char *res = solution.strStr(haystack, needle);
}


int main() {
    test_maxsubarray_solution();
    test_simplify_path();
    test_str_str();
    return 0;
}
