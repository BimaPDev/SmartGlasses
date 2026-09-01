; FUN_10055e80 @ 0x10055e80 size=20
  push {r0,r1,r2,r4,r5,lr}
  subs r4,r0,#0x4
  mov r5,r0
  cmp r4,#0x2f
  bhi 0x10055eec
  tbb [pc,r4]
  movs r0,#0x0
  add sp,#0xc
  pop {r4,r5,pc}
