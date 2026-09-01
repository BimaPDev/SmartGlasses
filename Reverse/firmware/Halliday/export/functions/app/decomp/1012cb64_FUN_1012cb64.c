/* FUN_1012cb64 @ 0x1012cb64 */

void FUN_1012cb64(int param_1,int param_2,int *param_3,undefined4 param_4,ushort param_5,
                 ushort param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar5 = (uint)param_5;
  uVar4 = (uint)param_6;
  if (((2 < *(byte *)(param_2 + 0x10)) && (*(int *)(param_2 + 4) != 0)) && (uVar5 != uVar4)) {
    if (((*(byte *)(param_2 + 0x11) & 3) != 2) && (iVar1 = FUN_1009dbd4(), iVar1 != 0)) {
      piVar3 = *(int **)(param_1 + 4);
      local_38 = *param_3 - *piVar3;
      local_34 = param_3[1] - piVar3[1];
      puVar2 = *(undefined4 **)(param_1 + 8);
      local_30 = *puVar2;
      local_2c = puVar2[1];
      local_28 = puVar2[2];
      local_24 = puVar2[3];
      FUN_1012a87c(&local_30,-*piVar3,-piVar3[1]);
      for (; uVar4 < uVar5; uVar4 = uVar4 + 0x168 & 0xffff) {
      }
      for (; uVar5 + 0x168 < uVar4; uVar4 = uVar4 - 0x168 & 0xffff) {
      }
      iVar1 = FUN_1009c984(&local_38,param_4,uVar5,uVar4,&local_30,param_2);
      if (iVar1 == 1) {
        return;
      }
    }
    FUN_1008dee0(param_1,param_2,param_3,param_4,uVar5,uVar4);
  }
  return;
}

