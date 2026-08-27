; FUN_14078458 @ 0x14078458 size=50
  push {r4,lr}
  mov r4,r0
  sub sp,#0x8
  ldr.w r0,[r0,#-0x9]
  str.w lr,[sp,#0x4]
  bl 0x14078274
  movs r0,#0x1
  bl 0x14078370
  movs r0,#0x3
  bl 0x14078370
  movw r2,#0x213
  ldr r1,[sp,#0x4]
  sub.w r0,r4,#0x15
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x14075428
