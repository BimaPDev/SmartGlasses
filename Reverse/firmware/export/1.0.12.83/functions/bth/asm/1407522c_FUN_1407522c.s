; FUN_1407522c @ 0x1407522c size=30
  push {r4,lr}
  mov r4,r0
  adds r0,#0x10
  movs r3,#0x0
  uxth r0,r0
  bl 0x140759b8
  cbz r0,0x14075248
  movs r3,#0x0
  str r3,[r0,#0x4]
  str r3,[r0,#0x0]
  str r3,[r0,#0x8]
  str r3,[r0,#0xc]
  strh r4,[r0,#0x6]
  pop {r4,pc}
