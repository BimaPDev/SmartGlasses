; FUN_2c533720 @ 0x2c533720 size=86
  push {r4,r5,r6,r7,lr}
  ldr r4,[0x2c53378c]
  sub sp,#0xc
  ldr r6,[r3,#0x14]
  mov r5,r0
  ldr r7,[r3,#0xc]
  movs r0,#0x3
  smull r2,r3,r4,r6
  asrs r4,r6,#0x1f
  rsb r4,r4,r3, asr #0x2
  add.w r4,r4,r4, lsl #0x2
  sub.w r4,r6,r4, lsl #0x1
  bl 0x2c5e8cf4
  cbz r0,0x2c533760
  mov r1,r7
  mov r0,r5
  bl 0x2c5332dc
  movs r3,#0x1
  mov r2,r7
  mov r1,r4
  mov r0,r5
  add sp,#0xc
  pop.w {r4,r5,r6,r7,lr}
  b.w 0x2c532f74
  movs r4,#0x3
  ldr r0,[0x2c533790]
  ldr r3,[0x2c533794]
  movs r2,#0x92
  ldr r1,[0x2c533798]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  ldr r4,[0x2c53379c]
  bl 0x2c62c82c
