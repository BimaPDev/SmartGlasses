; FUN_100dffac @ 0x100dffac size=26
  subs r0,#0xa
  uxtb r3,r0
  cmp r3,#0x13
  bhi 0x100dffc4
  movs r3,#0x1
  ldr r2,[0x100dffc8]
  lsl.w r0,r3,r0
  ldr r3,[r2,#0x0]
  bic.w r3,r3,r0
  str r3,[r2,#0x0]
  bx lr
