def removeDuplicates(head):
    pre = head
    temp = head
    temp = temp.next if(temp) else None
    while(temp):
        if(temp.data == pre.data):
            pre.next = temp.next
            temp = pre.next
        else:
            pre = pre.next
            temp = temp.next
    return head