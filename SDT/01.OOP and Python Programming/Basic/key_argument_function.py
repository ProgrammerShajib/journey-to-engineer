
def k_argument(n1,n2,**n):
    # print(n);
    for index, (key,value) in enumerate(n.items()):
        print(f"{index}, {key} = {value} ")


k_argument(n1 = 5,n2 = 3, n3 = 5, n4= 6,n5 = 7, n6 = 8)