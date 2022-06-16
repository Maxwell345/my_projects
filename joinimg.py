from PIL import Image,ImageDraw
import math
imgname1=input("请输入图片1名称：")
imgname2=input("请输入图片2名称：")
imgfile1=Image.open(imgname1)
width1=imgfile1.size[0];height1=imgfile1.size[1]
imgfile2=Image.open(imgname2)
width2=imgfile2.size[0];height2=imgfile2.size[1]
r=0;g=0;b=0;newx=0;newy=0
newim=Image.new("RGB",(width1+width2+2,height1+height2+2),(255,255,255))
paint=ImageDraw.Draw(newim)
for x in range(width1):
    for y in range(height1):
        r = imgfile1.getpixel((x,y))[0]
        g = imgfile1.getpixel((x,y))[1]
        b = imgfile1.getpixel((x,y))[2]
        paint.point(
            (x*2, y*2),
            (r, g, b)
        )
for x in range(width2):
    for y in range(height2):
        r = imgfile2.getpixel((x,y))[0]
        g = imgfile2.getpixel((x,y))[1]
        b = imgfile2.getpixel((x,y))[2]
        paint.point(
            (x*2+1, y*2+1),
            (r, g, b)
        )
newim.show()
newim.save(imgname1.split(".")[0]+imgname2.split(".")[0]+"_mixed.jpg")
input('图像处理完毕')