; FUN_14075660 @ 0x14075660 size=38
  push {r4,lr}
  ldr r4,[0x14075688]
  ldr r3,[r4,#0x0]
  cbz r3,0x1407567c
  ldr r4,[0x1407568c]
  ldr r2,[r4,#0x0]
  cbz r2,0x14075670
  pop {r4,pc}
  mov r1,r2
  ldr r0,[0x14075690]
  bl 0x140e52f8
  str r0,[r4,#0x0]
  pop {r4,pc}
  ldr r0,[0x14075694]
  bl 0x140e5138
  str r0,[r4,#0x0]
  b 0x14075668
