for i in range(int(input())):
    count=0
    s=list(map(str,input().split()))
    s1=list(map(str,input().split()))
    s.sort();s1.sort();
    for j in range(0,len(s)):
        for k in range(0,len(s)):
            if (s[j]==s1[k]):count+=1
    if count>=2:print("similar")
    else:print("dissimilar")