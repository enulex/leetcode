#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <vector>
#include <string>

#include "maximumSubArray.hpp"
#include "simplifyPath.hpp"
#include "strStr.hpp"
#include "mergeIntervals.hpp"
#include "swapNodeInPairs.hpp"

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


void test_merge_intervals() {
    MergeIntervalsSolution solution = MergeIntervalsSolution();

    vector<Interval> intervals;
    intervals.push_back(Interval(1, 2));
    intervals.push_back(Interval(3, 4));
    intervals.push_back(Interval(5, 6));
    intervals.push_back(Interval(1, 10));
    //intervals.push_back(Interval(1, 4));

    vector<Interval> result = solution.merge(intervals);
    //for (vector<Interval>::iterator it = result.begin(); it != result.end(); it++) {
        //cout << it->start << '\t' << it->end << endl;
    //}
}


void test_swap_node_in_pairs() {
    ListNode *result;
    int a[] = {0,7,2,6,6,8,0,3,4,5};
    SwapNodeInPairsSolution solution = SwapNodeInPairsSolution();

    ListNode *head = new ListNode(0);
    ListNode *tmp = head;
    ListNode *val = NULL;
    for (int i = 1; i < 10; i++) {
        val = new ListNode(a[i]);
        tmp->next = val;
        tmp = tmp->next;
    }
    tmp->next = NULL;
    tmp = head;
    
    result = solution.swapPairs(head);
    //while (result != NULL) {
        //cout << result->val << endl;
        //result = result->next;
    //}
    while (tmp != NULL) {
        delete tmp;
        tmp = tmp->next;
    }
}



int main() {
    test_maxsubarray_solution();
    test_simplify_path();
    test_str_str();
    test_merge_intervals();
    test_swap_node_in_pairs();
    return 0;
}
