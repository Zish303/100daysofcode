def cyclicTree(self, N : int, edges : List[List[int]]) -> str:
    d = {}
    for e in edges:
        if e[0] in d:
            d[e[0]] += 1
        else:
            d[e[0]] = 1
        if e[1] in d:
            d[e[1]] += 1
        else:
            d[e[1]] = 1
    for i in d.values():
        if(i != 2):
            return 'Yes'
    return 'No'