; FUN_10136774 @ 0x10136774 size=42
  push {r3,r4,r5,lr}
  mov r5,r0
  ldr r0,[r0,#0x0]
  bl 0x10136622
  mov r4,r0
  cbz r0,0x1013679c
  ldrh r3,[r5,#0x6]
  ldrb r2,[r5,#0x4]
  strh r3,[r0,#0x2]
  ldrb r3,[r0,#0x0]
  and r2,r2,#0xf
  bic r3,r3,#0x3f
  orrs r3,r2
  strb r3,[r0,#0x0]
  bl 0x1013676c
  str r0,[r4,#0x8]
  pop {r3,r4,r5,pc}
