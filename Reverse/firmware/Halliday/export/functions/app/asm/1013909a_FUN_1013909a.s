; FUN_1013909a @ 0x1013909a size=26
  push {r3,r4,r5,lr}
  mov r4,r0
  add.w r5,r0,#0x20
  ldrb r3,[r4,#0x1c]
  cbnz r3,0x101390a8
  pop {r3,r4,r5,pc}
  mov.w r1,#0xffffffff
  mov r0,r5
  bl 0x1011dbde
  b 0x101390a2
