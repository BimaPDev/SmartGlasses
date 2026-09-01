; FUN_100e8b10 @ 0x100e8b10 size=32
  subs r0,#0x4
  uxtb r3,r0
  cmp r3,#0x19
  itett ls
  ldr.ls r2,[0x100e8b30]
  mov.hi r3,#0x0
  ldrsh.ls.w r0,[r2,r3,lsl #0x1]
  ldr.ls r2,[0x100e8b34]
  ite hi
  mov.hi.w r0,#0xffffffff
  ldrb.ls r3,[r2,r3]
  cbz r1,0x100e8b2e
  strb r3,[r1,#0x0]
  bx lr
