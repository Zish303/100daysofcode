def intersetPoint(head1,head2):
    t1 = head1
    t2 = head2
    while(t1 != t2):
        if(t1 == None):
            t1 = head2
        else:
            t1 = t1.next
        if(t2 == None):
            t2 = head1
        else:
            t2 = t2.next
    if(t1):
        return t1.data
    return -1