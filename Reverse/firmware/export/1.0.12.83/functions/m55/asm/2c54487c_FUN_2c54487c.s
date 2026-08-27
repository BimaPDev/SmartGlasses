; FUN_2c54487c @ 0x2c54487c size=26
  push {r4,lr}
  str r2,[r0,#0x0]
  mov r4,r0
  ldr.w r1,[r3,#0x8]!
  adds r3,#0x8
  cmp r1,r3
  beq 0x2c544892
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
