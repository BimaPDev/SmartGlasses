; FUN_140cba90 @ 0x140cba90 size=28
  ldr r3,[0x140cbaac]
  push {r4,lr}
  str r3,[r0,#0x0]
  adds r3,#0x14
  mov r4,r0
  adds r0,#0x8
  str r3,[r0,#0x0]
  movs r3,#0x0
  str.w r3,[r0,#-0x4]
  bl 0x140cb84c
  mov r0,r4
  pop {r4,pc}
