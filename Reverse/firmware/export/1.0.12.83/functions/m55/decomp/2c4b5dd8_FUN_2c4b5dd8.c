/* FUN_2c4b5dd8 @ 0x2c4b5dd8 */

undefined4 FUN_2c4b5dd8(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = FUN_2c674568();
  pbVar2 = DAT_2c4b5e1c;
  bVar4 = iVar3 != 0;
  bVar1 = *DAT_2c4b5e1c;
  *DAT_2c4b5e1c = bVar1 | 1;
  if (bVar1 == 0) {
    pbVar2[1] = bVar4;
    FUN_2c4b8038(0);
    FUN_2c4b6bfc();
    return 0;
  }
  if ((bool)pbVar2[1] == bVar4) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4b5e24,DAT_2c4b5e20,bVar4,1,bVar1);
}

