; FUN_2c48ac0a @ 0x2c48ac0a size=20
  push {r4,lr}
  ldrb r3,[r3,#0x0]
  mov r4,r1
  cmp r3,#0x2
  beq 0x2c48ac1a
  uxth r1,r1
  bl 0x2c48aad8
  mov r0,r4
  pop {r4,pc}
