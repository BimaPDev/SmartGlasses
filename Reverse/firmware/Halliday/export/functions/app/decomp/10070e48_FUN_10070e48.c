/* FUN_10070e48 @ 0x10070e48 */

uint FUN_10070e48(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  
  local_c = param_2;
  iVar1 = FUN_1011ea96(param_1 + 0x2ff18000,0x14,&local_c,param_4,param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_c;
    if (0x13 < local_c) {
      uVar2 = 0x14;
    }
    FUN_1011ea40(iVar1,DAT_10070e7c,uVar2);
    FUN_1011eb2a(param_1 + 0x2ff18000,local_c);
    uVar2 = local_c;
  }
  return uVar2;
}

