; FUN_2c53c868 @ 0x2c53c868 size=38
  ldr r0,[r0,#0x20]
  cbz r0,0x2c53c878
  cbz r1,0x2c53c872
  b.w 0x2c638730
  ldr r1,[0x2c53c894]
  b.w 0x2c638730
  push {r4,lr}
  ldr r4,[0x2c53c898]
  sub sp,#0x8
  ldr r3,[0x2c53c89c]
  mov.w r2,#0x164
  ldr r1,[0x2c53c8a0]
  movs r0,#0x4
  str r4,[sp,#0x0]
  bl 0x2c62c82c
