class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
    head = ListNode()
    temp = head
    c = 0
    while(l1 or l2 or c):
        if(l1):
            n1 = l1.val
            l1 = l1.next
        else:
            n1 = 0
        if(l2):
            n2 = l2.val
            l2 = l2.next
        else:
            n2 = 0
        r = n1 + n2 + c
        c = r // 10
        r = r % 10
        newn = ListNode(r)
        temp.next = newn
        temp = newn
    return head.next
        