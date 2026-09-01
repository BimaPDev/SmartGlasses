/* FUN_100540ac @ 0x100540ac */

uint FUN_100540ac(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 == 0) {
    uVar1 = FUN_10053f54(param_1,param_3,param_4);
    return uVar1;
  }
  if (param_4 == 0) {
    FUN_10053ea0();
  }
  else {
    iVar8 = *param_1;
    if ((param_3 - 1 & param_3) != 0) {
      uVar1 = param_3;
      uVar3 = param_4;
      FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10054228,
                   PTR_s__align____align___1______0_10054224,
                   PTR_s_WEST_TOPDIR_zephyr_lib_os_heap_c_10054220,0x147,param_1,param_2,param_3,
                   param_4,param_1,param_2,param_3);
      FUN_10119dc2(PTR_s_align_must_be_a_power_of_2_1005422c);
      FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_lib_os_heap_c_10054220,0x147,uVar1,uVar3);
    }
    if (param_4 >> 3 < *(uint *)(iVar8 + 8)) {
      if (*(uint *)(iVar8 + 8) < 0x8000) {
        iVar9 = 4;
      }
      else {
        iVar9 = 8;
      }
      uVar1 = (param_2 - iVar9) - iVar8 >> 3;
      iVar9 = FUN_10119e3a(iVar8,uVar1);
      iVar2 = FUN_10053b4c(iVar8,uVar1);
      iVar2 = param_2 - iVar2;
      if ((param_3 == 0) || ((param_2 & param_3 - 1) == 0)) {
        uVar3 = FUN_10119e76(iVar8,param_4 + iVar2);
        uVar4 = FUN_10119e3a(iVar8,uVar1);
        if (uVar4 == uVar3) {
          return param_2;
        }
        if (uVar3 < uVar4) {
          FUN_10053b8c(iVar8,uVar1,uVar3 + uVar1);
          uVar5 = FUN_10119e46(iVar8,uVar1,1);
          FUN_10119f16(uVar5,uVar3 + uVar1);
          return param_2;
        }
        iVar9 = iVar9 + uVar1;
        iVar6 = FUN_10119e24(iVar8,iVar9,1);
        if ((-1 < iVar6 << 0x1f) && (iVar6 = FUN_10119e3a(iVar8,iVar9), uVar3 <= iVar6 + uVar4)) {
          FUN_10119ee8(iVar8,iVar9);
          uVar7 = FUN_10119e3a(iVar8,iVar9);
          if (uVar3 - uVar4 < uVar7) {
            iVar2 = (uVar3 - uVar4) + iVar9;
            FUN_10053b8c(iVar8,iVar9,iVar2);
            FUN_10053dd4(iVar8,iVar2);
          }
          FUN_10119eaa(iVar8,uVar1,iVar9);
          FUN_10119e46(iVar8,uVar1,1);
          return param_2;
        }
      }
      uVar3 = FUN_10053f54(param_1,param_3,param_4);
      if (uVar3 != 0) {
        iVar9 = FUN_10119e3a(iVar8,uVar1);
        if (*(uint *)(iVar8 + 8) < 0x8000) {
          iVar8 = 4;
        }
        else {
          iVar8 = 8;
        }
        uVar1 = (iVar9 * 8 - iVar2) - iVar8;
        if (param_4 <= uVar1) {
          uVar1 = param_4;
        }
        FUN_1011ea40(uVar3,param_2,uVar1);
        FUN_10053ea0(param_1,param_2);
        return uVar3;
      }
    }
  }
  return 0;
}

