; FUN_14002240 @ 0x14002240 size=84
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  bl 0x14001a5c
  ldr r3,[0x14002294]
  str.w r0,[r3,r4,lsl #0x2]
  cbz r5,0x14002258
  ldr r3,[0x14002298]
  ldrb r3,[r3,r4]
  cbnz r3,0x1400227e
  mov r0,r4
  bl 0x1400175c
  ldr r3,[0x1400229c]
  ldrb r1,[r3,r4]
  cbnz r1,0x1400228c
  ldr r3,[0x140022a0]
  ldr.w r0,[r3,r4,lsl #0x2]
  ands r0,r0,#0x1000
  bne 0x14002272
  pop {r3,r4,r5,pc}
  mov r0,r4
  movs r1,#0x0
  bl 0x14001c8c
  movs r0,#0x0
  pop {r3,r4,r5,pc}
  mov r0,r4
  bl 0x14001a94
  cmp r0,#0x0
  beq 0x14002258
  movs r0,#0x1
  pop {r3,r4,r5,pc}
  mov r0,r4
  bl 0x140017d0
  b 0x14002264
