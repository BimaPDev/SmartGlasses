; FUN_1011c88e @ 0x1011c88e size=22
  movs r3,#0x0
  push {r4,lr}
  mov r4,r3
  sxtb r2,r3
  cmp r1,r2
  bgt 0x1011c89c
  pop {r4,pc}
  str.w r4,[r0,r3,lsl #0x2]
  adds r3,#0x1
  b 0x1011c894
