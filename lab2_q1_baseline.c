// TODO : 
"lw t0, 0(%[h])\n\t"
"lw t1, 0(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 0(%[y])\n\t"

"lw t0, 2(%[h])\n\t"
"lw t1, 2(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 2(%[y])\n\t"

"lw t0, 4(%[h])\n\t"
"lw t1, 4(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 4(%[y])\n\t"

"lw t0, 6(%[h])\n\t"
"lw t1, 6(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 6(%[y])\n\t"

"lw t0, 8(%[h])\n\t"
"lw t1, 8(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 8(%[y])\n\t"

"lw t0, 10(%[h])\n\t"
"lw t1, 10(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 10(%[y])\n\t"

"lw t0, 12(%[h])\n\t"
"lw t1, 12(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 12(%[y])\n\t"

"lw t0, 14(%[h])\n\t"
"lw t1, 14(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 14(%[y])\n\t"

"lw t0, 16(%[h])\n\t"
"lw t1, 16(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 16(%[y])\n\t"

"lw t0, 18(%[h])\n\t"
"lw t1, 18(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 18(%[y])\n\t"

"lw t0, 20(%[h])\n\t"
"lw t1, 20(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 20(%[y])\n\t"

"lw t0, 22(%[h])\n\t"
"lw t1, 22(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 22(%[y])\n\t"

"lw t0, 24(%[h])\n\t"
"lw t1, 24(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 24(%[y])\n\t"

"lw t0, 26(%[h])\n\t"
"lw t1, 26(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 26(%[y])\n\t"

"lw t0, 28(%[h])\n\t"
"lw t1, 28(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 28(%[y])\n\t"

"lw t0, 30(%[h])\n\t"
"lw t1, 30(%[x])\n\t"
"add t2, t0, t1\n\t"
"sw t2, 30(%[y])\n\t"

"addi %[arith_cnt], %[arith_cnt], 16\n\t"
"addi %[lw_cnt], %[lw_cnt], 32\n\t"
"addi %[sw_cnt], %[sw_cnt], 16\n\t"