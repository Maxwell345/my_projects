import tkinter
import winsound
mainform=tkinter.Tk()
mainform.geometry("250x100")
mainform.title("按钮")
mainform["background"]="LightSlateBlue"
btn1=tkinter.Button(mainform,text="1",fg="black")
btn2=tkinter.Button(mainform,text="2",fg="black")
btn3=tkinter.Button(mainform,text="3",fg="black")
btn4=tkinter.Button(mainform,text="4",fg="black")
btn5=tkinter.Button(mainform,text="5",fg="black")
btn6=tkinter.Button(mainform,text="6",fg="black")
btn7=tkinter.Button(mainform,text="7",fg="black")
btn1.pack(side="left",padx="1m")
btn2.pack(side="left",padx="1m")
btn3.pack(side="left",padx="1m")
btn4.pack(side="left",padx="1m")
btn5.pack(side="left",padx="1m")
btn6.pack(side="left",padx="1m")
btn7.pack(side="left",padx="1m")
colorlist=["salmon","orange","yellow","green","pink","skyblue","cyan"]
frequency=[262,294,330,349,392,440,494]
def titleclr(event):
    pos=int(event.widget["text"])-1
    event.widget["activeforeground"]=colorlist[pos]
def playsound(evt):
    winsound.Beep(frequency[int(evt.widget["text"])-1],600)
btn1.bind("<Button-1>",playsound)
btn2.bind("<Button-1>",playsound)
btn3.bind("<Button-1>",playsound)
btn4.bind("<Button-1>",playsound)
btn5.bind("<Button-1>",playsound)
btn6.bind("<Button-1>",playsound)
btn7.bind("<Button-1>",playsound)
mainform.mainloop()
