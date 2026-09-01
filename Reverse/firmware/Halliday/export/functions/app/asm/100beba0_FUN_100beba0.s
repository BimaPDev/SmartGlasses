; FUN_100beba0 @ 0x100beba0 size=78
  push {r0,r1,r4,r5,r6,lr}
  ldr r3,[0x100bebf0]
  mov r5,r0
  ldr r0,[r3,#0x0]
  ldrb r6,[r3,#0xe]
  cbz r0,0x100bebe2
  cmp r5,#0x2
  bhi 0x100bebe8
  ldr r1,[0x100bebf4]
  add.w r3,r6,r6, lsl #0x1
  add r3,r5
  add.w r1,r1,r3, lsl #0x3
  bl 0x1013241c
  ldr r4,[0x100bebf8]
  ldr r3,[0x100bebfc]
  ldr r0,[0x100bec00]
  subs r4,r4,r3
  lsls r4,r4,#0x5
  and r4,r4,#0xff00
  orrs r0,r4
  mov r3,r6
  ldr r2,[0x100bec04]
  ldr r1,[0x100bec08]
  str r5,[sp,#0x0]
  bl 0x100a5b78
  movs r0,#0x0
  add sp,#0x8
  pop {r4,r5,r6,pc}
  mvn r0,#0x4
  b 0x100bebde
  mvn r0,#0x15
  b 0x100bebde
