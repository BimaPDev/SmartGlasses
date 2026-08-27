; FUN_14071478 @ 0x14071478 size=52
  cmp r0,#0x1
  bhi 0x140714a8
  ldr r3,[0x140714ac]
  adds r0,#0x6
  ldr.w r3,[r3,r0,lsl #0x2]
  cbz r3,0x140714a8
  ldrb.w r0,[r3,#0x3c]
  cmp r0,r1
  bls 0x140714a8
  adds r1,#0x10
  ldr.w r3,[r3,r1,lsl #0x2]
  cbz r3,0x140714a8
  ldrh r1,[r3,#0x12]
  lsls r1,r1,#0x18
  bpl 0x140714a8
  movs r0,#0x0
  strh r2,[r3,#0x18]
  strh r2,[r3,#0x1a]
  strh r2,[r3,#0x1c]
  strh r2,[r3,#0x1e]
  bx lr
  movs r0,#0x43
  bx lr
