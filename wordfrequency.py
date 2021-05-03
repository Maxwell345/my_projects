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
new=""
for i in words:
    new+=i;new+=" "
    new+=str(words.count(i));new+=" "
    new+="\n"
q=open("article.txt","a")
q.write(new)
q.close()
