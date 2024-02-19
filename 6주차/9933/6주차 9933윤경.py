def find_password(words):
    for word in words:
        reversed_word=word[::-1]
        if reversed_word in words:
            return len(word),word[len(word)//2]

        #입력 받는 부분
        N=int(input("단어의 수를 입력하세요:"))
        word_list=[]
        for _in range(N):
            word=input("단어를 입력하세요:")
            word_list.append(word)

        length,middle=find_password(word_list)
        print("비밀번호의 길이",length,"가운데 글자:",middle)
