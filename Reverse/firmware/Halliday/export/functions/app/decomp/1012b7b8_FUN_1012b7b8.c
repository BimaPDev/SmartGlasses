/* FUN_1012b7b8 @ 0x1012b7b8 */

void FUN_1012b7b8(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 local_34 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  iVar1 = FUN_10125e18();
  if ((iVar1 != 0) && (param_2 != param_3)) {
    if (0x168 < param_2) {
      param_2 = param_2 - 0x168 & 0xffff;
    }
    uVar3 = param_3;
    if (0x168 < param_3) {
      uVar3 = param_3 - 0x168;
    }
    uVar4 = param_2 + *(ushort *)(param_1 + 0x2c) & 0xffff;
    if (0x168 < param_3) {
      uVar3 = uVar3 & 0xffff;
    }
    uVar3 = uVar3 + *(ushort *)(param_1 + 0x2c) & 0xffff;
    if (0x168 < uVar4) {
      uVar4 = uVar4 - 0x168 & 0xffff;
    }
    if (0x168 < uVar3) {
      uVar3 = uVar3 - 0x168 & 0xffff;
    }
    FUN_1012b68e(param_1,&local_30,local_34);
    uVar2 = FUN_1012b65c(param_1,param_4);
    iVar1 = FUN_1012691c(param_1,param_4,0x51);
    FUN_1012734a(local_30,uStack_2c,local_34[0],uVar4,uVar3,uVar2,iVar1 != 0,auStack_28);
    FUN_10125ab8(param_1,auStack_28);
  }
  return;
}

