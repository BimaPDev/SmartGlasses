; FUN_1406e4cc @ 0x1406e4cc size=76
  push {r4,r5,r6,r7,r8,lr}
  ldr r3,[0x1406e51c]
  mov r5,r2
  adds r2,r0,#0x6
  ldr.w r6,[r3,r2,lsl #0x2]
  mov r4,r0
  mov r7,r1
  cbz r6,0x1406e50a
  ldr r3,[r6,#0x0]
  cbz r3,0x1406e4ea
  ldrb r3,[r3,#0xd]
  cmp r3,r7
  beq 0x1406e4ee
  pop.w {r4,r5,r6,r7,r8,pc}
  ldrh r3,[r5,#0x2]
  mov r0,r4
  pop.w {r4,r5,r6,r7,r8,lr}
  cmp r3,#0x2
  itet ls
  ldr.ls r2,[0x1406e520]
  mov.hi r3,#0x4c
  ldrh.ls.w r3,[r2,r3,lsl #0x1]
  movs r1,#0x0
  movs r2,#0x1
  b.w 0x1406e314
  movw r2,#0x283
  ldr r3,[0x1406e524]
  ldr r1,[0x1406e528]
  movs r0,#0x42
  bl 0x1402a64c
