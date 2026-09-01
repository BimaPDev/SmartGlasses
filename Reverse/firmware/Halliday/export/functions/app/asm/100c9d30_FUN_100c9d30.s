; FUN_100c9d30 @ 0x100c9d30 size=42
  ldr r3,[0x100c9d5c]
  push {r4,lr}
  ldrb r1,[r3,#0x0]
  ldr r0,[0x100c9d60]
  and r1,r1,#0xf
  bl 0x1013356c
  mov r4,r0
  cbz r0,0x100c9d56
  ldr r1,[0x100c9d64]
  adds r0,#0x60
  bl 0x1013cba6
  ldr r1,[0x100c9d68]
  add.w r0,r4,#0x28
  bl 0x10114438
  mov r0,r4
  pop {r4,pc}
