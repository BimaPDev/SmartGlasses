/* FUN_2c54d6d6 @ 0x2c54d6d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54d6d6(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar3 = FUN_2c54ee98(param_1,_LAB_2c54d7b8,param_3,1,param_4);
  if ((iVar3 < 0) ||
     ((iVar3 = FUN_2c48e42c(param_1,_LAB_2c54d7bc), iVar3 == 0 &&
      (iVar4 = FUN_2c48e85c(), iVar4 == 0)))) {
    return 0xffffffff;
  }
  iVar4 = FUN_2c48e3f0(iVar3);
  func_0x2c54d038(param_2 + 8,iVar4);
  uVar2 = _LAB_2c54d7c8;
  if (0 < iVar4) {
    iVar7 = 0;
    do {
      puVar8 = *(undefined4 **)(param_2 + 0xc);
      if (puVar8 == *(undefined4 **)(param_2 + 0x10)) {
        FUN_2c54d264(param_2 + 8,puVar8);
      }
      else {
        FUN_2c674268(puVar8,0,0x98);
        *(undefined1 *)(puVar8 + 5) = 0;
        puVar8[3] = puVar8 + 5;
        puVar8[10] = puVar8 + 0xc;
        *(undefined1 *)(puVar8 + 0xc) = 0;
        *(undefined1 *)(puVar8 + 0x12) = 0;
        *(undefined1 *)(puVar8 + 0x1f) = 0;
        uVar1 = _LAB_2c54d7c4;
        uVar5 = _LAB_2c54d7c0;
        puVar8[0x10] = puVar8 + 0x12;
        puVar8[0x17] = uVar5;
        puVar8[0x1d] = puVar8 + 0x1f;
        *puVar8 = uVar2;
        puVar8[1] = uVar1;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 0x98;
      }
      uVar5 = FUN_2c48e408(iVar3,iVar7);
      iVar6 = iVar7 * 0x98;
      iVar7 = iVar7 + 1;
      iVar6 = func_0x2c54cf3c(uVar5,iVar6 + *(int *)(param_2 + 8));
      if (iVar6 < 0) {
        return 0xffffffff;
      }
    } while (iVar4 != iVar7);
  }
  return 0;
}

