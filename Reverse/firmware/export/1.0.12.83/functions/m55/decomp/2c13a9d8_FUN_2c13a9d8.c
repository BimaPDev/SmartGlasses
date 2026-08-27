/* FUN_2c13a9d8 @ 0x2c13a9d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c13a9d8(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  puVar1 = _DAT_2c13aa28;
  iVar3 = 0;
  FUN_2c13f29c(*_DAT_2c13aa28,0xffffffff);
  iVar5 = 0;
  piVar4 = _DAT_2c13aa24;
  do {
    if (((char)piVar4[1] != '\0') && (*(code **)(*piVar4 + 0x1c) != (code *)0x0)) {
      iVar2 = (**(code **)(*piVar4 + 0x1c))(param_1);
      if (iVar2 < 0) {
        iVar5 = (int)(char)((byte)iVar5 | (byte)iVar3);
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 3;
  } while (iVar3 != 5);
  FUN_2c13f2d8(*puVar1);
  return iVar5;
}

