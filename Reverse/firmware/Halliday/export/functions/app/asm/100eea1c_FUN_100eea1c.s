; FUN_100eea1c @ 0x100eea1c size=78
  push {r4,lr}
  ldr r4,[0x100eea6c]
  mov.w r1,#0xffffffff
  ldr r0,[0x100eea70]
  bl 0x1011dbf4
  ldrb.w r3,[r4,#0x50]
  cbz r3,0x100eea62
  ldr r3,[0x100eea74]
  ldr r0,[0x100eea78]
  ldr r2,[0x100eea7c]
  subs r0,r0,r3
  lsls r0,r0,#0x5
  and r0,r0,#0xff00
  orr r0,r0,#0x850000
  ldr r1,[0x100eea80]
  orr r0,r0,#0x31
  bl 0x100a5b78
  ldrb.w r0,[r4,#0x50]
  movs r1,#0x0
  subs r0,#0x1
  add.w r0,r4,r0, lsl #0x4
  bl 0x100ee748
  movs r3,#0x0
  strb.w r3,[r4,#0x50]
  pop.w {r4,lr}
  b.w 0x100ee690
