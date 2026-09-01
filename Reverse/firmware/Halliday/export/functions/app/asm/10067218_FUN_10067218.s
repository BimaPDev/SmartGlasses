; FUN_10067218 @ 0x10067218 size=36
  push {r3,r4,r5,lr}
  ldr r5,[0x1006723c]
  ldrb r3,[r5,#0x0]
  cbnz r3,0x10067238
  ldr r4,[0x10067240]
  movs r1,#0x2
  mov r0,r4
  bl 0x10065364
  cbnz r0,0x10067238
  movs r3,#0x2
  strh r3,[r4,#0x18]
  movs r3,#0x1
  strb.w r0,[r4,#0x45]
  strb r3,[r5,#0x0]
  movs r0,#0x0
  pop {r3,r4,r5,pc}
