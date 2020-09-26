DECL int
TEMPLATE(compare_asc)(const void* a, const void* b)
{
    const T* aa = a;
    const T* bb = b;
    return *aa > *bb;
}

DECL int
TEMPLATE(compare_dec)(const void* a, const void* b)
{
    const T* aa = a;
    const T* bb = b;
    return *aa < *bb;
}

#undef T