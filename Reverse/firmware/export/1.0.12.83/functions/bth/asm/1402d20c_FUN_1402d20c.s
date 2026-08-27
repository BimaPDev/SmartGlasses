; FUN_1402d20c @ 0x1402d20c size=34
  mov r12,r0
  push {r4,lr}
  ldr r0,[0x1402d230]
  ldr r4,[0x1402d234]
  sub sp,#0x8
  str r3,[sp,#0x0]
  cmp.w r12,#0x1
  it ne
  mov.ne r0,r4
  mov r3,r2
  mov r2,r1
  mov r1,r12
  bl 0x14025fd4
  add sp,#0x8
  pop {r4,pc}
