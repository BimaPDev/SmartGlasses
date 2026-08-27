; FUN_2c621cc0 @ 0x2c621cc0 size=64
  push {r3,r4,r5,r6,r7,lr}
  ldr r3,[r0,#0x3c]
  mov r5,r0
  cbz r3,0x2c621cf0
  movs r4,#0x0
  mov r7,r4
  ldr r6,[r5,#0x40]
  ldr.w r0,[r6,r4,lsl #0x2]
  bl 0x2c62bea8
  str.w r7,[r6,r4,lsl #0x2]
  ldr r6,[r5,#0x44]
  ldr.w r0,[r6,r4,lsl #0x2]
  bl 0x2c62bea8
  str.w r7,[r6,r4,lsl #0x2]
  adds r4,#0x1
  ldr r3,[r5,#0x3c]
  cmp r3,r4
  bne 0x2c621ccc
  ldr r0,[r5,#0x40]
  bl 0x2c62bea8
  ldr r0,[r5,#0x44]
  pop.w {r3,r4,r5,r6,r7,lr}
  b.w 0x2c62bea8
