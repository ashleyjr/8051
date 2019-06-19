import sys

CHECK_SIZE = 128

if "__main__" == __name__:
    f = open(sys.argv[1],'r')
    g = open(sys.argv[1].replace('.c','.checks'), 'w+')
    found = False
    checks = 0
    for j in f.read().split('\n'):
        if found and ("0x" in j):
            g.write("1"+j.split("0x")[1].lower() + "\n")
            checks = checks + 1
        if "// Check Uart" in j:
            found = True
    while(checks < 128):
        g.write("000\n")
        checks = checks + 1
    f.close()
    g.close()