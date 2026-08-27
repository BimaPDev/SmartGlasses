; FUN_140022ac @ 0x140022ac size=84
  push {r4,lr}
  mov r4,r0
  cbz r1,0x140022b4
  cbnz r2,0x140022d0
  mov r0,r4
  bl 0x1400175c
  ldr r3,[0x14002300]
  ldr.w r3,[r3,r4,lsl #0x2]
  lsls r3,r3,#0x13
  bmi 0x140022e0
  mov r0,r4
  bl 0x14001720
  mov r0,r4
  bl 0x14001c60
  ldr r3,[0x14002304]
  mov r0,r4
  ldr.w r1,[r3,r4,lsl #0x2]
  bl 0x14001a7c
  movs r0,#0x0
  pop {r4,pc}
  mov r0,r4
  bl 0x14001554
  ldr r2,[0x14002308]
  ldr r3,[0x1400230c]
  ldrb r2,[r2,r4]
  mov r0,r4
  ldr.w r3,[r3,r2,lsl #0x2]
  ldrb r1,[r3,#0x5]
  bl 0x14001520
  mov r0,r4
  bl 0x1400175c
  b 0x140022c4
