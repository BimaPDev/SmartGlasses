; FUN_10068114 @ 0x10068114 size=26
  sxtb r3,r0
  cmp r3,#0x0
  blt 0x1006812c
  movs r2,#0x1
  and r0,r0,#0x1f
  lsl.w r0,r2,r0
  ldr r2,[0x10068130]
  lsrs r3,r3,#0x5
  str.w r0,[r2,r3,lsl #0x2]
  bx lr
