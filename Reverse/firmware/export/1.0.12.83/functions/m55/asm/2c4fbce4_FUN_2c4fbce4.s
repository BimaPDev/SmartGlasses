; FUN_2c4fbce4 @ 0x2c4fbce4 size=62
  push {r4,lr}
  add.w r0,r0,r0, lsl #0x2
  ldr r4,[0x2c4fbd24]
  lsl.w r12,r0,#0x2
  add.w r3,r4,r0, lsl #0x2
  ldr r0,[0x2c4fbd28]
  strh r2,[r3,#0xc]
  ldrb r2,[r0,#0x0]
  movs r0,#0xb
  str r1,[r3,#0x8]
  strb r2,[r3,#0x6]
  ldrb r1,[r3,#0x12]
  ldr r2,[0x2c4fbd2c]
  strb r1,[r3,#0x7]
  ldr.w r2,[r2,r1,lsl #0x2]
  strb r0,[r3,#0x4]
  cmp r2,#0x0
  ble 0x2c4fbd1e
  add.w r0,r12,#0x4
  mov r2,r1
  movs r1,#0xc
  add r0,r4
  bl 0x2c4fb894
  movs r0,#0x0
  pop {r4,pc}
