def refueling(self, X):
    def bits(n):
        bt = 0
        while(n>0):
            bt += 1
            n //= 2
        return bt
    bts = bits(X)
    n1 = 2 ** (bts-1)
    n2 = 2 ** (bts)
    d1 = abs(n1-X)
    d2 = abs(n2-X)
    if(d2 <= d1):
        return n2
    return n1