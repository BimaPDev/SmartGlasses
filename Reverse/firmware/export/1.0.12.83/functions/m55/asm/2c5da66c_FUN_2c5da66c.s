; FUN_2c5da66c @ 0x2c5da66c size=58
  push {r3,r4,r5,r6,r7,lr}
  ldrd r3,r2,[r0,#0x10]
  subs r2,r2,r3
  cmp r2,#0x0
  ble 0x2c5da6a4
  mov r6,r0
  asrs r7,r2,#0x2
  movs r4,#0x0
  b 0x2c5da682
  ldr r3,[r6,#0x10]
  ldr.w r0,[r3,r4,lsl #0x2]
  bl 0x2c5d8490
  ldr r3,[r6,#0x10]
  mov r5,r0
  ldr.w r0,[r3,r4,lsl #0x2]
  adds r4,#0x1
  bl 0x2c5d8bd8
  mov r1,r0
  mov r0,r5
  bl 0x2c604550
  cmp r4,r7
  blt 0x2c5da680
  pop {r3,r4,r5,r6,r7,pc}
