; FUN_10053ae8 @ 0x10053ae8 size=90
  push {r3,r4,r5,r6,r7,lr}
  mov r5,r3
  ldr r3,[r0,#0x8]
  mov r6,r0
  cmp r3,r1
  mov r4,r1
  mov r7,r2
  bcs 0x10053b0e
  movs r2,#0x77
  ldr r1,[0x10053b44]
  ldr r0,[0x10053b48]
  bl 0x10119dc2
  eors r0,r0
  msr basepri,r0
  mov.w r0,#0x4
  svc 0x2
  ldr r3,[r6,#0x8]
  add.w r4,r6,r4, lsl #0x3
  cmp.w r3,#0x8000
  bcc 0x10053b20
  str.w r5,[r4,r7,lsl #0x2]
  pop {r3,r4,r5,r6,r7,pc}
  uxth r6,r5
  cmp r5,r6
  beq 0x10053b3c
  movs r2,#0x80
  ldr r1,[0x10053b44]
  ldr r0,[0x10053b48]
  bl 0x10119dc2
  eors r0,r0
  msr basepri,r0
  mov.w r0,#0x4
  svc 0x2
  strh.w r6,[r4,r7,lsl #0x1]
  b 0x10053b1e
