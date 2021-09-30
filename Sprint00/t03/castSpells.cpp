int castFloatToInt(float number){
    int a = (int)  number;
    return a;    
}

int* castToNonConstIntPtr(const int* ptr){
    int* a = const_cast<int*>(ptr);
    return a;
}