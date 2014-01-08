#include <string>
#include <vector>

using namespace std;


class SimplifyPathSolution {
    public:
        string simplifyPath(string path) {
            vector<string> tokens;
            string result;
            if (path.compare(path.length()-1, 1, "/") != 0) {
                path.append("/");
            }

            for (int pos = 0; pos != string::npos; pos = path.find("/", 0)) {
                string res = path.substr(0, pos);
                path.erase(0, pos + 1);
                if (res.empty()) {
                } else if (res.compare("..") == 0) {
                    if (!tokens.empty()) {
                        tokens.pop_back();
                    }
                } else if (res.compare(".") == 0) {
                } else {
                    tokens.push_back(res);
                }
            };
            
            if (tokens.empty()) {
                return string("/");
            }
            for (vector<string>::iterator it = tokens.begin(); it != tokens.end(); it++) {
                result.append("/");
                result.append(*it);
            }
            return result;
        }
};
