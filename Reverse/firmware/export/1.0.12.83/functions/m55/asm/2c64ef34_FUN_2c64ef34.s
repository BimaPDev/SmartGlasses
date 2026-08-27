; FUN_2c64ef34 @ 0x2c64ef34 size=42
  push {r0,r1,r2,r4,r5,lr}
  ldr r5,[sp,#0x18]
  mov r4,r2
  movs r0,#0x0
  ldr r1,[0x2c64ef60]
  strd r2,r3,[sp,#0x0]
  cbz r5,0x2c64ef56
  cmp.w r0,#0x110000
  add.w r5,r5,#0xffffffff
  bcs 0x2c64ef56
  mov r0,sp
  bl 0x2c64e81e
  b 0x2c64ef42
  ldr r0,[sp,#0x0]
  subs r0,r0,r4
  add sp,#0xc
  pop {r4,r5,pc}
