from tkinter import *
from PIL import ImageTk
from bs4 import BeautifulSoup
import shutil
import requests

high_font_col="#D85D11"
bg="#E8E6E0"
fg="#2B2B2B"

root= Tk()
root.geometry('700x400')
root.config(bg=bg)

img_add='img.jpg'
img=ImageTk.PhotoImage(file= img_add)
image_=Label(root,image=img)
image_.place(x=100,y=170)
heading= Label(root,text='instagram Detailer',font=('',40),bg=bg,fg=high_font_col)
heading.place(x=150,y=10)
user_entry=Entry(root,font=('',30),bg=bg,fg=fg)
user_entry.place(x=100,y=70)
Data_Label=Label(root,text='This is built by \n "Techie programmer"',font=('',30),bg=bg,fg=fg)

Data_Label.place(x=300,y=170)

def ui():
    username=user_entry.get()
    page=requestsget(f"https://www.instagram.com/{username}/")
    soup=BeautifulSoup(page.text,'html.praser')
    data=soup.findAll(property='og:description')[0]['content']
    url=soup.findAll(property='og:image')[0]['content']
    response=requests.get(url,stream=True)
    with open(f'{username}.jpg','wb')as out_file:
        shutil.copyfileobj(response.raw,out_file)
    del response
    data=str(data).split('-')
    name=data[1].split('from')[1]
    Data_Label.config(text=name +'\n'+data[0].split('Followers')[0]+'Followers'+'\n'+data[0].split('Followers')[1].split('Following')[0].replace(',','')+'Following'+'\n'+data[0].split('Followers')[1].split('Following')[1].split('Posts')[0].replace(',','')+'Posts',justify=LEFT)
    
    img_add=f"{username}.jpeg"
    img=ImageTk.PhotoImage(file=img_add)
    image_.config(image=img)
    image_.image=img
    
user_Button=Button(root,text='Search',font=('',30),command=lambda:ui(),bg=bg,fg=fg)
user_Button.place(x=500,y=75)

root.mainloop()
