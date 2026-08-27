/* FUN_2c54c6de @ 0x2c54c6de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54c6de(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = FUN_2c54ee98(param_1,_LAB_2c54c7d4,param_3,1,param_4);
  if ((iVar2 < 0) ||
     ((iVar2 = FUN_2c48e42c(param_1,_LAB_2c54c7d8), iVar2 == 0 &&
      (iVar3 = FUN_2c48e85c(), iVar3 == 0)))) {
    return 0xffffffff;
  }
  iVar3 = FUN_2c48e3f0(iVar2);
  func_0x2c54c258(param_2 + 8,iVar3);
  uVar1 = _LAB_2c54c7dc;
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      puVar6 = *(undefined4 **)(param_2 + 0xc);
      if (puVar6 == *(undefined4 **)(param_2 + 0x10)) {
        FUN_2c54c308(param_2 + 8,puVar6);
      }
      else {
        FUN_2c674268(puVar6,0,0xf0);
        *puVar6 = uVar1;
        puVar6[1] = puVar6 + 3;
        puVar6[7] = puVar6 + 9;
        puVar6[0xd] = puVar6 + 0xf;
        puVar6[0x13] = puVar6 + 0x15;
        puVar6[0x1e] = puVar6 + 0x20;
        puVar6[2] = 0;
        puVar6[0x24] = puVar6 + 0x26;
        *(undefined1 *)(puVar6 + 3) = 0;
        puVar6[8] = 0;
        *(undefined1 *)(puVar6 + 9) = 0;
        puVar6[0xe] = 0;
        *(undefined1 *)(puVar6 + 0xf) = 0;
        puVar6[0x14] = 0;
        *(undefined1 *)(puVar6 + 0x15) = 0;
        puVar6[0x1f] = 0;
        *(undefined1 *)(puVar6 + 0x20) = 0;
        puVar6[0x25] = 0;
        *(undefined1 *)(puVar6 + 0x26) = 0;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 0xf0;
      }
      uVar4 = FUN_2c48e408(iVar2,iVar5);
      iVar7 = iVar5 + 1;
      iVar5 = func_0x2c54c020(uVar4,*(int *)(param_2 + 8) + iVar5 * 0xf0);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      iVar5 = iVar7;
    } while (iVar3 != iVar7);
  }
  return 0;
}

