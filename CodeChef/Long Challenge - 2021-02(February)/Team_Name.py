def union(list1,list2):
    temp=len(set(list1+list2))
    return temp
for t in range(int(input())):
    n=int(input())
    input_arr=input().split()
    ans=0
    except_first={}
    for i in input_arr:
        left=i[1:]
        if left in except_first:
            except_first[left].append(i[0])
        else:
            except_first[left]=[i[0]]
    body1=list(except_first.keys())
    for i in range(len(except_first)):
        for j in range(i+1,len(except_first)):
            length=union(except_first[body1[i]],except_first[body1[j]])
            ans+=(length-len(except_first[body1[i]]))*(length-len(except_first[body1[j]]))
    print(2*ans)