; FUN_10093ee0 @ 0x10093ee0 size=38
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r0,[0x10093f08]
  bl 0x1012b06a
  mov r1,r0
  ldr r5,[0x10093f08]
  cbnz r1,0x10093ef4
  mov r0,r1
  pop {r3,r4,r5,pc}
  ldr r0,[r1,#0x0]
  ldrb r3,[r0,#0x0]
  cmp r3,r4
  beq 0x10093ef2
  mov r0,r5
  bl 0x1012b076
  mov r1,r0
  b 0x10093eee
