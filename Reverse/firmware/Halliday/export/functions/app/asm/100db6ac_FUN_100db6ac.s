; FUN_100db6ac @ 0x100db6ac size=18
  movs r2,#0x0
  push {r3,lr}
  ldr r3,[0x100db6c0]
  mov r1,r2
  movs r0,#0x18
  ldr r3,[r3,#0x0]
  blx r3
  movs r0,#0x0
  pop {r3,pc}
