; FUN_2c52751c @ 0x2c52751c size=40
  push {r4,lr}
  sub sp,#0x8
  mov r4,r1
  bl 0x2c525874
  bl 0x2c5259c0
  cbz r0,0x2c527554
  ldr r0,[0x2c527558]
  mov.w r2,#0x11c
  ldr r3,[0x2c52755c]
  ldr r1,[0x2c527560]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
  add sp,#0x8
  pop {r4,pc}
