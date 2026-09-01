; FUN_100e4e28 @ 0x100e4e28 size=42
  push {r3,r4,r5,lr}
  ldr r4,[0x100e4e54]
  mov r5,r0
  ldr r2,[r4,#0x0]
  cbz r2,0x100e4e4c
  ldr r0,[0x100e4e58]
  ldr r3,[0x100e4e5c]
  ldr r1,[0x100e4e60]
  subs r3,r3,r0
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  orr r0,r3,#0x1160000
  orr r0,r0,#0x21
  bl 0x100a5b78
  movs r0,#0x0
  str r5,[r4,#0x0]
  pop {r3,r4,r5,pc}
