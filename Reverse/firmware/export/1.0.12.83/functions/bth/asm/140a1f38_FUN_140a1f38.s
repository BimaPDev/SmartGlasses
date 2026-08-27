; FUN_140a1f38 @ 0x140a1f38 size=20
  push {r4,lr}
  ldr r4,[0x140a1f4c]
  ldr r3,[r4,#0x0]
  cbz r3,0x140a1f42
  pop {r4,pc}
  ldr r0,[0x140a1f50]
  bl 0x140e5138
  str r0,[r4,#0x0]
  pop {r4,pc}
