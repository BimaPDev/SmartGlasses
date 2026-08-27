; FUN_1407561c @ 0x1407561c size=42
  push {r4}
  mov r4,lr
  ldr r1,[0x14075648]
  ldr r0,[0x1407564c]
  ldrb r2,[r1,#0x0]
  ldr r3,[0x14075650]
  str.w r4,[r0,r2,lsl #0x2]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x4
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x2
  strb r3,[r1,#0x0]
  pop.w r4
  b.w 0x140a20e4
