; FUN_100e3dec @ 0x100e3dec size=42
  push {r4,lr}
  mov r4,r0
  bl 0x100e255c
  cbz r0,0x100e3e12
  ldr.w r3,[r0,#0xe8]
  lsls r2,r3,#0x18
  bpl 0x100e3e12
  ldr.w r3,[r0,#0xec]
  lsls r3,r3,#0x16
  bpl 0x100e3e12
  mov r0,r4
  ldr r1,[0x100e3e18]
  bl 0x100e3b04
  movs r0,#0x0
  pop {r4,pc}
  movs r0,#0x1
  b 0x100e3e10
