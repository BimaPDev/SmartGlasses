/* FUN_2c54e9dc @ 0x2c54e9dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c54e9dc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = FUN_2c54ee98(param_1,_LAB_2c54eb1c,param_3,1);
  if ((iVar1 < 0) ||
     ((iVar1 = FUN_2c48e42c(param_1,_LAB_2c54eb20), iVar1 == 0 &&
      (iVar2 = FUN_2c48e85c(), iVar2 == 0)))) {
    return 0xffffffff;
  }
  iVar2 = FUN_2c48e3f0(iVar1);
  func_0x2c54df40(param_2 + 8,iVar2);
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      puVar5 = *(undefined4 **)(param_2 + 0xc);
      if (puVar5 == *(undefined4 **)(param_2 + 0x10)) {
        FUN_2c54e2c8(param_2 + 8,puVar5);
      }
      else {
        FUN_2c674268(puVar5,0,0xe4);
        *puVar5 = _LAB_2c54eb24;
        puVar5[1] = puVar5 + 3;
        puVar5[8] = puVar5 + 10;
        puVar5[0xf] = puVar5 + 0x11;
        puVar5[0x15] = puVar5 + 0x17;
        puVar5[0x1b] = puVar5 + 0x1d;
        puVar5[0x21] = puVar5 + 0x23;
        puVar5[0x27] = puVar5 + 0x29;
        puVar5[0x2d] = puVar5 + 0x2f;
        puVar5[0x33] = puVar5 + 0x35;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
        puVar5[9] = 0;
        *(undefined1 *)(puVar5 + 10) = 0;
        puVar5[0x10] = 0;
        *(undefined1 *)(puVar5 + 0x11) = 0;
        puVar5[0x16] = 0;
        *(undefined1 *)(puVar5 + 0x17) = 0;
        puVar5[0x1c] = 0;
        *(undefined1 *)(puVar5 + 0x1d) = 0;
        puVar5[0x22] = 0;
        *(undefined1 *)(puVar5 + 0x23) = 0;
        puVar5[0x28] = 0;
        *(undefined1 *)(puVar5 + 0x29) = 0;
        puVar5[0x2e] = 0;
        *(undefined1 *)(puVar5 + 0x2f) = 0;
        puVar5[0x34] = 0;
        *(undefined1 *)(puVar5 + 0x35) = 0;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 0xe4;
      }
      uVar3 = FUN_2c48e408(iVar1,iVar6);
      iVar4 = iVar6 * 0xe4;
      iVar6 = iVar6 + 1;
      iVar4 = func_0x2c54de3c(uVar3,iVar4 + *(int *)(param_2 + 8));
      if (iVar4 < 0) {
        return 0xffffffff;
      }
    } while (iVar2 != iVar6);
  }
  return 0;
}

