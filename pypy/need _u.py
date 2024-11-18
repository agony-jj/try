with open("C:\codeman\.vscode\pypy\_bealone.txt","r",encoding="utf-8") as f:
    lines = f.readlines()
    for line in lines:
        print(line)
    f.write("\n好听的音乐")
    print(f.readlines())