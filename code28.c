int rotateLeft(int num, unsigned int rotation)
{
    rotation %= INT_BITS;

    while(rotation--)
        num = (num << 1) | (1 & (num >> INT_BITS));

    return num;
}

int rotateRight(int num, unsigned int rotation)
{
    rotation %= INT_BITS;

    while(rotation--)
        num = ((num >> 1) & (~(1 << INT_BITS)) | ((num & 1) << INT_BITS));

    return num;
}