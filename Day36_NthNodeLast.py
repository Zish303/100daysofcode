def getNthFromLast(head,n):
    c = 0
    temp = head
    while(temp):
        c += 1
        temp = temp.next
    pos = c - n
    if(pos < 0):
        return -1
    temp = head
    while(pos):
        temp = temp.next
        pos -= 1
    return temp.data