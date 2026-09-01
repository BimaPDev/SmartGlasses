; FUN_100e12cc @ 0x100e12cc size=54
  push {r4,r5,r6,r7,r8,lr}
  mov r7,r0
  movs r4,#0x0
  ldr r3,[0x100e1304]
  ldr.w r8,[0x100e1308]
  ldrb r6,[r3,#0x0]
  ubfx r6,r6,#0x4,#0x3
  cmp r4,r6
  blt 0x100e12ec
  movs r5,#0x0
  mov r0,r5
  pop.w {r4,r5,r6,r7,r8,pc}
  add.w r5,r8,r4, lsl #0x5
  movs r2,#0x6
  mov r1,r7
  mov r0,r5
  bl 0x1011ea30
  cmp r0,#0x0
  beq 0x100e12e6
  adds r4,#0x1
  b 0x100e12e0
