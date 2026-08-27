/* FUN_2c5d828c @ 0x2c5d828c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d828c(undefined4 param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = FUN_2c602400();
  iVar4 = FUN_2c621084(param_1);
  if ((iVar4 == 0) || (bVar2 = iVar3 == 0, iVar3 == 0)) {
    return;
  }
  pcVar5 = (char *)FUN_2c62107c();
  uVar6 = FUN_2c66c4ec();
  uVar7 = FUN_2c5e2e80(_LAB_2c5d830c);
  iVar4 = FUN_2c62b85c(pcVar5,uVar6,uVar7,bVar2,bVar2);
  if (*pcVar5 == '\0') {
    return;
  }
  if (iVar4 < 0x5f) {
    FUN_2c6388dc(iVar3,bVar2);
    uVar7 = 0x27d1;
    uVar6 = 0x27d1;
  }
  else {
    FUN_2c6388dc(iVar3,1);
    uVar7 = 0x14;
    uVar6 = 0x5f;
  }
  FUN_2c607048(iVar3,uVar6,uVar7);
  FUN_2c607df0();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = *(char **)(iVar3 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar3 + 0x52) << 0x1c)) {
      iVar4 = FUN_2c66c4ec(pcVar5);
      iVar4 = FUN_2c62bebc(pcVar5,iVar4 + 1);
      *(int *)(iVar3 + 0x24) = iVar4;
      if (iVar4 == 0) {
        return;
      }
      goto LAB_2c63877a;
    }
  }
  else {
    if (*(char **)(iVar3 + 0x24) == pcVar5) goto LAB_2c638786;
    if ((*(char **)(iVar3 + 0x24) != (char *)0x0) &&
       (bVar1 = *(byte *)(iVar3 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar3 + 0x24) = bVar1 & 8;
    }
  }
  iVar4 = FUN_2c66c4ec(pcVar5);
  iVar4 = lv_mem_alloc(iVar4 + 1);
  *(int *)(iVar3 + 0x24) = iVar4;
  if (iVar4 != 0) {
    FUN_2c6435c4(iVar4,pcVar5);
    *(byte *)(iVar3 + 0x52) = *(byte *)(iVar3 + 0x52) & 0xf7;
    if (*(int *)(iVar3 + 0x24) != 0) {
LAB_2c63877a:
      FUN_2c637b3c(iVar3);
      return;
    }
  }
  return;
}

