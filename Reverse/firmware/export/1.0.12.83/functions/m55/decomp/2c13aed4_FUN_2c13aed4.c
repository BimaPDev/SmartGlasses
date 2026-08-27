/* FUN_2c13aed4 @ 0x2c13aed4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13aed4(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  pcVar2 = _DAT_2c13af2c;
  puVar1 = _DAT_2c13af28;
  uStack_14 = *_DAT_2c13af20;
  iVar5 = *(int *)(*(int *)(_DAT_2c13af24 + 0x18) + 0x14);
  do {
    do {
      func_0x2c13f494(&iStack_20,*puVar1,0xffffffff);
    } while (iStack_20 != 0x20);
    iVar3 = func_0x2c13f4f4(*puVar1,uStack_1c);
    if (iVar3 == 0) {
      *pcVar2 = *pcVar2 + -1;
    }
    pcVar4 = *(code **)(iVar5 + 0x10);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)();
    }
    pcVar4 = *(code **)(iVar5 + 0x14);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)();
    }
  } while( true );
}

