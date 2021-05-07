from random import*
import time
abstn="时光,记忆,余香,悲伤,旅行,脚步,青春,回忆,孤独,背影,绝望,幻象,曙光"
places="暖阳,海洋,森林,秋风,霞光,落日,月色,雪原,夏夜,雨季,黑暗,黎明,烈火,冰雪,星空,荒野"
prep="中,里,上"
vt="融入,冲洗,烙印在,燃起,夹杂着,腾向,坠落在,离开";vi="流淌,存留,消亡,燃烧,沉睡,坠落,嘶吼,回眸"
obj="旅客,家人,伴侣,灵魂,人生,青春,成功,理想,远方"
adj="寂静,迷惘,朦胧,荒芜,模糊,梦幻,娇艳,温馨,无尽"
testnum=int(input("生成诗歌数量:"))
print("  ")
while testnum:
    rp=5
    while rp:
        print(choice(abstn.split(",")),end=",\n")
        print("在"+choice(places.split(","))\
              +choice(prep.split(","))+\
              choice(vi.split(",")),end=";\n")
        print(choice(adj.split(","))+"的"+choice(abstn.split(","))\
              +choice(vt.split(","))+choice(obj.split(",")),end="。\n")
        rp-=1
    print("\n")
    testnum-=1
time.sleep(27)