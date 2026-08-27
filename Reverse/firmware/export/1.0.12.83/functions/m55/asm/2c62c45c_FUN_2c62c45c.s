; FUN_2c62c45c @ 0x2c62c45c size=36
  push {r4,lr}
  mov r4,r0
  sub sp,#0x8
  cbnz r0,0x2c62c474
  ldr r0,[0x2c62c480]
  mov r1,r4
  str r0,[sp,#0x4]
  bl 0x2c62c3b0
  ldr r0,[sp,#0x4]
  add sp,#0x8
  pop {r4,pc}
  bl 0x2c47266c
  cmp r0,#0x0
  bne 0x2c62c466
  add sp,#0x8
  pop {r4,pc}
