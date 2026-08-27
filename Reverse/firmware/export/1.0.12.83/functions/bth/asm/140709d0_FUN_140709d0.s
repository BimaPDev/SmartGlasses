; FUN_140709d0 @ 0x140709d0 size=34
  cmp r0,#0x1
  bhi 0x140709ee
  ldr r3,[0x140709f4]
  adds r0,#0x6
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x140709f0
  ldrb.w r3,[r0,#0x3c]
  cmp r3,r1
  bls 0x140709ee
  adds r1,#0x10
  ldr.w r0,[r0,r1,lsl #0x2]
  bx lr
  movs r0,#0x0
  bx lr
