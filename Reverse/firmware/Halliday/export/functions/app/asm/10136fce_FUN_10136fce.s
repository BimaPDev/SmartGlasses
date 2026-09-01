; FUN_10136fce @ 0x10136fce size=34
  push {r4,lr}
  mov r4,r1
  bl 0x100dd8ec
  cbz r0,0x10136fea
  ldrb.w r3,[r0,#0x60]
  orr r3,r3,#0x40
  strb.w r3,[r0,#0x60]
  str r0,[r4,#0x0]
  movs r0,#0x0
  pop {r4,pc}
  mvn r0,#0xb
  b 0x10136fe8
