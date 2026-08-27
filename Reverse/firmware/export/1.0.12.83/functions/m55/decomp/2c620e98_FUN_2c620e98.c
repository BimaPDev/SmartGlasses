/* FUN_2c620e98 @ 0x2c620e98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c620e98(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_2c602400();
  iVar3 = FUN_2c62ca10(_LAB_2c620ed8);
  uVar1 = _LAB_2c620ed8;
  do {
    if (iVar3 == 0) {
      return;
    }
    while (iVar4 = FUN_2c62ca20(uVar1,iVar3), *(int *)(iVar3 + 0xc) != iVar2) {
      iVar3 = iVar4;
      if (iVar4 == 0) {
        return;
      }
    }
    FUN_2c628c58();
    *(undefined1 *)(iVar3 + 0x10) = 1;
    iVar3 = iVar4;
  } while( true );
}

