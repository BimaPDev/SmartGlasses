; FUN_2c5dad30 @ 0x2c5dad30 size=34
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  cbz r0,0x2c5dad50
  cbz r1,0x2c5dad42
  pop.w {r4,lr}
  b.w 0x2c62be40
  bl 0x2c62be74
  ldr r0,[r4,#0x4]
  pop.w {r4,lr}
  b.w 0x2c62be4c
  pop {r4,pc}
