; FUN_1406e2c8 @ 0x1406e2c8 size=60
  push {r3,r4,r5,lr}
  ldr r3,[0x1406e308]
  adds r0,#0x6
  ldr.w r5,[r3,r0,lsl #0x2]
  mov r4,r1
  cbz r5,0x1406e2f6
  cbnz r4,0x1406e2dc
  ldr r0,[r5,#0x0]
  pop {r3,r4,r5,pc}
  ldr r0,[r5,#0x8]
  cmp r0,#0x0
  beq 0x1406e2da
  ldrh r3,[r0,#0x8]
  cmp r3,r4
  beq 0x1406e2da
  ldr r0,[r0,#0x0]
  cmp r0,#0x0
  beq 0x1406e2da
  ldrh r3,[r0,#0x8]
  cmp r3,r4
  bne 0x1406e2e8
  pop {r3,r4,r5,pc}
  movw r2,#0x283
  ldr r3,[0x1406e30c]
  ldr r1,[0x1406e310]
  movs r0,#0x42
  bl 0x1402a64c
