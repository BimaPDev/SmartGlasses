/* FUN_2c498890 @ 0x2c498890 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c498890(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar2 = _LAB_2c4988d4;
  pcVar1 = _LAB_2c4988d0;
  if (*_LAB_2c4988d0 == '\0' && *(char *)(_LAB_2c4988cc + 0x40) == '\0') {
    puVar3 = (undefined4 *)FUN_2c6442f0(*_LAB_2c4988d4,0);
    if (puVar3 != (undefined4 *)0x0) {
      uVar4 = *puVar2;
      *puVar3 = 1;
      puVar3[1] = 0;
      iVar5 = FUN_2c6442fc(uVar4);
      if (iVar5 == 0) {
        *pcVar1 = *pcVar1 + '\x01';
        return;
      }
    }
  }
  return;
}

