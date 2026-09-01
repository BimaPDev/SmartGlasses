; FUN_10137920 @ 0x10137920 size=44
  push {r4,r5,r6,lr}
  ldrb.w r3,[r0,#0x96]
  mov r4,r0
  cmp r3,#0x8
  beq 0x1013793e
  movs r5,#0x0
  ldr.w r0,[r0,#0x90]
  cbnz r0,0x10137940
  movs r3,#0x8
  str.w r0,[r4,#0x90]
  strb.w r3,[r4,#0x96]
  pop {r4,r5,r6,pc}
  ldr r6,[r0,#0x38]
  str r5,[r0,#0x38]
  bl 0x1013790c
  mov r0,r6
  b 0x10137932
