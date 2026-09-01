; FUN_1007ec9c @ 0x1007ec9c size=70
  push {r0,r1,r4,r5,r6,lr}
  movs r2,#0x0
  mov r5,r1
  add r1,sp,#0x4
  mov r4,r0
  ldr r6,[r0,#0xc]
  bl 0x1007e8dc
  cmp r0,#0x1
  beq 0x1007ecc8
  ldr r3,[r4,#0x0]
  ldrb r0,[r3,#0x10]
  cbz r0,0x1007ecc4
  ldr r3,[r3,#0xc]
  cbz r3,0x1007ecde
  movs r2,#0x8c
  ldr r1,[0x1007ece4]
  ldr r0,[0x1007ece8]
  blx r3
  movs r0,#0x0
  add sp,#0x8
  pop {r4,r5,r6,pc}
  ldr r3,[r6,#0x74]
  ldr r2,[sp,#0x4]
  ldr r3,[r3,#0x10]
  ldrh.w r1,[r3,r2,lsl #0x1]
  strh r1,[r5,#0x0]
  movw r1,#0xffff
  strh.w r1,[r3,r2,lsl #0x1]
  b 0x1007ecc4
  mov r0,r3
  b 0x1007ecc4
