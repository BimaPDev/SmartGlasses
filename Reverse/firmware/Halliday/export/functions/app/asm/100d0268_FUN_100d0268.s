; FUN_100d0268 @ 0x100d0268 size=32
  push {r0,r1,r2,lr}
  str r0,[sp,#0x4]
  ldr r0,[r0,#0x8]
  cbz r0,0x100d027a
  bl 0x100c1c90
  movs r2,#0x0
  ldr r3,[sp,#0x4]
  str r2,[r3,#0x8]
  ldr r0,[0x100d0288]
  add r1,sp,#0x4
  bl 0x1013c6ba
  add sp,#0xc
  pop.w pc
