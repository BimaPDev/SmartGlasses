; FUN_10138eca @ 0x10138eca size=24
  push {r4,lr}
  ldr r0,[r0,#0xc]
  mov r4,r3
  mov r3,r2
  mov r2,r1
  bl 0x100e96f4
  cbnz r0,0x10138ee0
  cbz r4,0x10138ee0
  strd r0,r0,[r4,#0x0]
  pop {r4,pc}
