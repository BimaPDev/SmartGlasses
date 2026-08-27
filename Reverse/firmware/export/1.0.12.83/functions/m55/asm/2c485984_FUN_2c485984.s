; FUN_2c485984 @ 0x2c485984 size=38
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r0,[0x2c485c0c]
  movs r1,#0xcb
  ldr r4,[0x2c485c10]
  ldr r3,[0x2c485c14]
  ldr r2,[0x2c485c18]
  ldr.w r10,[0x2c485c6c]
  ldr.w r11,[0x2c485c70]
  vpush {d8}
  sub sp,#0x2c
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
