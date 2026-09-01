; FUN_1006e2dc @ 0x1006e2dc size=56
  push {r4,lr}
  ldr r3,[r0,#0x4]
  ldrb r3,[r3,#0x8]
  cmp r3,#0x3
  bhi 0x1006e310
  ldr r2,[0x1006e314]
  ldr.w r1,[r2,r3,lsl #0x2]
  cbnz r1,0x1006e2f2
  str.w r0,[r2,r3,lsl #0x2]
  ldr r4,[0x1006e318]
  ldrb r2,[r4,#0x0]
  cbnz r2,0x1006e310
  mov r1,r2
  movs r0,#0x25
  bl 0x1006815c
  movs r0,#0x25
  bl 0x10068114
  movs r3,#0x1
  ldr r0,[0x1006e31c]
  strb r3,[r4,#0x0]
  bl 0x10119dc2
  movs r0,#0x0
  pop {r4,pc}
