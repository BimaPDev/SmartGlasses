/* FUN_100f19ac @ 0x100f19ac */

undefined4 FUN_100f19ac(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  piVar3 = DAT_100f1a54;
  piVar5 = (int *)*DAT_100f1a54;
  while( true ) {
    if (piVar5 == (int *)0x0) {
      return 0xfffffffd;
    }
    if (*(ushort *)(piVar5[1] + 0xc) == param_1) break;
    piVar5 = (int *)*piVar5;
  }
  uVar4 = (uint)*(byte *)(piVar5 + 5);
  if ((uVar4 & 1) != param_2) {
    if (param_2 == 0) {
      uVar4 = uVar4 & 0xfe;
    }
    else {
      uVar4 = uVar4 | 1;
    }
    *(char *)(piVar5 + 5) = (char)uVar4;
    FUN_100f161c(piVar5,1,uVar4,piVar5,param_4);
    iVar6 = piVar3[0x11];
    if ((iVar6 != 0) && ((int)((uint)*(byte *)(iVar6 + 0x14) << 0x1c) < 0)) {
      bVar1 = *(byte *)(iVar6 + 0x16);
      iVar6 = FUN_1013938e();
      if (iVar6 != 0) {
        FUN_100a5b78((DAT_100f1a5c - DAT_100f1a58) * 0x20 & 0xff00U | 0xca0031,DAT_100f1a60,
                     (bVar1 & 0x20) == 0);
        FUN_1011dbf4(DAT_100f1a64,0xffffffff);
        bVar2 = *(byte *)((int)piVar3 + 0x62);
        *(byte *)((int)piVar3 + 0x62) = bVar2 | 2;
        if ((bVar1 & 0x20) == 0) {
          *(byte *)((int)piVar3 + 0x62) = bVar2 | 3;
        }
        FUN_10113e2c(DAT_100f1a64);
      }
    }
  }
  return 0;
}

