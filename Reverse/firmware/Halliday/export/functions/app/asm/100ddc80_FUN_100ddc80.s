; FUN_100ddc80 @ 0x100ddc80 size=38
  push {r3,r4,r5,lr}
  ldr r4,[0x100ddca8]
  mov r5,r0
  ldr r2,[r4,#0x0]
  cbz r2,0x100ddca0
  ldr r3,[0x100ddcac]
  ldr r2,[0x100ddcb0]
  ldr r0,[0x100ddcb4]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  ldr r1,[0x100ddcb8]
  orrs r0,r3
  bl 0x100a5b78
  movs r0,#0x0
  str r5,[r4,#0x0]
  pop {r3,r4,r5,pc}
