for(int i = 0; i < 10 ; i++){
    printf("Result= %d\n", (i*x)); //multiply i by x BOTH

        #ifdef enr
        //inner
        printf("Result= %d\n", (i)); //multiply i by x
    #endif
}
