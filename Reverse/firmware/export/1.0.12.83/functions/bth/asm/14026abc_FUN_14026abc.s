; FUN_14026abc @ 0x14026abc size=52
  cmp r0,#0x1
  bhi 0x14026aec
  ldr r3,[0x14026af0]
  ldrsb r3,[r3,r0]
  cmp r3,#0x0
  blt 0x14026ae8
  movs r1,#0x1
  ldr r0,[0x14026af4]
  lsrs r2,r3,#0x5
  and r3,r3,#0x1f
  adds r2,#0x20
  lsl.w r3,r1,r3
  str.w r3,[r0,r2,lsl #0x2]
  dsb #0xf
  isb #0xf
  movs r0,#0x0
  bx lr
  movs r0,#0x0
  bx lr
  movs r0,#0x1
  bx lr
