; FUN_10121a00 @ 0x10121a00 size=24
  push {r3,r4,r5,lr}
  mov r4,r0
  bl 0x10121996
  cmp r0,#0x1
  beq 0x10121a16
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x101219ac
  pop {r3,r4,r5,pc}
