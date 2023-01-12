import os

folder = input("Enter folder name (A new folder will be created to upload files): ")

os.mkdir(folder)

i = 1
while True:
    name = input("problem name: ")
    if(name == "jai shree ram"):
        break
    
    link = input("problem link: ")
    code = ""
    run = True
    print("Enter your code:\n")
    while run:
        code_inp = input()
        if(code_inp == "};"):
            run = False
        code += code_inp + '\n'

    os.mkdir(f"{folder}/Day {i}")

    with open(f"{folder}/Day {i}/{name}.cpp", "w") as f:
        f.write(code)
        f.close()
    
    with open(f"{folder}/Day {i}/__info.txt", "w") as f:
        f.write(f"Problem Link: {link}")
        f.close()

    print("\nCREATED\n")

    i+=1