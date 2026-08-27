; FUN_2c651e1a @ 0x2c651e1a size=28
  push {r4,lr}
  cmp r2,r1
  mov r4,r1
  bls 0x2c651e32
  ldrb r4,[r4,#0x0]
  adds r1,#0x1
  adds r4,#0x24
  ldr.w r4,[r0,r4,lsl #0x2]
  str.w r4,[r3],#0x4
  b 0x2c651e1c
  mov r0,r2
  pop {r4,pc}
