; FUN_140b46e8 @ 0x140b46e8 size=286
  push {r4,r5,r6,r7,lr}
  mov r5,lr
  mov r4,r0
  sub sp,#0xc
  mrs r6,basepri
  cmp r6,#0x40
  beq 0x140b4720
  mov r2,pc
  ldr r0,[0x140b4808]
  ldr r3,[0x140b480c]
  ldrb r1,[r0,#0x0]
  str r2,[r3,#0x0]
  str.w lr,[r3,#0x4]
  ldr r3,[0x140b4810]
  adds r2,r1,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x140b4814]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr r3,[0x140b4818]
  ldr r7,[r3,#0x0]
  cmp r7,#0x0
  bne 0x140b47b8
  movs r2,#0x1
  mov r0,r7
  str r2,[r3,#0x0]
  bl 0x14027fb4
  bl 0x140e59d8
  ldr r1,[0x140b481c]
  mov r0,r7
  bl 0x140280ac
  ldr r0,[0x140b4820]
  bl 0x14030030
  mov r1,r4
  mov r0,r7
  bl 0x14028078
  mov r0,r7
  bl 0x14027f98
  movw r1,#0x44c
  mul r1,r4,r1
  mov r0,r1
  bl 0x14030034
  bl 0x140305a4
  cbz r6,0x140b47ae
  ldr r0,[0x140b4824]
  ldr r3,[0x140b4810]
  ldrb r1,[r0,#0x0]
  adds r2,r1,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x140b4828]
  str.w r5,[r3,r1,lsl #0x2]
  msr basepri,r6
  movs r2,#0x0
  movs r1,#0x1
  ldr r0,[0x140b482c]
  bl 0x140e52f8
  ldr r2,[0x140b4830]
  str r0,[r2,#0x0]
  cbz r0,0x140b47ea
  movs r1,#0xfa
  mul r1,r4,r1
  bl 0x140e5378
  cbnz r0,0x140b4800
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
  mov.w r2,#0xffffffff
  ldr r3,[0x140b480c]
  str r2,[r3,#0x0]
  b 0x140b476c
  cbnz r6,0x140b47c2
  mov.w r2,#0xffffffff
  ldr r3,[0x140b480c]
  str r2,[r3,#0x0]
  ldr r1,[0x140b4824]
  ldr r3,[0x140b4828]
  ldrb r2,[r1,#0x0]
  str.w r5,[r3,r2,lsl #0x2]
  ldr r3,[0x140b4810]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r6
  mov.w r0,#0xffffffff
  b 0x140b47aa
  ldr r4,[0x140b4834]
  movs r1,#0x89
  movs r0,#0x4
  ldr r3,[0x140b4838]
  ldr r2,[0x140b483c]
  str r4,[sp,#0x0]
  bl 0x1402a6e8
  mov.w r0,#0xffffffff
  b 0x140b47aa
  ldr r0,[0x140b4840]
  bl 0x1402b0f8
