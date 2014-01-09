#include <vector>
#include <algorithm>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class MergeIntervalsSolution {
    public:
        static bool Comp(const Interval &a, const Interval &b) {
            return a.start < b.start;
        }

        vector<Interval> merge(vector<Interval> &intervals) {
            vector<Interval> result;
            if (intervals.empty()) {
                return result;
            }
            sort(intervals.begin(), intervals.end(), MergeIntervalsSolution::Comp);
            Interval tmp = *(intervals.begin());
            for (vector<Interval>::iterator it = intervals.begin() + 1;
                    it != intervals.end(); it++) {
                if (tmp.end >= it->start) {
                    if (tmp.end < it->end) {
                        tmp.end = it->end;
                    }
                } else {
                    result.push_back(tmp);
                    tmp = *it;
                }
            }
            result.push_back(tmp);

            return result;
        }
};
