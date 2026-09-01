; FUN_100eb908 @ 0x100eb908 size=32
  push {r4,lr}
  mov r4,r0
  cbz r0,0x100eb926
  mov.w r1,#0xffffffff
  ldr r0,[0x100eb928]
  bl 0x1011dbf4
  mov r0,r4
  bl 0x100eb1c0
  pop.w {r4,lr}
  b.w 0x100eafd0
  pop {r4,pc}
