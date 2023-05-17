def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        pre = head
        temp = head.next if(head) else None
        while(temp):
            if(temp.val == pre.val):
                if(temp.next == None):
                     pre.next = None
                     break
                temp = temp.next
                continue
            pre.next = temp
            pre = temp
            temp = temp.next
        return head