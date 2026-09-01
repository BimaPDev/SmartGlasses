; FUN_10001ca4 @ 0x10001ca4 size=20
  push {r3,r4,r5,lr}
  ldr r5,[0x10001cb8]
  mov r4,r0
  ldrb r3,[r5,#0x2]
  cmp r3,r0
  beq 0x10001cb6
  bl 0x10003158
  strb r4,[r5,#0x2]
  pop {r3,r4,r5,pc}
