; FUN_2c4e4d98 @ 0x2c4e4d98 size=24
  push {r4,lr}
  ldrd r4,r2,[r3,#0x0]
  cmp r4,r1
  beq 0x2c4e4dac
  subs r0,#0x1
  add.w r3,r3,#0x8
  bne 0x2c4e4d9a
  pop {r4,pc}
  mov r0,r2
  b 0x2c4e4daa
