; FUN_10136f60 @ 0x10136f60 size=30
  push {r4,lr}
  bl 0x100dd61c
  cbz r0,0x10136f7c
  ldr r4,[r0,#0x18]
  cbz r4,0x10136f7c
  movs r3,#0x0
  mov r12,r4
  pop.w {r4,lr}
  ldrb r1,[r0,#0x4]
  mov r2,r3
  movs r0,#0x3
  bx r12
  pop {r4,pc}
