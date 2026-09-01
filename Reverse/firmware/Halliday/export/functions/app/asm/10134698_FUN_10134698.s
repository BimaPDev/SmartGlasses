; FUN_10134698 @ 0x10134698 size=40
  push {r4,r5,r6,lr}
  mov r4,r2
  movs r5,#0x0
  add.w r6,r0,#0x8
  ldr r2,[r4,#0x4]
  uxtb r3,r5
  cmp r2,r3
  add.w r5,r5,#0x1
  bhi 0x101346b2
  movs r0,#0x0
  pop {r4,r5,r6,pc}
  ldr r2,[r4,#0x8]
  mov r0,r6
  ldrh.w r1,[r2,r3,lsl #0x1]
  bl 0x101327c8
  b 0x101346a2
