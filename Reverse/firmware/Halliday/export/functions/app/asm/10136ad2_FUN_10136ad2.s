; FUN_10136ad2 @ 0x10136ad2 size=28
  push {r0,r1,r2,r3,r4,lr}
  mov r4,r1
  str r0,[sp,#0xc]
  bl 0x1011ea10
  movs r1,#0x4c
  uxth r3,r0
  ldr r2,[sp,#0xc]
  str r4,[sp,#0x0]
  movs r0,#0xcc
  bl 0x100d44e4
  add sp,#0x10
  pop {r4,pc}
