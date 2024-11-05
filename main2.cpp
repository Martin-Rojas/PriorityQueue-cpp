#include <iostream>
#include <vector>


void bubbleSort(std::vector<int>& vec) {

    // for (int i = 0; i <= vec.size() - 1; ++i){
    //     for (int j = 0; j <= vec.size() - i - 1; ++j){
    //         if(vec[j] > vec[j + 1]){
    //             vec[j] = temp;
    //             vec[j] = vec[j + 1];
    //             vec[j + 1] = temp;
    //         }
            
    //     }
    // }
    for (int i = 0; i < vec.size() - 1; ++i) {
        // Last i elements are already sorted
        for (int j = 0; j < vec.size() - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                // Swap if the current element is greater than the next
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

int main(){
    std::vector<int> vec = {2,1,34,56,32,7,9};
    // std::vector<int> vec = {2,1,34};
    

    for (size_t i = 0; i <= vec.size() - 1; ++i){
        std::cout << vec[i] << " " ;}

    std::cout << "\n";

    bubbleSort(vec);


        for (int value : vec) {
        std::cout << value << " " ;
    }

    return 0;
}