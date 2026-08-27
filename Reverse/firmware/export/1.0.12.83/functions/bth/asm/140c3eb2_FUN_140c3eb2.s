; FUN_140c3eb2 @ 0x140c3eb2 size=30
  ldr r3,[r0,#0x0]
  ldr.w r0,[r3,#-0xc]
  push {r4,lr}
  cmp r2,r0
  bcs 0x140c3ec8
  ldrb r4,[r3,r2]
  cmp r4,r1
  bne 0x140c3ecc
  adds r2,#0x1
  b 0x140c3eba
  mov.w r2,#0xffffffff
  mov r0,r2
  pop {r4,pc}
