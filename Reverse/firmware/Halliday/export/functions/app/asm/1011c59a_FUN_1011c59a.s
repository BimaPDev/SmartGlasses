; FUN_1011c59a @ 0x1011c59a size=26
  push {r3,r4,r5,lr}
  mov r5,r1
  cmp r3,r5
  mov r1,r2
  mov r4,r3
  bhi 0x1011c5b0
  mov r2,r3
  bl 0x1011ea40
  mov r0,r4
  pop {r3,r4,r5,pc}
  movs r4,#0x0
  b 0x1011c5ac
