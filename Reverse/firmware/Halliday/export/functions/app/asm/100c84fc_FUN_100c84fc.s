; FUN_100c84fc @ 0x100c84fc size=24
  push {r0,r1,r4,lr}
  ldr r4,[sp,#0x10]
  strd r3,r4,[sp,#0x0]
  mov r3,r2
  mov r2,r1
  mov r1,r0
  ldr r0,[0x100c8514]
  bl 0x100c82b0
  add sp,#0x8
  pop {r4,pc}
