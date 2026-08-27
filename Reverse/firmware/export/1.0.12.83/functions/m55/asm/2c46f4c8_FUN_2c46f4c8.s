; FUN_2c46f4c8 @ 0x2c46f4c8 size=60
  push {r4,r5,lr}
  sub sp,#0x14
  bl 0x2c478b68
  cbz r0,0x2c46f4fc
  ldr.w r3,[r0,#0x80]
  blx r3
  cmp r0,#0x2
  bhi 0x2c46f500
  ldr r3,[0x2c46f504]
  ldr.w r2,[r3,r0,lsl #0x2]
  ldr r5,[0x2c46f508]
  movw r1,#0x4f3
  ldr r4,[0x2c46f50c]
  ldr r3,[0x2c46f510]
  strd r0,r2,[sp,#0x8]
  strd r4,r5,[sp,#0x0]
  ldr r2,[0x2c46f514]
  movs r0,#0x4
  bl 0x2c673d88
  add sp,#0x14
  pop {r4,r5,pc}
  movs r2,#0x0
  b 0x2c46f4e2
