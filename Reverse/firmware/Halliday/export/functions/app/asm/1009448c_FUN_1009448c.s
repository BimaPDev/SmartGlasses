; FUN_1009448c @ 0x1009448c size=56
  push {r4,r5,r6,r7,r8,lr}
  movs r5,#0x0
  ldr r4,[0x100944c4]
  mov r6,r5
  mov r7,r4
  ldr.w r8,[0x100944c8]
  ldr r0,[r4,#0x0]
  cbz r0,0x100944b6
  mov r1,r8
  bl 0x10094268
  str r6,[r4,#0x0]
  add.w r3,r7,r5, lsl #0x3
  ldrb r2,[r3,#0x6]
  bfi r2,r6,#0x0,#0x1
  strb r2,[r3,#0x6]
  strh r6,[r4,#0x4]
  adds r5,#0x1
  cmp r5,#0x10
  add.w r4,r4,#0x8
  bne 0x1009449c
  pop.w {r4,r5,r6,r7,r8,pc}
