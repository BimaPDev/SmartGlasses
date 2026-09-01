; FUN_100997b0 @ 0x100997b0 size=38
  push {r0,r1,r2,r3,r4,lr}
  ldr r4,[r0,#0x38]
  cbnz r4,0x100997d0
  bl 0x1012c296
  mov r3,r4
  movw r2,#0x2022
  mov r1,sp
  bl 0x100927e8
  ldr r4,[0x100997d8]
  ldr r2,[0x100997dc]
  cmp r0,#0x0
  it eq
  mov.eq r4,r2
  mov r0,r4
  add sp,#0x10
  pop {r4,pc}
