; FUN_2c4bb734 @ 0x2c4bb734 size=60
  ldr r3,[0x2c4bb770]
  push {r4,r5,r6,lr}
  ldrb r3,[r3,r0]
  mov r5,r1
  mov r4,r0
  cmp r3,#0xff
  beq 0x2c4bb748
  ldr r3,[0x2c4bb774]
  ldrb r3,[r3,r0]
  cbz r3,0x2c4bb75e
  movs r0,#0x0
  ldr r3,[0x2c4bb778]
  ldr.w r3,[r3,r4,lsl #0x2]
  cbz r3,0x2c4bb75c
  mov r2,r5
  movs r1,#0x0
  pop.w {r4,r5,r6,lr}
  bx r3
  pop {r4,r5,r6,pc}
  bl 0x2c4bb6b8
  ldr r3,[0x2c4bb77c]
  ldr.w r3,[r3,r4,lsl #0x2]
  cmp r3,r0
  bls 0x2c4bb748
  subs r0,r3,r0
  b 0x2c4bb74a
