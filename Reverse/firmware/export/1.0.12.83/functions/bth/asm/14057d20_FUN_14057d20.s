; FUN_14057d20 @ 0x14057d20 size=34
  cmp r0,#0x1
  bhi 0x14057d3e
  ldr r3,[0x14057d44]
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x14057d3c
  ldrb.w r3,[r0,#0x43]
  ands r3,r3,#0x10
  beq 0x14057d3a
  ldr r0,[r0,#0x50]
  bx lr
  mov r0,r3
  bx lr
  movs r0,#0x0
  bx lr
