/* FUN_2c5d2b38 @ 0x2c5d2b38 */

void FUN_2c5d2b38(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = FUN_2c602400();
  iVar3 = FUN_2c621084(param_1);
  if ((((iVar3 == 0) || (iVar2 == 0)) || (pcVar4 = (char *)FUN_2c62107c(), pcVar4 == (char *)0x0))
     || (*pcVar4 == '\0')) {
    return;
  }
  FUN_2c607df0();
  if (pcVar4 == (char *)0x0) {
    pcVar4 = *(char **)(iVar2 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar2 + 0x52) << 0x1c)) {
      iVar3 = FUN_2c66c4ec(pcVar4);
      iVar3 = FUN_2c62bebc(pcVar4,iVar3 + 1);
      *(int *)(iVar2 + 0x24) = iVar3;
      if (iVar3 == 0) {
        return;
      }
      goto LAB_2c63877a;
    }
  }
  else {
    if (*(char **)(iVar2 + 0x24) == pcVar4) goto LAB_2c638786;
    if ((*(char **)(iVar2 + 0x24) != (char *)0x0) &&
       (bVar1 = *(byte *)(iVar2 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar2 + 0x24) = bVar1 & 8;
    }
  }
  iVar3 = FUN_2c66c4ec(pcVar4);
  iVar3 = lv_mem_alloc(iVar3 + 1);
  *(int *)(iVar2 + 0x24) = iVar3;
  if (iVar3 != 0) {
    FUN_2c6435c4(iVar3,pcVar4);
    *(byte *)(iVar2 + 0x52) = *(byte *)(iVar2 + 0x52) & 0xf7;
    if (*(int *)(iVar2 + 0x24) != 0) {
LAB_2c63877a:
      FUN_2c637b3c(iVar2);
      return;
    }
  }
  return;
}

