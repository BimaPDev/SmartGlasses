/* FUN_1013b122 @ 0x1013b122 */

int FUN_1013b122(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int extraout_r2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_1013b026();
  if (iVar1 == 0) {
    iVar1 = 3;
  }
  else {
    uVar3 = extraout_r2 + 2U & 0xfffffffe;
    if ((*(int *)(param_1 + *(int *)(param_1 + 0x6e4) * 4 + 0x6dc) + uVar3 * 4 + 8 <
         *(uint *)(param_1 + 0x6d8)) ||
       ((iVar1 = FUN_1010b660(param_1), iVar1 == 0 && (iVar1 = FUN_1010b62c(param_1,0), iVar1 == 0))
       )) {
      iVar1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
      *(uint *)(*(int *)(iVar1 + 0x6d0) + *(int *)(iVar1 + 0x6dc)) =
           param_2 | param_3 << 0x10 | 0x30000000;
      puVar4 = param_4;
      while( true ) {
        iVar1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
        iVar2 = *(int *)(iVar1 + 0x6dc);
        if (puVar4 == param_4 + param_3) break;
        *(undefined4 *)((int)puVar4 + *(int *)(iVar1 + 0x6d0) + iVar2 + (4 - (int)param_4)) =
             *puVar4;
        puVar4 = puVar4 + 1;
      }
      if (-1 < param_3 << 0x1f) {
        *(undefined4 *)
         (*(int *)(param_1 + (*(int *)(param_1 + 0x6e4) + 0x1b4) * 4) + iVar2 + param_3 * 4 + 4) =
             0x80000000;
      }
      param_1 = param_1 + *(int *)(param_1 + 0x6e4) * 4;
      iVar1 = 0;
      *(uint *)(param_1 + 0x6dc) = uVar3 * 4 + *(int *)(param_1 + 0x6dc);
    }
  }
  return iVar1;
}

