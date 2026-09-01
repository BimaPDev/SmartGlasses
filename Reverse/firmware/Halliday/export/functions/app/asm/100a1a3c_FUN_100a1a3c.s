; FUN_100a1a3c @ 0x100a1a3c size=54
  push {r4,r5,r6,lr}
  movs r2,#0xd0
  mov r5,r0
  mov r4,r1
  ldr r0,[0x100a1a74]
  movs r1,#0x0
  bl 0x1011ea48
  movs r3,#0x0
  ldr r2,[0x100a1a74]
  mov r0,r3
  mov r1,r2
  cmp r3,r4
  blt 0x100a1a64
  ldr r3,[0x100a1a78]
  strb r0,[r1,#0x5]
  strb r4,[r1,#0x4]
  str r3,[r1,#0x0]
  movs r0,#0x0
  pop {r4,r5,r6,pc}
  ldr.w r6,[r5,r3,lsl #0x2]
  adds r2,#0x8
  str r6,[r2,#0x0]
  strb r0,[r2,#0x4]
  adds r3,#0x1
  b 0x100a1a54
