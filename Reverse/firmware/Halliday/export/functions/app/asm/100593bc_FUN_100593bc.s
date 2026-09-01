; FUN_100593bc @ 0x100593bc size=34
  push {r4,lr}
  mov r4,r0
  mov r3,r2
  mov r2,r1
  mov r1,r0
  ldr r0,[0x100593e0]
  bl 0x1011a066
  ldr r3,[r4,#0x10]
  ldrb r3,[r3,#0x4]
  cbz r3,0x100593dc
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x1011aca2
  pop {r4,pc}
