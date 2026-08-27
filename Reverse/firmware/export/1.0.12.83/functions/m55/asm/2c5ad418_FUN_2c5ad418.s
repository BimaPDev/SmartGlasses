; FUN_2c5ad418 @ 0x2c5ad418 size=18
  push {r4,lr}
  mov r4,r0
  str r2,[r0,#0x0]
  str.w r3,[r0,#0x8]!
  bl 0x2c5dc800
  mov r0,r4
  pop {r4,pc}
