/* FUN_2c4ad13c @ 0x2c4ad13c */

int FUN_2c4ad13c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = FUN_2c4a8ca0();
  iVar2 = FUN_2c4accc4(iVar1,0,param_1,1);
  if (iVar2 < 0) {
    if (0 < iVar1) {
      uVar5 = 0;
      do {
        puVar4 = (undefined4 *)FUN_2c4a8cac(uVar5);
        uVar5 = uVar5 + 1 & 0xff;
        iVar6 = FUN_2c4ac850(*puVar4,0,param_1);
        if (iVar6 < 0) {
          return iVar2;
        }
      } while ((int)uVar5 < iVar1);
    }
    return iVar2;
  }
  FUN_2c6444fc(*DAT_2c4ad1fc);
  if (0 < iVar1) {
    uVar5 = 0;
    do {
      piVar3 = (int *)FUN_2c4a8cac(uVar5);
      iVar6 = *piVar3;
      uVar5 = uVar5 + 1 & 0xff;
      iVar2 = FUN_2c4acef0(iVar6);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x3ac,DAT_2c4ad20c,DAT_2c4ad208,DAT_2c4ad204,*(undefined1 *)(iVar6 + 0xa0),
              DAT_2c4ad200);
      }
    } while ((int)uVar5 < iVar1);
    uVar5 = 0;
    do {
      puVar4 = (undefined4 *)FUN_2c4a8cac(uVar5);
      uVar5 = uVar5 + 1 & 0xff;
      iVar2 = FUN_2c4ac850(*puVar4,0,param_1);
      if (iVar2 < 0) {
        return 0;
      }
    } while ((int)uVar5 < iVar1);
  }
  return 0;
}

