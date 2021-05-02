# problem:- https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

def designerPdfViewer(h, word):
    return max([h[ord(i)-97] for i in word])*len(word)
h = list(map(int,input().split()))
word = input()
print(designerPdfViewer(h, word))
