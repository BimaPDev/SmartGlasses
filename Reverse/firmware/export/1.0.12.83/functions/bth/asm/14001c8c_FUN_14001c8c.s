; FUN_14001c8c @ 0x14001c8c size=120
  push {r3,r4,r5,lr}
  mov r4,r0
  cbz r1,0x14001cb2
  bl 0x14001554
  ldr r2,[0x14001d04]
  ldr r3,[0x14001d08]
  ldrb r2,[r2,r4]
  mov r0,r4
  ldr.w r3,[r3,r2,lsl #0x2]
  ldrb r1,[r3,#0x5]
  bl 0x14001520
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x1400175c
  bl 0x1400153c
  ldr r2,[0x14001d04]
  ldr r3,[0x14001d08]
  ldrb r2,[r2,r4]
  mov r0,r4
  ldr.w r3,[r3,r2,lsl #0x2]
  ldrb r1,[r3,#0x6]
  bl 0x14001520
  ldr r3,[0x14001d0c]
  ldr.w r3,[r3,r4,lsl #0x2]
  lsls r2,r3,#0x1a
  bmi 0x14001d00
  lsls r3,r3,#0x1c
  bpl 0x14001ca8
  movs r5,#0xbb
  mov r0,r4
  bl 0x14001798
  mov r0,r4
  movs r1,#0x2
  bl 0x1400166c
  mov r1,r5
  mov r0,r4
  movs r2,#0x0
  bl 0x1400168c
  mov r0,r4
  bl 0x14001798
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x1400175c
  movs r5,#0xeb
  b 0x14001cd8
