/* FUN_100bb198 @ 0x100bb198 */

undefined4 FUN_100bb198(undefined1 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_2c [2];
  undefined1 local_2a;
  undefined1 local_29;
  int local_24;
  undefined4 local_20;
  
  FUN_1011ea48(auStack_2c,0,0x14);
  iVar1 = FUN_1009e224();
  if (iVar1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    uVar2 = FUN_1011ea10(DAT_100bb210);
    iVar3 = FUN_1011ea30(iVar1,DAT_100bb210,uVar2);
    uVar2 = 0;
    if (iVar3 != 0) {
      if ((param_2 != 0) && (param_3 != 0)) {
        local_24 = FUN_100b9d90(param_3 + 1);
        if (local_24 == 0) {
          return 0xfffffff4;
        }
        FUN_1011ea48(local_24,0,param_3 + 1);
        FUN_1011ea40(local_24,param_2,param_3);
        local_20 = DAT_100bb214;
      }
      local_2a = 0x1c;
      local_29 = param_1;
      uVar2 = FUN_1009ece8(iVar1,auStack_2c);
    }
  }
  return uVar2;
}

