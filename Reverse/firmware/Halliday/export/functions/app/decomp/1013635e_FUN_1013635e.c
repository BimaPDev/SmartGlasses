/* FUN_1013635e @ 0x1013635e */

bool FUN_1013635e(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort local_44 [4];
  undefined4 local_3c;
  undefined1 auStack_30 [6];
  byte abStack_2a [22];
  
  FUN_100d4440(200,0x96,0);
  FUN_1011ea48(auStack_30,0);
  FUN_100d6c3c(auStack_30,3);
  iVar4 = 0;
  while( true ) {
    if (((int)((uint)abStack_2a[iVar4 * 8] << 0x1f) < 0) &&
       (iVar2 = FUN_1011ea30(auStack_30 + iVar4 * 8,param_1,6), iVar2 == 0)) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 3) {
      uVar5 = 0;
LAB_101363aa:
      iVar2 = FUN_100d7514(param_1);
      if ((iVar2 == 0) || (iVar3 = FUN_100d63dc(), iVar3 == 0)) {
        FUN_1011ea48(local_44,0,0x14);
        local_44[0] = (ushort)(iVar2 << 9) & 0x700 | (ushort)(uVar5 != 0) << 8 |
                      (ushort)(iVar4 == 3) * 0x400;
        local_3c = param_1;
        iVar4 = FUN_100d4038(1,local_44);
        bVar1 = iVar4 == 0;
      }
      else {
        bVar1 = false;
      }
      return bVar1;
    }
  }
  uVar5 = (abStack_2a[iVar4 * 8] & 0xf) >> 1;
  goto LAB_101363aa;
}

