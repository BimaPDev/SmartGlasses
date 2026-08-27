/* FUN_2c615a84 @ 0x2c615a84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c615a84(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  
  iVar3 = FUN_2c602400();
  uVar4 = FUN_2c6041d4();
  uVar5 = FUN_2c6041d4();
  psVar6 = (short *)FUN_2c615964();
  sVar9 = *psVar6;
  cVar2 = (char)psVar6[1];
  iVar7 = FUN_2c6041dc(uVar4,0);
  if (iVar3 == iVar7) {
    if (cVar2 == '\x01') {
      iVar3 = 0xc;
      sVar9 = sVar9 + -1;
    }
    else {
      iVar3 = (int)(char)(cVar2 + -1);
    }
  }
  else if (cVar2 == '\f') {
    iVar3 = 1;
    sVar9 = sVar9 + 1;
  }
  else {
    iVar3 = (int)(char)(cVar2 + '\x01');
  }
  func_0x2c6156b8(uVar5,sVar9,iVar3);
  iVar7 = FUN_2c6041dc(uVar4,1);
  iVar3 = _LAB_2c615b00;
  iVar8 = *DAT_2c638888;
  FUN_2c607df0();
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar7 + 0x24);
  }
  else {
    if ((*(int *)(iVar7 + 0x24) != 0) && (bVar1 = *(byte *)(iVar7 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar7 + 0x24) = bVar1 & 8;
    }
    iVar3 = FUN_2c62bb3c(iVar3);
    *(int *)(iVar7 + 0x24) = iVar3;
    *(byte *)(iVar7 + 0x52) = *(byte *)(iVar7 + 0x52) & 0xf7;
  }
  if (iVar3 != 0) {
    FUN_2c637b3c(iVar7);
  }
  if (*DAT_2c638888 == iVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

