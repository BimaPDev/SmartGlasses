; FUN_2c540fd2 @ 0x2c540fd2 size=22
  push {r4,lr}
  ldr.w r1,[r3],#0x8
  mov r4,r0
  cmp r1,r3
  beq 0x2c540fe4
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
