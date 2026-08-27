/* FUN_2c50fd0c @ 0x2c50fd0c */

void FUN_2c50fd0c(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = DAT_2c50fde4;
  uVar2 = DAT_2c50fde0;
  *(undefined4 *)(param_2 + 0x128) = 0;
  iVar6 = param_2;
  do {
    if ('\0' < *(char *)(iVar6 + 0x90)) {
      uVar7 = 0;
      do {
        iVar4 = *(int *)(iVar6 + uVar7 * 4);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c50fddc,0x538,uVar3,DAT_2c50fdd8,uVar2);
        }
        iVar5 = *(int *)(iVar6 + 0x58);
        bVar1 = *(byte *)(iVar5 + 0x90);
        if (bVar1 == 0x24) {
          FUN_2c62bea8();
        }
        else {
          *(int *)(iVar5 + (uint)bVar1 * 4) = iVar4;
          *(byte *)(iVar5 + 0x90) = bVar1 + 1;
        }
        *(undefined4 *)(iVar6 + uVar7 * 4) = 0;
        uVar7 = uVar7 + 1 & 0xff;
      } while ((int)uVar7 < (int)*(char *)(iVar6 + 0x90));
    }
    iVar4 = iVar6 + 0x94;
    FUN_2c62a624(iVar6 + 0x84,0,0,0,0);
    *(undefined2 *)(iVar6 + 0x8c) = 0;
    *(undefined1 *)(iVar6 + 0x90) = 0;
    *(undefined1 *)(iVar6 + 0x92) = 0;
    iVar6 = iVar4;
  } while (iVar4 != param_2 + 0x128);
  bVar1 = *(byte *)(param_1 + 0x94);
  if (bVar1 != 0x24) {
    *(int *)(param_1 + (uint)bVar1 * 4) = param_2;
    *(byte *)(param_1 + 0x94) = bVar1 + 1;
    return;
  }
  FUN_2c62bea8(param_2);
  return;
}

