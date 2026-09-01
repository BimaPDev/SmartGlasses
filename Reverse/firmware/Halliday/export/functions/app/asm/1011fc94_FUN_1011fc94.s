; FUN_1011fc94 @ 0x1011fc94 size=38
  push {r0,r1,r2,r3,r4,lr}
  movs r2,#0x0
  ldr r3,[r0,#0x40]
  str r2,[sp,#0xc]
  cbz r3,0x1011fcb4
  ldrb.w r0,[r0,#0x46]
  str r1,[sp,#0x8]
  strh.w r0,[sp,#0x6]
  movs r0,#0x1
  add r1,sp,#0x4
  strh.w r0,[sp,#0x4]
  mov r0,r2
  blx r3
  add sp,#0x14
  pop.w pc
