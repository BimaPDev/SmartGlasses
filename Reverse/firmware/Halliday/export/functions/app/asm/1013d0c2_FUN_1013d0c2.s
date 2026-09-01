; FUN_1013d0c2 @ 0x1013d0c2 size=36
  push {r3,r4,r5,r6,r7,lr}
  mov r6,r0
  mov r7,r1
  mov r4,r2
  adds r5,r2,r3
  cmp r4,r5
  bne 0x1013d0d4
  movs r0,#0x0
  b 0x1013d0e4
  mov r2,r7
  ldrb.w r1,[r4],#0x1
  mov r0,r6
  bl 0x1013d094
  adds r3,r0,#0x1
  bne 0x1013d0cc
  pop {r3,r4,r5,r6,r7,pc}
