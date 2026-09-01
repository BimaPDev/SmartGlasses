; FUN_1008630c @ 0x1008630c size=34
  cmp r0,#0x4
  push {r4,lr}
  bhi 0x10086326
  ldr r4,[0x10086330]
  ldr.w r0,[r4,r0,lsl #0x2]
  bl 0x1008686c
  cmp r0,#0x16
  bhi 0x1008632a
  ldr r3,[0x10086334]
  ldrb r0,[r3,r0]
  pop {r4,pc}
  movs r0,#0x2
  b 0x10086324
  movs r0,#0x1
  b 0x10086324
