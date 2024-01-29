# input
plastic = input()

# 플라스틱 set
s = {'0':0,'1':0,'2':0,'3':0,'4':0,'5':0,'6':0,'7':0,'8':0}

# count
for k in plastic:
  if k=='9':
    s['6']+=1
  else:
    s[k]+=1

# 6과 9가 섞여있기 때문에 계산
s['6'] = s['6']//2 + s['6']%2

#output
print(max(s.values()))
