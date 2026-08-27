/* FUN_2c4b7b5c @ 0x2c4b7b5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b7b5c(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    uVar6 = 0x6000000;
  }
  else if (_LAB_2c4b7c38 < param_1) {
    iVar5 = FUN_2c674568();
    puVar2 = _LAB_2c4b7c3c;
    if (iVar5 == 0) {
      uVar4 = _LAB_2c4b7c44 / param_1;
      if (uVar4 < 2) {
        uVar6 = 0x800000;
        param_4 = _LAB_2c4b7c44;
      }
      else {
        iVar5 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          iVar5 = getBasePriority();
        }
        if (iVar5 != 0x40) {
          *_LAB_2c4b7c3c = 0x2c4b7be0;
          puVar2[1] = unaff_lr;
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x40);
        }
        *(uint *)(_LAB_2c4b7c40 + 0x74) =
             (uVar4 - 2) * 0x100 & 0x300 | *(uint *)(_LAB_2c4b7c40 + 0x74) & 0xfffffcff;
        if (iVar5 == 0) {
          *_LAB_2c4b7c3c = 0xffffffff;
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(iVar5);
        }
        uVar6 = 0;
        param_4 = _LAB_2c4b7c44 / uVar4;
      }
    }
    else {
      uVar6 = 0x1000000;
      param_4 = _LAB_2c4b7c48;
    }
    if (param_4 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4b7c50,_LAB_2c4b7c4c,param_1,param_4);
    }
  }
  else {
    uVar6 = 0x2000000;
    param_4 = _LAB_2c4b7c38;
  }
  func_0x2c673ba8(param_4);
  puVar2 = _LAB_2c4b7c3c;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *_LAB_2c4b7c3c = 0x2c4b7b86;
    puVar2[1] = unaff_lr;
  }
  iVar3 = _LAB_2c4b7c40;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  *(uint *)(_LAB_2c4b7c40 + 0x74) = *(uint *)(_LAB_2c4b7c40 + 0x74) & 0xf87fffff | uVar6;
  *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) | 0x3fc0;
  *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar3 + 0x7c) | 0xff;
  if (iVar5 == 0) {
    *_LAB_2c4b7c3c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x2c673b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c673b14)(2);
  return;
}

