#include <string.h>

class StrStrSolution {
    public:
        // haystack = "hello, world!!!"
        // needle = "world"
        // return "world!!!"
        char *strStr(char *haystack, char *needle) {
            int haystack_len = strlen(haystack);
            int needle_len = strlen(needle);
            if (needle_len > haystack_len) {
                return NULL;
            }
            if (needle_len == 0) {
                return haystack;
            }

            for (int i = 0; i <= (haystack_len - needle_len); i++ ) {
                if (strncmp(haystack, needle, needle_len) == 0) {
                    return haystack;
                }
                haystack++;
            }
        }
};
