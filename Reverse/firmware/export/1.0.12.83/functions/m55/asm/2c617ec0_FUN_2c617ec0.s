; FUN_2c617ec0 @ 0x2c617ec0 size=42
  ldrb r3,[r1,#0xe]
  lsls r3,r3,#0x1d
  push {r4,r5,r6,lr}
  mov r4,r1
  mov r6,r0
  mov r5,r2
  bmi 0x2c617ed6
  ldr r0,[r1,#0x4]
  cbz r0,0x2c617ed6
  bl 0x2c62bea8
  ldrb r3,[r4,#0xe]
  mov r0,r6
  str r5,[r4,#0x4]
  orr r3,r3,#0x4
  strb r3,[r4,#0xe]
  pop.w {r4,r5,r6,lr}
  b.w 0x2c607df0
