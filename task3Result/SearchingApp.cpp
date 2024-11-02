#include <iostream>
#include "Searching.cpp"

int main() {

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //INICIALIZATION VECTOR:
    std::vector<int> vec = { 10,20,30,30,30,40,40,50,50,50,50,60,70,70 }; // Already sorted

    int target;
    std::cout << "ENTER THE VALUE OF THE TARGET VECTOR: ";
    std::cin >> target;

    //BINARY SEARCH ARRAY:
    int index = binarySearch(vec, target);
    if (index != -1) {
        std::cout << "Binary search. Element found at index: " << index << std::endl;
    }
    else {
        std::cout << "Binary search. Element not found in the vector." << std::endl;
    }

    //LINEAR SEARCH VECTOR:
    index = linearSearch(vec, target);
    if (index != -1) {
        std::cout << "Linear search. Element found at index: " << index << std::endl;
    }
    else {
        std::cout << "Linear search. Element not found in the vector." << std::endl;
    }


    //BINARY SEARCH VECTOR: NEW
    index = binarySearchFirst(vec, target);
    if (index != -1) {
        std::cout << "Binary First search (first). Element found at index: " << index << std::endl;
    }
    else {
        std::cout << "Binary First search (first). Element not found in the vector." << std::endl;
    }


    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //INITIALIZATION ARRAY:
    std::array<int, 11> arr = { 10,20,30,30,30,40,50,50,50,60,70 };

    int target2;
    std::cout << "ENTER THE VALUE OF THE TARGET FOR ARRAY: ";
    std::cin >> target2;

    //BINARY SEARCH ARRAY:
    int index2 = binarySearch(arr, target2);
    if (index2 != -1) {
        std::cout << "Binary search. Element found at index: " << index2 << std::endl;
    }
    else {
        std::cout << "Binary search. Element not found in the vector." << std::endl;
    }

    //LINEAR SEARCH ARRAY:
    index2 = linearSearch(arr, target2);
    if (index2 != -1) {
        std::cout << "Linear search. Element found at index: " << index2 << std::endl;
    }
    else {
        std::cout << "Linear search. Element not found in the vector." << std::endl;
    }

    //BINARY SEARCH ARRAY:NEW!!!!!!!!!!!!
    index2 = binarySearchFirst(arr, target2);
    if (index2 != -1) {
        std::cout << "Binary First search (first). Element found at index: " << index2 << std::endl;
    }
    else {
        std::cout << "Binary First search (first). Element not found in the vector." << std::endl;
    }

    return 0;

}