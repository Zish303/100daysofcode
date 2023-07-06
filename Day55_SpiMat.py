def spirallyTraverse(matrix, r, c): 
    top = 0
    bot = r
    lef = 0
    rig = c
    l = []
    while(lef < rig and top < bot):
        for i in range(lef, rig):
            l.append(matrix[top][i])
        top += 1
        for i in range(top, bot):
            l.append(matrix[i][rig - 1])
        rig -= 1
        if(top < bot):
            for i in range(rig-1, lef-1, -1):
                l.append(matrix[bot-1][i])
            bot -= 1
        if(lef < rig):
            for i in range(bot-1, top-1, -1):
                l.append(matrix[i][lef])
            lef += 1
    return l

m = [[6, 6, 2, 28, 2], [12, 26, 3, 28, 7], [22, 25, 3, 4, 23]]
print(m)
print(spirallyTraverse(m, 3, 5))