; FUN_1405b148 @ 0x1405b148 size=42
  cmp r0,#0x1
  bhi 0x1405b16e
  ldr r3,[0x1405b174]
  ldr.w r0,[r3,r0,lsl #0x2]
  cbz r0,0x1405b16e
  push {r4,lr}
  mov r4,r1
  bl 0x1406d73c
  cbz r0,0x1405b16a
  ldr r0,[r0,#0x4]
  subs r0,r0,r4
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r4,pc}
  movs r0,#0x0
  pop {r4,pc}
  movs r0,#0x0
  bx lr
