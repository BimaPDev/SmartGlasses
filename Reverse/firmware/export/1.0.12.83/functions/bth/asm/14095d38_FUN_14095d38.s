; FUN_14095d38 @ 0x14095d38 size=20
  cmp r0,#0x1
  itte ls
  ldr.ls r3,[0x140863ec]
  ldr.ls.w r0,[r3,r0,lsl #0x2]
  mov.hi r0,#0x0
  bx lr
  uxtb r0,r0
  b.w 0x140863dc
