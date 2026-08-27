; FUN_140d77d4 @ 0x140d77d4 size=24
  push {r3,lr}
  mov r3,r0
  mov r0,r1
  mov r1,r2
  ldr r3,[r3,#0x4]
  cmp r0,r3
  bls 0x140d77ea
  mov r2,r0
  ldr r0,[0x140d77ec]
  bl 0x140cb80c
  pop {r3,pc}
