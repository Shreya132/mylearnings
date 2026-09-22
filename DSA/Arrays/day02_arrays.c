#include <stdio.h>

int main() {

    // 1. LINEAR SEARCH
    int arr[6] = {3, 5, 6, 9, 2, 1};
    int target = 9;
    int found = 0;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == target) {
            printf("1. Linear Search: Target found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("1. Linear Search: Target not found\n");
    }


    // 2. COUNT OCCURRENCES
    int nums1[7] = {1, 2, 7, 4, 7, 9, 4};
    int target2 = 4;
    int count = 0;

    for (int i = 0; i < 7; i++) {
        if (nums1[i] == target2) {
            count++;
        }
    }

    printf("2. Count Occurrences: %d appears %d times\n",
           target2, count);


    // 3. FIND MAXIMUM
    int nums2[6] = {12, 45, 7, 89, 34, 21};
    int largest = nums2[0];

    for (int i = 1; i < 6; i++) {
        if (nums2[i] > largest) {
            largest = nums2[i];
        }
    }

    printf("3. Maximum: %d\n", largest);


    // 4. FIND MINIMUM
    int nums3[6] = {45, 12, 78, 3, 56, 9};
    int smallest = nums3[0];

    for (int i = 1; i < 6; i++) {
        if (nums3[i] < smallest) {
            smallest = nums3[i];
        }
    }

    printf("4. Minimum: %d\n", smallest);


    // 5. SECOND LARGEST
    int nums4[6] = {12, 45, 7, 89, 34, 21};
    int second;
    largest = nums4[0];
    second = nums4[0];

    for (int i = 1; i < 6; i++) {

        if (nums4[i] > largest) {
            second = largest;
            largest = nums4[i];
        }
        else if (nums4[i] > second && nums4[i] < largest) {
            second = nums4[i];
        }
    }

    printf("5. Second Largest: %d\n", second);


    return 0;
}