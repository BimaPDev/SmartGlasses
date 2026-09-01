; FUN_10131cbc @ 0x10131cbc size=38
  push {r4,r5,r6,lr}
  mov r5,r0
  bl 0x10131956
  mov r6,r0
  mov r0,r5
  bl 0x100e3dec
  mov r4,r0
  cbz r0,0x10131cd8
  mov r0,r5
  bl 0x100cafdc
  mov r4,r0
  mov r0,r6
  bl 0x1013197e
  mov r0,r4
  pop {r4,r5,r6,pc}
