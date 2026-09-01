/* thunk_FUN_1009efa0 @ 0x1013194a */

uint thunk_FUN_1009efa0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  FUN_1011dbf4(DAT_1009efe4,0xffffffff,param_3,param_4,param_4);
  iVar1 = FUN_1009ef1c(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_10073804(param_1,param_2,param_3);
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 8);
    if ((int)param_3 <= (int)(uint)*(ushort *)(iVar1 + 8)) {
      uVar2 = param_3;
    }
    FUN_1011ea40(param_2,*(undefined4 *)(iVar1 + 4),uVar2);
  }
  FUN_1009ef94();
  return uVar2;
}

