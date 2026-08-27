; FUN_2c5da1fc @ 0x2c5da1fc size=42
  push {r3,r4,r5,r6,r7,lr}
  mov r4,r0
  ldr r7,[r0,#0x0]
  b 0x2c5da20c
  ldr.w r3,[r4,#-0x4]
  str.w r3,[r4],#-0x4
  ldr.w r6,[r4,#-0x4]
  mov r0,r7
  bl 0x2c5d8bd8
  mov r5,r0
  mov r0,r6
  bl 0x2c5d8bd8
  cmp r5,r0
  bcc 0x2c5da204
  str r7,[r4,#0x0]
  pop {r3,r4,r5,r6,r7,pc}
