; FUN_10001bb8 @ 0x10001bb8 size=38
  ldrh r2,[r1,#0x4]
  ldr r3,[0x10001be0]
  lsls r2,r2,#0x8
  push {r4,lr}
  str.w r2,[r3,#0x338]
  mov r2,r3
  ldrh r3,[r1,#0x6]
  cbnz r3,0x10001bcc
  pop {r4,pc}
  ldr r0,[r1,#0x8]
  subs r3,#0x1
  adds r4,r0,#0x4
  ldr r0,[r0,#0x0]
  str r4,[r1,#0x8]
  str.w r0,[r2,#0x33c]
  strh r3,[r1,#0x6]
  b 0x10001bc6
