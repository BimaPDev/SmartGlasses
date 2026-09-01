; FUN_10132f02 @ 0x10132f02 size=28
  push {r4,lr}
  movs r1,#0xd
  mov r4,r0
  adds r0,#0x10
  bl 0x10132e6c
  cbz r0,0x10132f1c
  mov r0,r4
  pop.w {r4,lr}
  movs r1,#0x1
  b.w 0x100c60a0
  pop {r4,pc}
