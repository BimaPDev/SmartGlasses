/* FUN_2c470914 @ 0x2c470914 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c470914(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = _LAB_2c470940;
  func_0x2c471770(0);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
  }
  else {
    iVar2 = FUN_2c478b68();
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xf8))();
      func_0x2c674368();
      *pcVar1 = '\0';
      return;
    }
  }
  return;
}

