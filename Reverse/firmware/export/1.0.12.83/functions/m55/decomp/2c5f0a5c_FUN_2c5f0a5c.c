/* FUN_2c5f0a5c @ 0x2c5f0a5c */

int FUN_2c5f0a5c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_2c5fefc8(DAT_2c5f0bf4,param_1);
  FUN_2c5ff0b8();
  FUN_2c627e28(iVar2);
  *(undefined4 *)(iVar2 + 0x44) = param_4;
  *(undefined4 *)(iVar2 + 0x24) = param_2;
  *(undefined2 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 1;
  *(undefined1 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 0x40) = 0;
  uVar3 = FUN_2c606a10(iVar2);
  FUN_2c603a04(uVar3,0,DAT_2c5f0bf8);
  FUN_2c607048(uVar3,0x27d1);
  FUN_2c627e28(uVar3,4);
  *(undefined4 *)(iVar2 + 0x34) = uVar3;
  if (param_3 == 2) {
    iVar4 = FUN_2c62c45c(8);
    if (iVar4 != 0) {
      FUN_2c62dbd4(iVar4,8,DAT_2c5f0bfc,*(undefined4 *)(iVar2 + 0x24));
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5f0c04,0xbf,DAT_2c5f0c08,DAT_2c5f0c00,iVar4,*(undefined4 *)(iVar2 + 4),
                   iVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5f0c04,0xba,DAT_2c5f0c08,DAT_2c5f0c18);
  }
  if (param_3 != 1) {
    uVar3 = FUN_2c606a10(uVar3);
    FUN_2c603a04(uVar3,0,DAT_2c5f0bf8);
    sVar1 = FUN_2c5f110c(iVar2);
    FUN_2c607048(uVar3,(int)(short)(sVar1 - *(short *)(iVar2 + 0x28)),0x27d1);
    FUN_2c627e28(uVar3,4);
    *(undefined4 *)(iVar2 + 0x38) = uVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5f0c04,0xd1,DAT_2c5f0c14,DAT_2c5f0c10,DAT_2c5f0c1c,*(undefined4 *)(iVar2 + 4)
               ,iVar2);
}

