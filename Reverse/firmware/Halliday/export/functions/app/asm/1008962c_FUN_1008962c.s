; FUN_1008962c @ 0x1008962c size=26
  movs r3,#0x0
  push {r0,r1,r2,lr}
  ldr r2,[0x10089648]
  movs r1,#0x2c
  strd r2,r3,[sp,#0x0]
  mov r2,sp
  bl 0x10086f50
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w pc
