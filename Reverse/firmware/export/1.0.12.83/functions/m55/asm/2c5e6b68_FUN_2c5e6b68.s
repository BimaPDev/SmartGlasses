; FUN_2c5e6b68 @ 0x2c5e6b68 size=34
  push {r4,r5,r6,lr}
  ldr r4,[0x2c5e6b8c]
  movs r5,#0x0
  ldr r3,[0x2c5e6b90]
  add.w r6,r4,#0x1c
  b 0x2c5e6b7a
  ldr.w r3,[r4],#0x4
  ldr r3,[r3,#0x44]
  movs r0,#0x0
  blx r3
  cmp r4,r6
  add r5,r0
  bne 0x2c5e6b76
  mov r0,r5
  pop {r4,r5,r6,pc}
