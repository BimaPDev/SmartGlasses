; FUN_2c4eda80 @ 0x2c4eda80 size=32
  push {r4,lr}
  ldr r4,[0x2c4edaac]
  sub sp,#0x8
  ldr r0,[r4,#0x0]
  cbz r0,0x2c4eda8e
  add sp,#0x8
  pop {r4,pc}
  ldr r0,[0x2c4edab0]
  mov.w r1,#0x118
  ldr r3,[0x2c4edab4]
  ldr r2,[0x2c4edab8]
  str r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
