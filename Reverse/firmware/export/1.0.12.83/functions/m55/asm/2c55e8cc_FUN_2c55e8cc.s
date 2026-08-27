; FUN_2c55e8cc @ 0x2c55e8cc size=14
  push {r4,lr}
  mov r4,r0
  str r1,[r0,#0x28]
  cmp r1,#0x5
  bhi.w 0x2c55e9ea
  pop {r4,pc}
