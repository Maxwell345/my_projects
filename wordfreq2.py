fp=open("article.txt","r",encoding='utf-8')
s=fp.read()
fp.close()
s=s.replace("?"," ")
s=s.replace("!"," ")
s=s.replace("."," ")
s=s.replace(","," ")
s=s.replace(";"," ")
s=s.replace("\""," ")
words=s.split(" ")
size=len(words)
for i in range(1,size):
    r=words[i];j=i-1
    while j>=0 and words.count(r)>words.count(words[j]):
        words[j+1]=words[j]
        j-=1
    words[j+1]=r
new=""
for i in words:
    new+=i;new+=" "
    new+=str(words.count(i));new+=" "
    new+="\n"
q=open("article.txt","a")
q.write(new)
q.close()
