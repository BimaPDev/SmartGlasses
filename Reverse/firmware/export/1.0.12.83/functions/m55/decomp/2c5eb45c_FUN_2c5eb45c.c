/* FUN_2c5eb45c @ 0x2c5eb45c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5eb45c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  iVar2 = FUN_2c66c4ec();
  iVar3 = FUN_2c62c45c(iVar2 + 1);
  iVar1 = _LAB_2c5eb4b8;
  if (iVar3 != 0) {
    if (iVar2 != 0) {
      pbVar6 = (byte *)(param_1 + -1);
      pbVar7 = (byte *)(iVar3 + -1);
      pbVar4 = pbVar6 + iVar2;
      do {
        pbVar6 = pbVar6 + 1;
        bVar5 = *pbVar6;
        if ((*(byte *)(iVar1 + (uint)bVar5) & 3) == 1) {
          bVar5 = bVar5 + 0x20;
        }
        pbVar7 = pbVar7 + 1;
        *pbVar7 = bVar5;
      } while (pbVar6 != pbVar4);
    }
    *(undefined1 *)(iVar3 + iVar2) = 0;
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5eb4c4,0x36,_LAB_2c5eb4c0,_LAB_2c5eb4bc);
}

