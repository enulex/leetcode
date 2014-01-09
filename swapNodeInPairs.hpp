
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class SwapNodeInPairsSolution {
    public:
        ListNode *swapPairs(ListNode *head) {

            if (!head) {
                return NULL;
            } else if (!head->next) {
                return head;
            }

            ListNode *result = head->next;
            ListNode *prev = NULL, *next, *left, *right;

            while (head != NULL) {
                left = head;
                right = head->next;
                if (!right) {
                    break;
                }
                next = right->next;

                left->next = next;
                right->next = left;
                if (prev != NULL) {
                    prev->next = right;
                }

                head = next;
                prev = left;
            }

            return result;
        }
};
