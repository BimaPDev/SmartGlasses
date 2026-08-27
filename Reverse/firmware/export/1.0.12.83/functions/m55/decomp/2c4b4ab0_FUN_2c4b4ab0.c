/* FUN_2c4b4ab0 @ 0x2c4b4ab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b4ab0(void)

{
  char *pcVar1;
  int iVar2;
  
  *_LAB_2c4b4ac8 = 1;
  func_0x2c4bf3b8();
  func_0x2c4bba2c();
  iVar2 = _LAB_2c4bba28;
  pcVar1 = _LAB_2c4bba24;
  if (*_LAB_2c4bba24 == '\0') {
    return;
  }
  *(undefined4 *)(_LAB_2c4bba28 + 0x14) = 0x1e04;
  *(undefined4 *)(iVar2 + 0x14) = 0x1e03;
  FUN_2c673b08(0x5dc);
  *pcVar1 = '\0';
  return;
}

