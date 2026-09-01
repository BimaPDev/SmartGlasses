; FUN_100b87b8 @ 0x100b87b8 size=42
  push {r4,r5,r6,lr}
  mov r6,r0
  mov r5,r1
  ldr r0,[0x100b87e4]
  ldr r4,[0x100b87e8]
  ldr r3,[r1,#0x4]
  subs r4,r4,r0
  lsls r4,r4,#0x5
  and r4,r4,#0xff00
  orr r0,r4,#0x1ea0000
  ldr r2,[0x100b87ec]
  ldr r1,[0x100b87f0]
  orr r0,r0,#0x31
  bl 0x100a5b78
  movs r0,#0x0
  str r5,[r6,#0x0]
  pop {r4,r5,r6,pc}
