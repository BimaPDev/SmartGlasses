; FUN_100938a8 @ 0x100938a8 size=36
  movs r3,#0x0
  push {r0,r1,r2,r4,r5,lr}
  mov r4,r0
  ldr r5,[0x100938cc]
  str r3,[sp,#0x4]
  ldr r3,[sp,#0x4]
  ldrb r0,[r4,r3]
  cbz r0,0x100938c8
  ldr r3,[r5,#0x0]
  add r1,sp,#0x4
  mov r0,r4
  blx r3
  bl 0x100935d0
  cmp r0,#0x1
  bhi 0x100938b2
  add sp,#0xc
  pop {r4,r5,pc}
