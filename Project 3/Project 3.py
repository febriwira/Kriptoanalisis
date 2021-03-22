import re
import os.path
from collections import Counter

print("Sang Putu Febri Wira Pratama")
print("1808561012")

def menu():
    print("Menu")
    print("1. Check Document")
    print("2. Check Frekuensi Karakter")
    print("3. Menukar Karakter")

def chooseMenu():
    menu = int(input("Pilih Menu: "))
    if menu == 1:
        checkDocument()
    elif menu == 2:
        checkFrekuensi()
    elif menu == 3:
        tukarKarakter()
    else:
        print("Pilihan salah!")
        chooseMenu()

def checkDocument():
    inputFile = input("Masukkan Nama Dokumen: ")
    if (inputFile.find(".txt") == -1):
        inputFile = inputFile+".txt"
    else:
        print("Dokumen tidak ada!")
        checkDocument()
    if (os.path.exists(inputFile)):
        obj_file = open(inputFile, "r")
        dokumen = obj_file.read()
        print("\nIsi dokumen: "+(dokumen))
        obj_file.close()
        kembaliMenu()

def checkFrekuensi():
    inputFile = input("Masukkan Nama Dokumen: ")
    if (inputFile.find(".txt") == -1):
        inputFile = inputFile+".txt"
    else:
        print("Dokumen tidak ada!")
        checkFrekuensi()
    if (os.path.exists(inputFile)):
        obj_file = open(inputFile, "r")
        dokumen = obj_file.read()
        search = input("Masukkan huruf: ")
        print("Frekuensi kemunculan",search,"sebanyak ",dokumen.count(search))
        obj_file.close()
        kembaliMenu()

def tukarKarakter():
    inputFile = input("Masukkan Nama Dokumen: ")
    if (inputFile.find(".txt") == -1):
        inputFile = inputFile+".txt"
    else:
        print("Dokumen tidak ada!")
        tukarKarakter()
    if (os.path.exists(inputFile)):
        with open(inputFile) as searching:
            search1 = input("\nMasukkan Karakter yang diganti: ")
            if search1 in searching.read():
                search2 = input("\nMasukkan Karakter yang baru: ")
                with open(inputFile, "r+") as final:
                    file = final.read()
                    file = re.sub(search1, search2, file)
                    final.seek(0)
                    final.write(file)
                    final.truncate()
            else:
                print("Karakter tidak ada!")
                tukarKarakter()
    kembaliMenu()

def kembaliMenu():
    choose = input("\nKembali ke Memu [Y/N]? ")
    if choose == "y" or "Y":
        menu()
        chooseMenu()
    elif choose == "n" or "N":
        print("Terima kasih telah menggunakan program ini!")
    else:
        print("Pilihan salah!")
        kembaliMenu()

menu()
chooseMenu()