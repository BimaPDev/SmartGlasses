; FUN_100d0b48 @ 0x100d0b48 size=40
  push {r4,lr}
  movs r1,#0x6
  bl 0x1013426c
  mov r4,r0
  cbnz r0,0x100d0b6c
  ldr r2,[0x100d0b70]
  ldr r3,[0x100d0b74]
  ldr r0,[0x100d0b78]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  ldr r2,[0x100d0b7c]
  ldr r1,[0x100d0b80]
  orrs r0,r3
  bl 0x100a5b78
  mov r0,r4
  pop {r4,pc}
