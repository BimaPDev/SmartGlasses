/* FUN_2c4cb004 @ 0x2c4cb004 */

undefined4 FUN_2c4cb004(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xc);
  if (0 < iVar5) {
    puVar4 = (undefined4 *)(param_2 + -4);
    puVar3 = (undefined4 *)(param_3 + -4);
    iVar1 = 0;
    do {
      puVar3 = puVar3 + 1;
      iVar2 = iVar1 + 1;
      puVar4 = puVar4 + 1;
      iVar1 = FUN_2c4d2814(*(undefined4 *)(param_1 + 0x14),*puVar4,*puVar3,param_4,iVar1);
      if (iVar1 != 0) {
        return 5;
      }
      iVar1 = iVar2;
      param_4 = param_4 + 4;
    } while (iVar5 != iVar2);
  }
  return 0;
}

