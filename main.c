#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dugum {
    int deger;
    struct dugum* sol;
    struct dugum* sag;
} Dugum;

Dugum* agacOlustur(char* preorder, char* inorder, int uzunluk) {
    if (uzunluk <= 0) {
        return NULL;
    }

    // Preorder dizesinden kök düðümü bulun
    Dugum* kok = (Dugum*)malloc(sizeof(Dugum));
    kok->deger = preorder[0] - '0';

    //inorder dizisinde kök düðüm dizisini bulun
    int i;
    for (i = 0; i < uzunluk; i++) {
        if (inorder[i] == preorder[0]) {
            break;
        }
    }

    // Sol ve sað alt aðaçlarý yinelemeli olarak oluþturun
    kok->sol = agacOlustur(preorder + 1, inorder, i);
    kok->sag = agacOlustur(preorder + i + 1, inorder + i + 1, uzunluk - i - 1);

    return kok;
}

void printInorder(Dugum* kok) {
    if (kok == NULL) {
        return;
    }

    printInorder(kok->sol);
    printf("%d ", kok->deger);
    printInorder(kok->sag);
}

int main() {
    char preorder[] = "12473568";
    char inorder[] = "47215386";
    int uzunluk = strlen(preorder);

    Dugum* kok = agacOlustur(preorder, inorder, uzunluk);

    printf("Olusturulan agacin sirasiz gecisi: ");
    printInorder(kok);

    return 0;
}
