; FUN_2c469ed8 @ 0x2c469ed8 size=28
  push {r3,r4,r5,r7,lr}
  subs r5,#0x61
  adr r5,[0x2c46a160]
  subs r5,#0x61
  lsls r4,r1,#0xd
  subs r4,#0x0
  lsls r0,r7,#0xe
  subs r4,#0x0
  ldr r3,[0x2c469ef4]
  ldrb r0,[r3,#0x0]
  cbz r0,0x2c469ef2
  ldr r3,[0x2c469ef8]
  ldrb r0,[r3,#0x0]
  bx lr
