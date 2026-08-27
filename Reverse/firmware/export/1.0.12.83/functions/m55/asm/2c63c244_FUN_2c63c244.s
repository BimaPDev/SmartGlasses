; FUN_2c63c244 @ 0x2c63c244 size=36
  push {r4,r5,lr}
  sub sp,#0xc
  bl 0x2c5e1150
  cbz r0,0x2c63c252
  add sp,#0xc
  pop {r4,r5,pc}
  ldr r0,[0x2c63c308]
  mov.w r1,#0x1f4
  ldr r5,[0x2c63c30c]
  ldr r3,[0x2c63c310]
  ldr r2,[0x2c63c314]
  strd r0,r5,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
