; FUN_140c4514 @ 0x140c4514 size=28
  push {r3,lr}
  mov r3,r0
  mov r0,r1
  mov r1,r2
  ldr r3,[r3,#0x0]
  ldr.w r3,[r3,#-0xc]
  cmp r3,r0
  bcs 0x140c452e
  mov r2,r0
  ldr r0,[0x140c4530]
  bl 0x140cb80c
  pop {r3,pc}
