/* FUN_2c4f79d4 @ 0x2c4f79d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f79d4(int param_1,uint param_2,undefined4 param_3,char *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  
  piVar1 = _LAB_2c4f7a74;
  if (*param_4 != '\x01') {
    if (param_2 >> 1 != 0) {
      puVar6 = (undefined2 *)(param_1 + -2);
      puVar7 = (undefined1 *)(param_1 + -1);
      do {
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = (char)((ushort)*puVar6 >> 8);
      } while (puVar6 != (undefined2 *)(param_1 + (param_2 >> 1) * 2 + -2));
    }
    piVar1 = _LAB_2c4f7a74;
    uVar4 = param_2 >> 2;
    pcVar5 = *(code **)(*_LAB_2c4f7a74 + 0xc);
    uVar2 = FUN_2c490280();
    (*pcVar5)(param_1,uVar4,uVar2,param_2);
    pcVar5 = *(code **)(*piVar1 + 0xc);
    iVar3 = FUN_2c490280();
    (*pcVar5)(param_1 + uVar4,uVar4,iVar3 + param_2,param_2);
    return 0;
  }
  param_2 = param_2 >> 1;
  pcVar5 = *(code **)(*_LAB_2c4f7a74 + 0xc);
  uVar2 = FUN_2c490280();
  (*pcVar5)(param_1,param_2,uVar2,param_2);
  pcVar5 = *(code **)(*piVar1 + 0xc);
  iVar3 = FUN_2c490280();
  (*pcVar5)(param_1 + param_2,param_2,iVar3 + param_2,param_2);
  return 0;
}

