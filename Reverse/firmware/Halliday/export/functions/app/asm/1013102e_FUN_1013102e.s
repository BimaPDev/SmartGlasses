; FUN_1013102e @ 0x1013102e size=36
  push {r4,lr}
  mov r2,r0
  bl 0x1013101a
  cbnz r0,0x10131046
  cmp r1,#0x1
  beq 0x1013104c
  movs r1,#0x1
  mov r0,r2
  bl 0x1013101a
  cbz r0,0x1013104c
  ldr r3,[r0,#0x4]
  cbnz r3,0x1013104e
  ldr r0,[r0,#0x8]
  pop {r4,pc}
  mov r0,r3
  b 0x1013104c
