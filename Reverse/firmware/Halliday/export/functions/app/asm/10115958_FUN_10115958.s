; FUN_10115958 @ 0x10115958 size=48
  push {r4,lr}
  mov.w r3,#0x20
  mrs r4,basepri
  msr basepri_max,r3
  isb #0xf
  bl 0x10061900
  ldr r3,[0x10115988]
  ldrd r2,r3,[r3,#0x0]
  adds r2,r2,r0
  adc r3,r3,#0x0
  msr basepri,r4
  isb #0xf
  mov r0,r2
  mov r1,r3
  pop {r4,pc}
