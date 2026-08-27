/* FUN_2c5e31f4 @ 0x2c5e31f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e31f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = _LAB_2c5e3254;
  iVar4 = _LAB_2c5e3254[0x1f2];
  if (iVar4 != 0) {
    iVar3 = 0;
    puVar2 = _LAB_2c5e3254;
    do {
      if (*(char *)(puVar2 + 2) == param_1) {
        if (iVar4 + -1 != iVar3) {
          FUN_2c673eb8(puVar2 + 2,puVar2 + 6,((iVar4 + -1) - iVar3) * 0x10,
                       (int)*(char *)(puVar2 + 2),param_4);
          iVar3 = puVar1[0x1f2] + -1;
        }
        iVar4 = _LAB_2c5e3258;
        puVar1[500] = iVar3;
        *(undefined4 *)(iVar4 + 4) = *puVar1;
        puVar1[0x1f2] = iVar3;
        func_0x2c471668(0,iVar4 + -2000);
        return 1;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar3 != iVar4);
  }
  return 0;
}

