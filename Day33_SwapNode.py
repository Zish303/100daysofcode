def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        pre = head
        cur = head
        prev = head
        cur = head.next if(head != None) else None
        if(cur != None):
            pre.next = cur.next
            cur.next = pre
            head = cur
            prev = pre
            pre = pre.next
            cur = pre.next if(pre != None) else None

        while(cur != None):
            pre.next = cur.next
            cur.next = pre
            prev.next = cur
            prev = pre
            pre = pre.next
            cur = pre.next if(pre != None) else None
        return head