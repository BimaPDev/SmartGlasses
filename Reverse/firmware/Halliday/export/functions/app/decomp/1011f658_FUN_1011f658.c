/* FUN_1011f658 @ 0x1011f658 */

uint FUN_1011f658(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_1c;
  uint uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  iVar2 = FUN_1011eb60(param_1 + 0x2ff18000,param_3,&local_1c,param_4,param_1);
  uVar1 = local_1c;
  uVar3 = 0;
  if (iVar2 != 0) {
    if (local_1c <= param_3) {
      param_3 = local_1c;
    }
    FUN_1011ea40(param_2,iVar2,param_3);
    FUN_1011ebda(param_1 + 0x2ff18000,uVar1);
    uVar3 = local_1c;
  }
  return uVar3;
}

