; FUN_100e8ae8 @ 0x100e8ae8 size=30
  subs r0,#0x4
  uxtb r3,r0
  cmp r3,#0x19
  itete hi
  mov.hi r3,#0x0
  ldr.ls r2,[0x100e8b08]
  mov.hi r0,r3
  ldr.ls.w r0,[r2,r3,lsl #0x2]
  itt ls
  ldr.ls r2,[0x100e8b0c]
  ldrb.ls r3,[r2,r3]
  cbz r1,0x100e8b04
  strb r3,[r1,#0x0]
  bx lr
