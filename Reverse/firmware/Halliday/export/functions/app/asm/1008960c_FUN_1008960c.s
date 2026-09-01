; FUN_1008960c @ 0x1008960c size=26
  push {r0,r1,r2,lr}
  movs r2,#0x0
  ldr r3,[0x10089628]
  movs r1,#0x2c
  strd r2,r3,[sp,#0x0]
  mov r2,sp
  bl 0x10086f50
  ldr r0,[sp,#0x0]
  add sp,#0xc
  pop.w pc
