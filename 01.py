import pandas as pd
lst_000_999 = []
alphabetList = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
alphabet1 = []
alphabet2 = []
alphabet3 = []

for i in range(10):
    for j in range(10):
        for k in range(10):
            lst_000_999.append(str(i) + str(j) + str(k))


for i in range(10):
    for j in range(10):
        for k in alphabetList:
            alphabet1.append(str(i) + str(j) + str(k))

for i in range(10):
    for j in alphabetList:
        for k in range(10):
            alphabet2.append(str(i) + str(j) + str(k))

for i in alphabetList:
    for j in range(10):
        for k in range(10):
            alphabet3.append(str(i) + str(j) + str(k))

final_list = alphabet1 + alphabet2 + alphabet3

# importing pandas as pd
# dictionary of lists
dict = {'Password': final_list}
df = pd.DataFrame(dict)
df.to_csv('Password.csv', index=False)
