; FUN_1013632a @ 0x1013632a size=34
  push {r3,r4,r5,lr}
  mov r4,r2
  mov r5,r0
  bl 0x10131d48
  ldr r3,[r4,#0x4]
  add r0,r3
  str r0,[r4,#0x4]
  mov r0,r5
  bl 0x101367a2
  cbnz r0,0x1013634a
  ldrb r3,[r4,#0x0]
  orr r3,r3,#0x2
  strb r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
