/* FUN_2c615a48 @ 0x2c615a48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c615a48(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_2c602400();
  FUN_2c6041d4();
  FUN_2c615964();
  iVar3 = FUN_2c6041dc(uVar2,1);
  iVar4 = _LAB_2c615a80;
  iVar5 = *DAT_2c638888;
  FUN_2c607df0();
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x24);
  }
  else {
    if ((*(int *)(iVar3 + 0x24) != 0) && (bVar1 = *(byte *)(iVar3 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar3 + 0x24) = bVar1 & 8;
    }
    iVar4 = FUN_2c62bb3c(iVar4);
    *(int *)(iVar3 + 0x24) = iVar4;
    *(byte *)(iVar3 + 0x52) = *(byte *)(iVar3 + 0x52) & 0xf7;
  }
  if (iVar4 != 0) {
    FUN_2c637b3c(iVar3);
  }
  if (*DAT_2c638888 == iVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

