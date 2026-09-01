; FUN_10057bdc @ 0x10057bdc size=28
  mov r3,r0
  ldr r0,[r0,#0x0]
  push {r4,lr}
  mov r4,r1
  mov r1,r2
  cbz r0,0x10057bec
  ldrb r2,[r0,#0x0]
  cbnz r2,0x10057bf6
  mov r0,r4
  ldr r2,[0x10057bf8]
  bl 0x10118a1c
  mov r0,r4
  pop {r4,pc}
