def reverseList(self, head):
    if(head==None or head.next==None):
        return head
    rest = reverseList(head.next)
    head.next.next = head
    head.next = None
    return rest