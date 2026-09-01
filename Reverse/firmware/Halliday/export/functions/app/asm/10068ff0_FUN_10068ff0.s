; FUN_10068ff0 @ 0x10068ff0 size=28
  push {r4,lr}
  mov r4,r0
  mov r1,r0
  ldr r0,[0x1006900c]
  bl 0x10119dc2
  ldr r0,[0x10069010]
  ldr r1,[0x10069014]
  ldr r3,[0x10069018]
  cmp r4,#0x0
  it eq
  mov.eq r0,r1
  str r0,[r3,#0x0]
  pop {r4,pc}
