; FUN_1009a564 @ 0x1009a564 size=400
  cmp r3,#0x1d
  push {r3,r4,r5,lr}
  mov r5,r0
  mov r4,r1
  bhi 0x1009a57e
  cmp r3,#0x15
  bhi 0x1009a582
  cmp r3,#0x4
  beq.w 0x1009a706
  cmp r3,#0x5
  beq.w 0x1009a710
  movs r0,#0x0
  b 0x1009a70e
  subs r3,#0x16
  cmp r3,#0x7
  bhi 0x1009a57e
  adr r1,[0x1009a590]
  ldr.w pc,[r1,r3,lsl #0x2]
  mov r1,r4
  cmp r2,#0x0
  add.w r1,r1,#0x4
  add.w r5,r5,#0x2
  ble.w 0x1009a70c
  ldrb.w r3,[r1,#-0x3]
  ldrb.w r0,[r1,#-0x4]
  lsls r3,r3,#0x3
  bic r3,r3,#0x1f
  orr.w r3,r3,r0, lsr #0x3
  strb.w r3,[r5,#-0x2]
  ldrb.w r3,[r1,#-0x2]
  ldrb.w r0,[r1,#-0x3]
  bic r3,r3,#0x7
  orr.w r3,r3,r0, lsr #0x5
  strb.w r3,[r5,#-0x1]
  subs r2,#0x1
  b 0x1009a5b2
  mov r1,r4
  cmp r2,#0x0
  add.w r1,r1,#0x4
  add.w r5,r5,#0x3
  ble.w 0x1009a70c
  ldrb.w r3,[r1,#-0x3]
  ldrb.w r0,[r1,#-0x4]
  lsls r3,r3,#0x3
  bic r3,r3,#0x1f
  orr.w r3,r3,r0, lsr #0x3
  strb.w r3,[r5,#-0x3]
  ldrb.w r3,[r1,#-0x2]
  ldrb.w r0,[r1,#-0x3]
  bic r3,r3,#0x7
  orr.w r3,r3,r0, lsr #0x5
  strb.w r3,[r5,#-0x2]
  ldrb.w r3,[r1,#-0x1]
  subs r2,#0x1
  strb.w r3,[r5,#-0x1]
  b 0x1009a5f0
  mov r1,r4
  cmp r2,#0x0
  add.w r1,r1,#0x3
  add.w r5,r5,#0x2
  ble 0x1009a70c
  ldrb.w r3,[r1,#-0x2]
  ldrb.w r0,[r1,#-0x3]
  lsls r3,r3,#0x3
  bic r3,r3,#0x1f
  orr.w r3,r3,r0, lsr #0x3
  strb.w r3,[r5,#-0x2]
  ldrb.w r3,[r1,#-0x1]
  ldrb.w r0,[r1,#-0x2]
  bic r3,r3,#0x7
  orr.w r3,r3,r0, lsr #0x5
  strb.w r3,[r5,#-0x1]
  subs r2,#0x1
  b 0x1009a636
  mov r1,r4
  cmp r2,#0x0
  add.w r1,r1,#0x2
  add.w r5,r5,#0x3
  ble 0x1009a70c
  ldrb.w r0,[r1,#-0x2]
  subs r2,#0x1
  lsls r3,r0,#0x1
  bic r3,r3,#0x3f
  and r0,r0,#0x3f
  orrs r3,r0
  strb.w r3,[r5,#-0x3]
  ldrb.w r3,[r1,#-0x2]
  ldrb.w r0,[r1,#-0x1]
  lsrs r3,r3,#0x7
  orr.w r3,r3,r0, lsl #0x1
  strb.w r3,[r5,#-0x2]
  ldrb.w r3,[r1,#-0x1]
  sbfx r3,r3,#0x7,#0x1
  strb.w r3,[r5,#-0x1]
  b 0x1009a672
  mov r1,r4
  cmp r2,#0x0
  add.w r1,r1,#0x3
  add.w r5,r5,#0x3
  ble 0x1009a70c
  ldrb.w r3,[r1,#-0x3]
  ldrb.w r0,[r1,#-0x2]
  lsrs r3,r3,#0x1
  orr.w r3,r3,r0, lsl #0x7
  strb.w r3,[r5,#-0x3]
  ldrb.w r0,[r1,#-0x2]
  ldrb.w r4,[r1,#-0x1]
  lsrs r3,r0,#0x2
  and r3,r3,#0x38
  ubfx r0,r0,#0x1,#0x3
  orr.w r3,r3,r4, lsl #0x6
  orrs r3,r0
  strb.w r3,[r5,#-0x2]
  ldrb.w r3,[r1,#-0x1]
  subs r2,#0x1
  ubfx r0,r3,#0x2,#0x2
  bic r3,r3,#0x3
  orrs r3,r0
  strb.w r3,[r5,#-0x1]
  b 0x1009a6b6
  lsls r2,r2,#0x1
  bl 0x1011ea40
  movs r0,#0x1
  pop {r3,r4,r5,pc}
  add.w r2,r2,r2, lsl #0x1
  b 0x1009a708
