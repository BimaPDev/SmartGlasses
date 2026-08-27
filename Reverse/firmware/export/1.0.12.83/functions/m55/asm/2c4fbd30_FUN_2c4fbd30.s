; FUN_2c4fbd30 @ 0x2c4fbd30 size=62
  push {r4,lr}
  add.w r0,r0,r0, lsl #0x2
  ldr r4,[0x2c4fbd70]
  lsl.w r12,r0,#0x2
  add.w r3,r4,r0, lsl #0x2
  ldr r0,[0x2c4fbd74]
  strh r2,[r3,#0xc]
  ldrb r2,[r0,#0x0]
  movs r0,#0xb
  str r1,[r3,#0x8]
  strb r2,[r3,#0x6]
  ldrb r1,[r3,#0x13]
  ldr r2,[0x2c4fbd78]
  strb r1,[r3,#0x7]
  ldr.w r2,[r2,r1,lsl #0x2]
  strb r0,[r3,#0x4]
  cmp r2,#0x0
  ble 0x2c4fbd6a
  add.w r0,r12,#0x4
  mov r2,r1
  movs r1,#0xc
  add r0,r4
  bl 0x2c4fb894
  movs r0,#0x0
  pop {r4,pc}
