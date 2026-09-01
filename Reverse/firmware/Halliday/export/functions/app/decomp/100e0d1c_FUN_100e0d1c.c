/* FUN_100e0d1c @ 0x100e0d1c */

void FUN_100e0d1c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_3c [36];
  
  iVar1 = DAT_100e0d78;
  uVar3 = 0;
  uVar4 = (*DAT_100e0d74 & 0x7ff) >> 7;
  do {
    if ((int)uVar4 <= (int)uVar3) {
      return;
    }
    uVar5 = uVar3 & 0xff;
    if (param_1 == 0) {
      if (uVar5 < uVar4) {
        FUN_1011ea48(uVar3 * 0x60 + iVar1,0);
      }
      FUN_100e083c(auStack_3c,uVar5);
      FUN_10132898(auStack_3c);
    }
    else {
      iVar2 = FUN_100e0b10(uVar5,param_1);
      if (iVar2 != 0) {
        FUN_100e0b60();
        return;
      }
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

