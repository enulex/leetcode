#include <string>
#include <vector>

using namespace std;


class SimplifyPathSolution {
    public:
        string simplifyPath(string path) {
            vector<string> tokens;
            string result;
            cout << path << endl;
            for (int pos = path.find("/", 0); pos != string::npos;) {
                string res = path.substr(0, pos);
                path.erase(0, pos + 1);
                if (res.compare(".") == 0) {
                    
                } else if (res.compare("..") == 0) {
                    if (!tokens.empty()) {
                        tokens.pop_back();
                    }
                } else {
                    tokens.push_back(res);
                }
            };
            
            for (vector<string>::iterator it = tokens.begin(); it != tokens.end(); it++) {
                result.append("/");
                result.append(*it);
                cout << result << endl;
            }
            return result;
        }
};
