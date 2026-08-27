; FUN_2c5cefd8 @ 0x2c5cefd8 size=30
  push {r4,lr}
  ldr r4,[r0,#0xc]
  sub sp,#0x8
  cbz r4,0x2c5ceffe
  ldr r0,[0x2c5cf004]
  movw r2,#0x255
  ldr r3,[0x2c5cf008]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r1,[0x2c5cf00c]
  bl 0x2c62c82c
  add sp,#0x8
  pop {r4,pc}
