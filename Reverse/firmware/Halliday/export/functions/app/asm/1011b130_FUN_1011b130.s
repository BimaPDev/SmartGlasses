; FUN_1011b130 @ 0x1011b130 size=28
  push {r3,r4,r5,r6,r7,lr}
  mov r7,r0
  mov r6,r1
  mov r5,r2
  movs r4,#0x0
  cmp r4,r5
  blt 0x1011b140
  pop {r3,r4,r5,r6,r7,pc}
  ldrb r1,[r6,r4]
  mov r0,r7
  bl 0x100577f4
  adds r4,#0x1
  b 0x1011b13a
