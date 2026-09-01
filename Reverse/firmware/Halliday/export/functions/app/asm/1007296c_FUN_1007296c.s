; FUN_1007296c @ 0x1007296c size=36
  push {r4,lr}
  ldr r3,[0x10072990]
  add r1,r0
  cmp r0,r1
  bne 0x1007297a
  mov r0,r2
  pop {r4,pc}
  ldrb.w r4,[r0],#0x1
  eors r2,r4
  and r4,r2,#0xf
  add.w r2,r3,r2, lsr #0x4
  ldrb r4,[r3,r4]
  ldrb r2,[r2,#0x10]
  eors r2,r4
  b 0x10072972
