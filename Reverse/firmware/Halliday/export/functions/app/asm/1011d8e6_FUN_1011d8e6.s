; FUN_1011d8e6 @ 0x1011d8e6 size=26
  push {r4,lr}
  mov r4,r0
  cbz r0,0x1011d8fe
  bl 0x100639d8
  movs r2,#0x40
  mov r0,r4
  add.w r1,r4,#0x70
  bl 0x1011d73e
  movs r0,#0x1
  pop {r4,pc}
