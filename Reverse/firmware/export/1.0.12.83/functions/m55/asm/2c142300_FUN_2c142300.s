; FUN_2c142300 @ 0x2c142300 size=82
  push {r3,lr}
  ldr r3,[0x2c142320]
  mov r4,r0
  cbz r3,0x2c14230e
  movs r1,#0x0
  bl 0x2c14295c
  ldr r3,[0x2c142324]
  ldr r0,[r3,#0x0]
  ldr r3,[r0,#0x28]
  cbz r3,0x2c142318
  blx r3
  mov r0,r4
  bl 0x2c1446b8
  nop
  and.w r0,sp,r4, asr #0x1
  ldrsh r4,[r1,r3]
  movs r0,#0x65
  push {r3,r4,r5,lr}
  ldr r5,[0x2c142348]
  ldr r4,[0x2c14234c]
  subs r4,r4,r5
  asrs r4,r4,#0x2
  cbnz r4,0x2c14233c
  pop.w {r3,r4,r5,lr}
  b.w 0x2c1457dc
  subs r4,#0x1
  ldr.w r3,[r5,r4,lsl #0x2]
  blx r3
  b 0x2c142332
  push {r3,r4,r5,r6,r7,lr}
  nop
  pop {r3,r4,r5,r6,r7}
  pop {r3}
  mov lr,r3
  bx lr
