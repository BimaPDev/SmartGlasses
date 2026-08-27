; FUN_140db9be @ 0x140db9be size=36
  push {r3,r4,r5,r6,r7,lr}
  mov r6,r0
  mov r7,r1
  mov r4,r2
  adds r5,r2,r3
  cmp r4,r5
  bne 0x140db9d0
  movs r0,#0x0
  b 0x140db9e0
  mov r2,r7
  ldrb.w r1,[r4],#0x1
  mov r0,r6
  bl 0x140db990
  adds r3,r0,#0x1
  bne 0x140db9c8
  pop {r3,r4,r5,r6,r7,pc}
