/* FUN_1008d384 @ 0x1008d384 */

void FUN_1008d384(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  uint uVar1;
  uint extraout_r3;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 != 0) {
    uVar1 = (uint)*(byte *)(param_2 + 0x10);
    if (uVar1 == 1) {
      FUN_10093c38(iVar2);
      uVar1 = extraout_r3;
      param_3 = extraout_r2;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      FUN_10094268(*(int *)(iVar2 + 0xc),DAT_1008d3bc,param_3,uVar1,param_4);
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      FUN_10094268(*(int *)(iVar2 + 0x10),DAT_1008d3bc);
    }
    FUN_10094268(iVar2,DAT_1008d3bc);
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  return;
}

