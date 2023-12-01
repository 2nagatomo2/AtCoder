box = [0, 4, 16, 9, -1, 2, 8, 6, 5, 10, 0]

box[10] = box[5] - box[1]

if box[10] > 0:
    box[2] = box[9] + box[8]
box[3] = box[6] + box[7]

while(box[3] <= box[2]):
    box[8] = box[1] + box[4]
    box[2] = box[9] + box[8]
    box[3] = box[6] + box[7]

print(box.index(3))