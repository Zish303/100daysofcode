class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
    head = ListNode()
    temp = head
    while(list1 or list2):
        if(list1):
            n1 = list1.val
        else:
            n1 = 1000
        if(list2):
            n2 = list2.val
        else:
            n2 = 1000
        if(n1 <= n2):
            r = n1
            list1 = list1.next
        else:
            r = n2
            list2 = list2.next
        newn = ListNode(r)
        temp.next = newn
        temp = newn
    return head.next
        