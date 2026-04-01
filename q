#sdf

y=0
u=0
def qwe(a, solo, couple):
    if a % 2 == 0:
        print("couple")
        couple+=1
        even_numbers.append(a)
        
    else:
        print("solo")
        solo+=1
        odd_numbers.append(a)
    return solo,couple

def ewq(e):
    global y,u
    solo=0
    couple = 0
    for i in range(1,e+1):
        print(i)
        solo,couple=qwe(i,solo,couple)
        y,u = solo,couple
    print("solo", solo, "couple", couple)


def listqwe (e,r):
    q=0
    w=0
    i=0
    for i in range(0,e):
        q+=even_numbers[i]
    print(q)
    for j in range(0,r):
        w+=odd_numbers[j]
    print(w)


n = int(input("input"))
i = 1
even_numbers=[]#y
odd_numbers=[]#u

ewq(n)
listqwe(u,y)
print("max",max(even_numbers))
print("min",min(even_numbers))
print("-----")


print("max",max(odd_numbers))
print("min",min(odd_numbers))
print(even_numbers)
print(odd_numbers)









