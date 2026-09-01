; FUN_10068134 @ 0x10068134 size=36
  sxtb r3,r0
  cmp r3,#0x0
  blt 0x10068156
  movs r2,#0x1
  and r0,r0,#0x1f
  lsl.w r0,r2,r0
  lsrs r3,r3,#0x5
  ldr r2,[0x10068158]
  adds r3,#0x20
  str.w r0,[r2,r3,lsl #0x2]
  dsb #0xf
  isb #0xf
  bx lr
