from PIL import Image
codelib = "$@B%8&WM#*oahkbdpqwmzo0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;:,\"^`\'. "
count = len(codelib)
def transform(imf):
    picode=""
    w=imf.size[0];h=imf.size[1]
    r=0;g=0;b=0;grey=0;
    for y in range(0,h):
        for x in range(0,w):
            r=imf.getpixel((x,y))[0]
            g=imf.getpixel((x,y))[1]
            b=imf.getpixel((x,y))[2]
            grey=0.2126*r+0.7152*g+0.0722*b
            ch=codelib[int(((count-1)*grey)/256)]
            picode+=2*ch
        picode+="\n"
    return picode
filenum=int(input("请输入要转换的图片数量"))
tmp=open("draw.txt","a")
while filenum>0:
    imgname = input("请输入图片文件名")
    imgfile = Image.open(imgname)
    tmp.write(transform(imgfile))
    filenum-=1
tmp.close()
print("字符画已成功画好!")
command=input("按任意键结束")