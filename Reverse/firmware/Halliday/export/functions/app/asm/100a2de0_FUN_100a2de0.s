; FUN_100a2de0 @ 0x100a2de0 size=34
  push {r4,r5,r6,lr}
  mov r4,r0
  ldr r3,[0x100a2e04]
  mov.w r1,#0xffffffff
  ldr r6,[r3,#0x0]
  add.w r5,r6,#0x10
  mov r0,r5
  bl 0x1011dbf4
  mov r0,r5
  str r4,[r6,#0x0]
  bl 0x1012d990
  movs r0,#0x0
  pop {r4,r5,r6,pc}
