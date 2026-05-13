#include <iostream>
#include <vector>

int main() {
    int tab1[] = {1, 3, 5, 7};
    int tab2[] = {2, 4, 6, 8, 10};

    int n1 = sizeof(tab1) / sizeof(tab1[0]);
    int n2 = sizeof(tab2) / sizeof(tab2[0]);
    
    int tab3[n1 + n2];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (tab1[i] < tab2[j]) {
            tab3[k++] = tab1[i++];
        } else {
            tab3[k++] = tab2[j++];
        }
    }

    while (i < n1) {
        tab3[k++] = tab1[i++];
    }

    while (j < n2) {
        tab3[k++] = tab2[j++];
    }

    std::cout << "Tableau fusionne : ";
    for (int x = 0; x < n1 + n2; x++) {
        std::cout << tab3[x] << " ";
    }
    std::cout << std::endl;

    return 0;
}