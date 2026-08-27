; FUN_2c621d00 @ 0x2c621d00 size=104
  push {r3,r4,r5,r6,r7,lr}
  ldr r3,[r0,#0x48]
  mov r5,r0
  cbz r3,0x2c621d4c
  movs r4,#0x0
  mov r6,r4
  ldr r7,[r5,#0x4c]
  ldr.w r0,[r7,r4,lsl #0x2]
  bl 0x2c62bea8
  str.w r6,[r7,r4,lsl #0x2]
  ldr r7,[r5,#0x50]
  ldr.w r0,[r7,r4,lsl #0x2]
  bl 0x2c62bea8
  str.w r6,[r7,r4,lsl #0x2]
  ldr r7,[r5,#0x54]
  ldr.w r0,[r7,r4,lsl #0x2]
  bl 0x2c62bea8
  str.w r6,[r7,r4,lsl #0x2]
  ldr r7,[r5,#0x58]
  ldr.w r0,[r7,r4,lsl #0x2]
  bl 0x2c62bea8
  str.w r6,[r7,r4,lsl #0x2]
  adds r4,#0x1
  ldr r3,[r5,#0x48]
  cmp r3,r4
  bne 0x2c621d0c
  ldr r0,[r5,#0x4c]
  bl 0x2c62bea8
  ldr r0,[r5,#0x50]
  bl 0x2c62bea8
  ldr r0,[r5,#0x54]
  bl 0x2c62bea8
  ldr r0,[r5,#0x58]
  pop.w {r3,r4,r5,r6,r7,lr}
  b.w 0x2c62bea8
