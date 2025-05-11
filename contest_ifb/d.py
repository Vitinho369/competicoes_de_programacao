c = input()

b= c.split(" ")

if ('Sad' in b ) or ('SAD' in b) or ('sad' in b) or ('sad,' in b) or ('sad.' in b)  or ('sad!' in b)  or ('sad?' in b) or ('Sad,' in b ) or ('Sad!' in b ) or ('Sad.' in b ) or ('Sad?' in b ) or ('SAD,' in b) or ('SAD.' in b) or ('SAD!' in b) or ('SAD?' in b):
    if(("DANIEL" in b) or ("Daniel" in b) or ("daniel" in b) ):
        if ('Sad' in b ):
            b.insert(b.index("Sad"), "Saad")
            b.remove("Sad")
        elif ('SAD' in b):
            b.insert(b.index("SAD"), "SAAD")
            b.remove("SAD")
        elif ('sad' in b):
            b.insert(b.index("sad"), "saad")
            b.remove("sad")
        elif ('sad,' in b):
            b.insert(b.index("sad,"), "saad,")
            b.remove("sad,")
        elif ('sad.' in b):
            b.insert(b.index("sad."), "saad.")
            b.remove("sad.")
        elif ('sad!' in b):
            b.insert(b.index("sad!"), "saad!")
            b.remove("sad!")
        elif ('sad?' in b):
            b.insert(b.index("sad?"), "saad?")
            b.remove("sad?")
        elif ('Sad,' in b):
            b.insert(b.index("Sad,"), "Saad,")
            b.remove("Sad,")
        elif ('Sad!' in b):
            b.insert(b.index("Sad!"), "Saad!")
            b.remove("Sad!")
        elif ('Sad.' in b):
            b.insert(b.index("Sad."), "Saad.")
            b.remove("Sad.")
        elif ('Sad?' in b):
            b.insert(b.index("Sad?"), "Saad?")
            b.remove("Sad?")
        elif ('SAD,' in b):
            b.insert(b.index("SAD,"), "SAAD,")
            b.remove("SAD,")
        elif ('SAD.' in b):
            b.insert(b.index("SAD."), "SAAD.")
            b.remove("SAD.")
        elif ('SAD!' in b):
            b.insert(b.index("SAD!"), "SAAD!")
            b.remove("SAD!")
        elif ('SAD?' in b):
            b.insert(b.index("SAD?"), "SAAD?")
            b.remove("SAD?")

c =""
for texto in b:
    c+=texto + " "

print(c)