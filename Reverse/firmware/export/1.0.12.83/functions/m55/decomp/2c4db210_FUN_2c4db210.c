/* FUN_2c4db210 @ 0x2c4db210 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4db210(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  uVar1 = FUN_2c4db1e0();
  uVar2 = FUN_2c4db1e0(param_2);
  iVar3 = 0xe;
  puVar4 = _LAB_2c4db278;
  do {
    if (*puVar4 == (uVar1 ^ uVar2)) {
      uVar1 = puVar4[1];
      if ((int)uVar1 < 0) {
        return;
      }
      FUN_2c4e0504(_LAB_2c4db280,7,0,0,_LAB_2c4db288,0x40,_LAB_2c4db284,0x1300,_LAB_2c4db27c,param_1
                   ,param_2,uVar1);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x22,DAT_2c4c353c,DAT_2c4c3538,DAT_2c4c3530,DAT_2c4c352c,*DAT_2c4c3528,uVar1 & 0xff,
            unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    }
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + 2;
  } while (iVar3 != 0);
  return;
}

