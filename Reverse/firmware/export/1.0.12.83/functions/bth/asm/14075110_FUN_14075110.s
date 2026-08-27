; FUN_14075110 @ 0x14075110 size=72
  push {r4,lr}
  ldrb r2,[r0,#0x0]
  sub sp,#0x8
  subs r3,r2,#0x1
  uxtb r1,r3
  cmp r1,#0x27
  bhi 0x14075140
  ldr r4,[0x14075158]
  add.w r3,r3,r3, lsl #0x2
  add.w r4,r4,r3, lsl #0x3
  ldr r3,[r4,#0x20]
  cmp r3,r0
  bne 0x1407514a
  bl 0x140756c0
  movs r3,#0x0
  strb r3,[r4,#0x1]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x140756b4
  mov r3,lr
  ldr r1,[0x1407515c]
  ldr r0,[0x14075160]
  bl 0x1402b0f8
  mov r2,r0
  ldr r1,[0x1407515c]
  ldr r0,[0x14075164]
  str.w lr,[sp,#0x0]
  bl 0x1402b0f8
