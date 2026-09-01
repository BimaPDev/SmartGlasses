; FUN_10138ace @ 0x10138ace size=28
  push {r0,r1,r2,r3,r4,lr}
  ldr r3,[r0,#0x14]
  cbz r3,0x10138ae4
  ldr r3,[r3,#0xc]
  cbz r3,0x10138ae4
  strb.w r1,[sp,#0x4]
  add r2,sp,#0x4
  ldrb r1,[r0,#0xc]
  ldr r0,[r0,#0x0]
  blx r3
  add sp,#0x14
  pop.w pc
