/* FUN_100b88c4 @ 0x100b88c4 */

undefined4 FUN_100b88c4(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 local_4c;
  undefined1 auStack_4a [38];
  
  iVar1 = FUN_1011ea10(param_2);
  if (iVar1 < 0x20) {
    local_4c = CONCAT11(local_4c._1_1_,0x3c);
    FUN_1013d03e((int)&local_4c + 1,param_2,iVar1,0x22);
    auStack_4a[iVar1 + -1] = 0x3e;
    auStack_4a[iVar1] = 0;
    iVar2 = FUN_1013d44e(param_1,&local_4c);
    if (iVar2 == 0) {
      uVar3 = (DAT_100b8998 - DAT_100b8994) * 0x20 & 0xff00U | 0x280000;
      uVar4 = DAT_100b899c;
    }
    else {
      iVar2 = iVar2 + iVar1 + 2;
      local_4c = 0x2f3c;
      *param_3 = iVar2;
      FUN_1013d03e(auStack_4a,param_2,iVar1,0x21);
      auStack_4a[iVar1] = 0x3e;
      auStack_4a[iVar1 + 1] = 0;
      iVar1 = FUN_1013d44e(iVar2,&local_4c);
      if (iVar1 != 0) {
        *param_4 = iVar1;
        return 0;
      }
      uVar3 = (DAT_100b8998 - DAT_100b8994) * 0x20 & 0xff00U | 0x390000;
      uVar4 = DAT_100b89a4;
    }
    FUN_100a5b78(uVar3 | 0x11,DAT_100b89a0,uVar4,param_2);
  }
  return 0xffffffff;
}

