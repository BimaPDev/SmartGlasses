; FUN_1402c684 @ 0x1402c684 size=60
  cmp r0,#0x1
  push {r4,r5,r6,lr}
  mov r4,r0
  bhi 0x1402c6b8
  ldr r6,[0x1402c6c0]
  add.w r3,r0,r0, lsl #0x1
  add.w r3,r6,r3, lsl #0x2
  ldrb r0,[r3,#0x6]
  lsls r5,r4,#0x1
  cmp r0,#0x46
  bls 0x1402c6ac
  add r4,r5
  ldr.w r3,[r6,r4,lsl #0x2]
  ldr r0,[r3,#0x30]
  and r0,r0,#0x1
  pop {r4,r5,r6,pc}
  bl 0x1402db00
  cmp r0,#0x1
  beq 0x1402c69e
  movs r0,#0x0
  pop {r4,r5,r6,pc}
  mov r1,r0
  ldr r0,[0x1402c6c4]
  bl 0x1402b0f8
