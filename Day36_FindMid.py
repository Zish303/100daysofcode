def findMid(self, head):
    f = head
    s = head
    while(f and f.next):
        s = s.next
        f = f.next
        f = f.next
    return s.data