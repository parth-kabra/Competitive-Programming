R=lambda:map(int,raw_input().split())[1:]
print ["Oh, my keyboard!","I become the guy."][input()==len(set(R()).union(set(R())))]