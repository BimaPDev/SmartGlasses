/* FUN_2c4b7c58 @ 0x2c4b7c58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b7c58(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    uVar6 = 0x32000000;
  }
  else if (_LAB_2c4b7d4c < param_1) {
    if (_LAB_2c4b7d58 < param_1) {
      if (_LAB_2c4b7d5c < param_1) {
        iVar4 = FUN_2c674568();
        puVar2 = _LAB_2c4b7d50;
        if (iVar4 == 0) {
          uVar5 = _LAB_2c4b7d60 / param_1;
          if (uVar5 < 2) {
            uVar6 = 0x800000;
            param_4 = _LAB_2c4b7d60;
          }
          else {
            iVar4 = 0;
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              iVar4 = getBasePriority();
            }
            if (iVar4 != 0x40) {
              *_LAB_2c4b7d50 = 0x2c4b7cf4;
              puVar2[1] = unaff_lr;
            }
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              setBasePriority(0x40);
            }
            *(uint *)(_LAB_2c4b7d54 + 0x6c) =
                 (uVar5 - 2) * 0x200000 & 0x600000 | *(uint *)(_LAB_2c4b7d54 + 0x6c) & 0xff9fffff;
            if (iVar4 == 0) {
              *_LAB_2c4b7d50 = 0xffffffff;
            }
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              setBasePriority(iVar4);
            }
            uVar6 = 0;
            param_4 = _LAB_2c4b7d60 / uVar5;
          }
        }
        else {
          uVar6 = 0x1000000;
          param_4 = _LAB_2c4b7d6c;
        }
        if (param_4 < param_1) {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(_LAB_2c4b7d68,_LAB_2c4b7d64,param_1,param_4);
        }
      }
      else {
        uVar6 = 0x2000000;
        param_4 = _LAB_2c4b7d5c;
      }
    }
    else {
      uVar6 = 0x6000000;
      param_4 = _LAB_2c4b7d58;
    }
  }
  else {
    uVar6 = 0x22000000;
    param_4 = _LAB_2c4b7d4c;
  }
  func_0x2c6747e8(param_4);
  puVar2 = _LAB_2c4b7d50;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *_LAB_2c4b7d50 = 0x2c4b7c82;
    puVar2[1] = unaff_lr;
  }
  iVar3 = _LAB_2c4b7d54;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  *(uint *)(_LAB_2c4b7d54 + 0x6c) = *(uint *)(_LAB_2c4b7d54 + 0x6c) & 0xc87fffff | uVar6;
  *(uint *)(iVar3 + 0x6c) = *(uint *)(iVar3 + 0x6c) | 0x4000;
  *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar3 + 0x7c) | 0x100;
  if (iVar4 == 0) {
    *_LAB_2c4b7d50 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x2c673b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c673b14)(2);
  return;
}

