; FUN_10126fb4 @ 0x10126fb4 size=30
  ldr r0,[r0,#0x8]
  cbz r0,0x10126fd0
  cmp r1,#0x0
  ldr r3,[r0,#0x4]
  bge 0x10126fc2
  adds r1,r1,r3
  bmi 0x10126fce
  cmp r1,r3
  bcs 0x10126fce
  ldr r3,[r0,#0x0]
  ldr.w r0,[r3,r1,lsl #0x2]
  bx lr
  movs r0,#0x0
  bx lr
