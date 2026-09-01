; FUN_101305fa @ 0x101305fa size=40
  cbz r0,0x10130608
  ldr r3,[r0,#0x4c]
  cbz r3,0x10130604
  b.w 0x10130766
  b.w 0x10130f02
  mvn r0,#0x15
  bx lr
  movs r0,#0x0
  bx lr
  ldrb.w r3,[r0,#0xa2]
  orr r3,r3,#0x4
  strb.w r3,[r0,#0xa2]
  movs r0,#0x0
  bx lr
