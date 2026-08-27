; FUN_14062d14 @ 0x14062d14 size=78
  push {r3,r4,r5,lr}
  mov r5,r2
  ldrb r2,[r2,#0x0]
  mov r4,r1
  cbnz r2,0x14062d38
  ldrh r1,[r5,#0x6]
  cbz r1,0x14062d46
  ldrh r0,[r5,#0x2]
  bl 0x14070aa4
  ldrb r2,[r5,#0x0]
  uxtb r1,r4
  cbnz r2,0x14062d3a
  pop.w {r3,r4,r5,lr}
  movs r0,#0x0
  b.w 0x14063928
  uxtb r1,r1
  movs r0,#0x0
  pop.w {r3,r4,r5,lr}
  adds r2,#0x90
  b.w 0x14063928
  ldr r1,[0x14062d58]
  movw r2,#0x13b
  movs r0,#0x42
  ldr r3,[0x14062d5c]
  bl 0x1402a64c
  ldr r3,[0x14063938]
  add.w r0,r0,r0, lsl #0x1
  add.w r0,r3,r0, lsl #0x2
  b.w 0x1406d6c0
