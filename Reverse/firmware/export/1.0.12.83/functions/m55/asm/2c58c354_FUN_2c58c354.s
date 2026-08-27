; FUN_2c58c354 @ 0x2c58c354 size=22
  push {lr}
  sub sp,#0xc
  str r1,[sp,#0x4]
  add r1,sp,#0x4
  bl 0x2c58c310
  cbz r0,0x2c58c364
  ldr r0,[r0,#0x8]
  add sp,#0xc
  pop.w pc
