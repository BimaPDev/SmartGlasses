/* FUN_2c4e79e8 @ 0x2c4e79e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_2c4e79e8(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = func_0x2c4ec460();
  uVar1 = _LAB_2c4e7a40;
  uVar5 = (uint)*(byte *)(iVar3 + 8);
  if (uVar5 < 2) {
    return 0;
  }
  iVar9 = 0x24;
  uVar2 = 0;
  iVar8 = 1;
  do {
    while( true ) {
      iVar8 = iVar8 + 1;
      puVar7 = (undefined4 *)(*(int *)(iVar3 + 4) + iVar9);
      iVar9 = iVar9 + 0x24;
      pcVar6 = (char *)puVar7[5];
      if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x01')) break;
      if ((int)uVar5 <= iVar8) {
        return uVar2;
      }
    }
    func_0x2c4efe98(*puVar7,0x10);
    iVar4 = FUN_2c4e9354();
    (**(code **)(iVar4 + 0x58))(uVar1);
    uVar5 = (uint)*(byte *)(iVar3 + 8);
    uVar2 = 1;
  } while (iVar8 < (int)uVar5);
  return 1;
}

