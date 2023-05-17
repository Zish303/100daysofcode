class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        newn = ListNode(0, None)
        prev = newn
        temp = head
        while(temp):
            if(temp.next == None or temp.val != temp.next.val):
                prev.next = temp
                prev = temp
            else:
                while(temp and temp.next and temp.val == temp.next.val):
                    temp = temp.next
            temp = temp.next
        prev.next = None
        return newn.next