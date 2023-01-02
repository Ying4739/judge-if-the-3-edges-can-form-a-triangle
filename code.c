int main()
{
    int x, y, z;
    
    printf("Input values from small to big to justify if them could form a triangle!\n");
    scanf("%d %d %d", &x, &y, &z);
    if ( x + y > z)
     printf("yes!");
    else
     printf("no!");
     
    return 0;
}
