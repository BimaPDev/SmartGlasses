/* FUN_2c521004 @ 0x2c521004 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c521004(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  FUN_2c62be40();
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = FUN_2c520f4c();
  if ((iVar2 != 0) && (cVar1 = *(char *)(iVar3 + 4), cVar1 != '\0')) {
    if (cVar1 == '\x01') {
      FUN_2c520f9c(_LAB_2c521048);
    }
    else if (cVar1 == '\x02') {
      FUN_2c520f9c(_LAB_2c52104c);
    }
    else if (cVar1 == '\x03') {
      FUN_2c520f9c(_LAB_2c521050);
    }
    *(undefined1 *)(iVar3 + 4) = 0;
    return;
  }
  return;
}

