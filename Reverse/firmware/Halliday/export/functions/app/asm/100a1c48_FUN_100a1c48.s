; FUN_100a1c48 @ 0x100a1c48 size=70
  ldr r1,[0x100a1c90]
  push {r4,lr}
  movs r2,#0x0
  mov r4,r1
  ldr r3,[r1,#0x4]
  cbnz r3,0x100a1c5e
  add.w r2,r4,r2, lsl #0x2
  str r0,[r2,#0x4]
  mov r0,r3
  pop {r4,pc}
  adds r2,#0x1
  cmp r2,#0x5
  add.w r1,r1,#0x4
  bne 0x100a1c50
  ldr r3,[0x100a1c94]
  ldr r0,[0x100a1c98]
  ldr r2,[0x100a1c9c]
  subs r0,r0,r3
  lsls r0,r0,#0x5
  and r0,r0,#0xff00
  orr r0,r0,#0x800000
  orr r0,r0,#0x11
  mvn r3,#0x2
  ldr r1,[0x100a1ca0]
  bl 0x100a5b78
  mvn r0,#0x2
  b 0x100a1c5c
