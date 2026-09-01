; FUN_10136428 @ 0x10136428 size=28
  push {lr}
  sub sp,#0x24
  cbnz r0,0x10136436
  movs r0,#0x0
  add sp,#0x24
  pop.w pc
  add r1,sp,#0x4
  bl 0x10131bde
  cmp r0,#0x0
  blt 0x1013642e
  ldr r0,[sp,#0x8]
  b 0x10136430
