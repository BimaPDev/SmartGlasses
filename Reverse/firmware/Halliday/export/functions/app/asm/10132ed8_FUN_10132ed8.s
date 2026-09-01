; FUN_10132ed8 @ 0x10132ed8 size=42
  add.w r2,r0,#0x10
  push {r4,lr}
  movs r1,#0x6
  mov r4,r0
  mov r0,r2
  bl 0x10132e2e
  cbz r0,0x10132f00
  mov.w r1,#0x2000
  mov r0,r2
  bl 0x10132e3c
  mov r0,r4
  pop.w {r4,lr}
  movs r1,#0x0
  b.w 0x100c60a0
  pop {r4,pc}
