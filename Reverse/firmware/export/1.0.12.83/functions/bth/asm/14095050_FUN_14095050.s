; FUN_14095050 @ 0x14095050 size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x14095066
  ldrb.w r3,[r0,#0x4b]
  subs r3,#0x3
  cmp r3,#0x1
  ite hi
  mov.hi r0,#0x0
  ldr.ls r0,[r0,#0x18]
  pop {r4,pc}
  mov r3,lr
  ldr r2,[0x14095078]
  ldr r1,[0x1409507c]
  movs r0,#0x42
  bl 0x1402a64c
