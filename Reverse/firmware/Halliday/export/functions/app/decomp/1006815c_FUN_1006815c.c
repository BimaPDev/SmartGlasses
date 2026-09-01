/* FUN_1006815c @ 0x1006815c */

void FUN_1006815c(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (7 < param_2 + 1U) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_100681b8,
                 PTR_s_prio_<__((1UL_<<_(3))___1)_100681b4,
                 PTR_s_WEST_TOPDIR_zephyr_arch_arm_core_100681b0,0xc6,param_1,param_2);
    FUN_10119dc2(PTR_s_invalid_priority__d_for__d_irq__v_100681bc,param_2,param_1,7);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_arch_arm_core_100681b0,0xc6,param_3,param_4);
  }
  bVar4 = -1 < (char)param_1;
  iVar2 = DAT_100681c0;
  if (bVar4) {
    iVar2 = (char)param_1 + -0x20000000;
  }
  cVar1 = (char)(param_2 + 1U) * ' ';
  if (bVar4) {
    iVar3 = iVar2 + 0xe100;
    *(char *)(iVar2 + 0xe400) = cVar1;
  }
  else {
    param_1 = param_1 & 0xf;
    iVar3 = iVar2;
  }
  if (!bVar4) {
    *(char *)(iVar3 + param_1) = cVar1;
  }
  return;
}

