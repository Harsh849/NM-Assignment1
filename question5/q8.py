fiblist = [0,1]
for i in range(n - 1):
    fiblist.append(fiblist[i] + fiblist[i+1])
print (fiblis)

gratio = [fiblist[i]/float(fiblist[i-1]) for i in range(2,len(fiblist))]
print (gratio)


