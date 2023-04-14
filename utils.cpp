float max(const int arr[], int arrSize) {
    float maxNum = static_cast<float>(arr[0]);
    for (int i = 1; i < arrSize; i++) {
        if (maxNum < static_cast<float>(arr[i]))
            maxNum = static_cast<float>(arr[i]);
    }
    return maxNum;
}

float min(const int arr[], int arrSize) {
    float minNum = static_cast<float>(arr[0]);
    for (int i = 1; i < arrSize; i++) {
        if (minNum > static_cast<float>(arr[i]))
            minNum = static_cast<float>(arr[i]);
    }
    return minNum;
}

float avg(const int arr[], int arrSize) {
    float avg{};
    for (int i{}; i < arrSize; i++) {
        avg += static_cast<float>(arr[i]);
    }
    avg /= static_cast<float>(arrSize);
    return avg;
}