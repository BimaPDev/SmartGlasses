; FUN_10138ef8 @ 0x10138ef8 size=28
  push {r4,lr}
  mov r4,r0
  bl 0x100e8480
  bl 0x10138c92
  cmp r0,#0x1
  bne 0x10138f10
  cbz r4,0x10138f10
  mov r0,r4
  bl 0x10138cf8
  movs r0,#0x0
  pop {r4,pc}
