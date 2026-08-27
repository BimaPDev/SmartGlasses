; FUN_140547f4 @ 0x140547f4 size=26
  cmp r0,#0x1
  bhi 0x1405480c
  ldr r3,[0x14054810]
  ldr.w r3,[r3,r0,lsl #0x2]
  cbz r3,0x1405480c
  ldrb.w r2,[r3,#0x43]
  lsls r2,r2,#0x1b
  it mi
  strb.mi.w r1,[r3,#0x73]
  bx lr
