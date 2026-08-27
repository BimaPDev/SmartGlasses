/* FUN_2c4be4fa @ 0x2c4be4fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4be4fa(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined1 *)(_LAB_2c4be534 + param_1) = 1;
    puVar2 = _LAB_2c4be538;
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = getBasePriority();
    }
    if (iVar3 != 0x40) {
      *_LAB_2c4be538 = 0x2c4be510;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    if (iVar3 == 0) {
      *_LAB_2c4be538 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4be53c,param_1,param_3,param_4,param_4);
}

