; FUN_140c535a @ 0x140c535a size=20
  push {r0,r1,r2,lr}
  mov r3,r1
  str r2,[sp,#0x0]
  movs r2,#0x0
  ldr r1,[r0,#0x4]
  bl 0x140d1b58
  add sp,#0xc
  pop.w pc
