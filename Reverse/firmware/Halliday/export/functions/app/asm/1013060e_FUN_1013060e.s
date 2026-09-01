; FUN_1013060e @ 0x1013060e size=40
  cbz r0,0x1013061c
  ldr r3,[r0,#0x4c]
  cbz r3,0x10130618
  b.w 0x1013076a
  b.w 0x10130f12
  mvn r0,#0x15
  bx lr
  movs r0,#0x0
  bx lr
  ldrb.w r3,[r0,#0xa2]
  bfc r3,#0x2,#0x1
  strb.w r3,[r0,#0xa2]
  movs r0,#0x0
  bx lr
