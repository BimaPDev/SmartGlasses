/* FUN_2c4acd50 @ 0x2c4acd50 */

int FUN_2c4acd50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_2c4a8ca0();
  iVar2 = FUN_2c4accc4(iVar1,1,param_1);
  if (iVar2 < 0) {
    if (0 < iVar1) {
      uVar4 = 0;
      do {
        piVar3 = (int *)FUN_2c4a8cac(uVar4);
        iVar6 = *piVar3;
        iVar5 = FUN_2c4ac850(iVar6,1,param_1,0);
        if (iVar5 < 0) {
          return iVar2;
        }
        FUN_2c4ac780(iVar6,(int)*(char *)(iVar6 + 0x304));
        uVar4 = uVar4 + 1 & 0xff;
      } while ((int)uVar4 < iVar1);
    }
  }
  else {
    FUN_2c6444fc(5000);
    if (0 < iVar1) {
      uVar4 = 0;
      do {
        piVar3 = (int *)FUN_2c4a8cac(uVar4);
        iVar5 = *piVar3;
        uVar4 = uVar4 + 1 & 0xff;
        iVar2 = FUN_2c4ac670(iVar5);
        if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x3fc,DAT_2c4ace44,DAT_2c4ace40,DAT_2c4ace3c,*(undefined1 *)(iVar5 + 0xa0),
                DAT_2c4ace38);
        }
      } while ((int)uVar4 < iVar1);
      uVar4 = 0;
      do {
        piVar3 = (int *)FUN_2c4a8cac(uVar4);
        iVar5 = *piVar3;
        iVar2 = FUN_2c4ac850(iVar5,1,param_1,0);
        if (iVar2 < 0) {
          return 0;
        }
        FUN_2c4ac780(iVar5,(int)*(char *)(iVar5 + 0x304));
        uVar4 = uVar4 + 1 & 0xff;
      } while ((int)uVar4 < iVar1);
      return 0;
    }
    iVar2 = -1;
  }
  return iVar2;
}

