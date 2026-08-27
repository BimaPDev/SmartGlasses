/* FUN_2c473544 @ 0x2c473544 */

int FUN_2c473544(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    FUN_2c473450();
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = FUN_2c4732c8(param_1,param_3);
    return iVar1;
  }
  uVar3 = *(uint *)(param_2 + -4);
  uVar4 = uVar3 & 0xfffffffc;
  if (uVar4 == 0) {
LAB_2c47365e:
    FUN_2c472ee0();
LAB_2c473662:
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c473674,DAT_2c473670,0x532);
  }
  if ((param_3 == 0) || (uVar5 = param_3 + 3 & 0xfffffffc, 0x1ffffff < uVar5)) {
    if ((uVar3 & 1) != 0) goto LAB_2c473662;
    uVar5 = 0;
  }
  else {
    if (uVar5 < 0xc) {
      uVar5 = 0xc;
    }
    if ((int)(uVar3 << 0x1f) < 0) goto LAB_2c473662;
    if (uVar4 < uVar5) {
      if ((uVar4 + 4 + (*(uint *)(param_2 + uVar4) & 0xfffffffc) < uVar5) ||
         (-1 < (int)(*(uint *)(param_2 + uVar4) << 0x1f))) {
        iVar1 = FUN_2c4732c8(param_1,param_3);
        if (iVar1 == 0) {
          return 0;
        }
        if (uVar4 <= param_3) {
          param_3 = uVar4;
        }
        FUN_2c674668(iVar1,param_2,param_3);
        FUN_2c473450(param_1,param_2);
        return iVar1;
      }
      FUN_2c4730f4(param_1,param_2 + -8);
      uVar3 = *(uint *)(param_2 + -4) & 0xfffffffc;
      iVar1 = param_2 + -4 + uVar3;
      if (uVar3 != 0) {
        *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
        uVar3 = *(uint *)(param_2 + -4);
        *(uint *)(param_2 + -4) = uVar3 & 0xfffffffe;
        if ((uVar3 & 0xfffffffc) < uVar5 + 0x10) {
          return param_2;
        }
        goto LAB_2c4735f8;
      }
      goto LAB_2c47365e;
    }
  }
  if (uVar4 < uVar5 + 0x10) {
    return param_2;
  }
LAB_2c4735f8:
  iVar1 = FUN_2c472fb4(param_2 + -8,uVar5);
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  uVar2 = FUN_2c4730f4(param_1);
  FUN_2c472e28(param_1,uVar2);
  return param_2;
}

