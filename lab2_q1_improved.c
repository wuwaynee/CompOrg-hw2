// TODO :
"li t1, 64\n\t"
"addi %[lw_cnt], %[lw_cnt], 1\n\t"
"vsetvli t0, t1, e16, m4, ta, ma\n\t"
"addi %[others_cnt], %[others_cnt], 1\n\t"
"vle16.v v0, (%[h])\n\t"
"addi %[lw_cnt], %[lw_cnt], 1\n\t"
"vle16.v v4, (%[x])\n\t"
"addi %[lw_cnt], %[lw_cnt], 1\n\t"
"vadd.vv v8, v0, v4\n\t"
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
"vse16.v v8, (%[y])\n\t"
"addi %[sw_cnt], %[sw_cnt], 1\n\t"