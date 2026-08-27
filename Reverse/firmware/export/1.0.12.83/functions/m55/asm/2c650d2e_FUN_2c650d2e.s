; FUN_2c650d2e @ 0x2c650d2e size=30
  ldr r3,[r0,#0x0]
  ldr.w r0,[r3,#-0xc]
  push {r4,lr}
  cmp r2,r0
  bcs 0x2c650d44
  ldrb r4,[r3,r2]
  cmp r4,r1
  bne 0x2c650d48
  adds r2,#0x1
  b 0x2c650d36
  mov.w r2,#0xffffffff
  mov r0,r2
  pop {r4,pc}
