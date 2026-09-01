; FUN_100a1db0 @ 0x100a1db0 size=42
  movs r2,#0x1
  push {r3,lr}
  ldr r3,[0x100a1ddc]
  ldr r0,[0x100a1de0]
  ldr r3,[r3,#0x0]
  ldr r1,[0x100a1de4]
  strb r2,[r3,#0x8]
  ldr r3,[0x100a1de8]
  ldr r2,[0x100a1dec]
  subs r0,r0,r3
  lsls r0,r0,#0x5
  and r0,r0,#0xff00
  orr r0,r0,#0xd70000
  orr r0,r0,#0x31
  bl 0x100a5b78
  movs r0,#0x0
  pop {r3,pc}
