; FUN_100e2758 @ 0x100e2758 size=34
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x100e277c]
  bl 0x1011ea10
  ldr r1,[0x100e277c]
  mov r2,r0
  mov r0,r4
  bl 0x1011ea30
  cmp r0,#0x0
  movw r0,#0x1770
  it ne
  mov.ne.w r0,#0x7d0
  pop {r4,pc}
