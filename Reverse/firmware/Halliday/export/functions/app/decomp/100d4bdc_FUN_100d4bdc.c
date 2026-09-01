/* FUN_100d4bdc @ 0x100d4bdc */

undefined4 FUN_100d4bdc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  int *piVar6;
  uint uVar7;
  byte bVar5;
  
  piVar6 = *(int **)*DAT_100d4d8c;
  while( true ) {
    if (piVar6 == (int *)0x0) {
      FUN_100a5b78((DAT_100d4d94 - DAT_100d4d90) * 0x20 & 0xff00U | 0x2bc0021,DAT_100d4d9c,
                   DAT_100d4d98,DAT_100d4d90,param_1,param_2,param_3,param_4);
      return 0xffffffed;
    }
    if (((((int)((uint)*(byte *)((int)piVar6 + 0x39) << 0x1f) < 0) && (param_1 == piVar6[3])) &&
        (-1 < *(char *)(piVar6 + 0xe))) &&
       (bVar5 = (byte)((*(byte *)(piVar6 + 0xe) & 0x7f) >> 4), (*(byte *)(piVar6 + 0xe) & 0x70) == 0
       )) break;
    piVar6 = (int *)*piVar6;
  }
  uVar7 = (DAT_100d4d94 - DAT_100d4d90) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100d4db4 | uVar7,DAT_100d4d9c,DAT_100d4db8,param_2,param_1,
               *(byte *)((int)piVar6 + 0x3b) & 7,*(byte *)((int)piVar6 + 0x45) & 1,param_4);
  if (param_2 == 0) {
    *(byte *)((int)piVar6 + 0x39) = *(byte *)((int)piVar6 + 0x39) & 0xfd;
    piVar6[0x13] = 0;
  }
  else {
    *(byte *)((int)piVar6 + 0x39) = *(byte *)((int)piVar6 + 0x39) | 2;
    uVar2 = thunk_FUN_10115958();
    piVar6[0x13] = uVar2;
  }
  iVar3 = FUN_100d45f8(param_1,1);
  if (iVar3 == 0) {
    bVar4 = 1;
    bVar5 = *(byte *)((int)piVar6 + 0x3b);
  }
  else {
    FUN_100a5b78(DAT_100d4da4 | uVar7,DAT_100d4d9c,DAT_100d4da0,param_2,*(undefined4 *)(iVar3 + 0xc)
                 ,*(byte *)(iVar3 + 0x3b) & 7,*(byte *)(iVar3 + 0x45) & 1,param_4);
    if ((int)((uint)*(byte *)((int)piVar6 + 0x45) << 0x1f) < 0) {
      return 0;
    }
    if (param_2 == 0) {
      bVar5 = *(byte *)((int)piVar6 + 0x3b);
      bVar4 = *(byte *)(iVar3 + 0x3b) & 7;
      if (bVar4 == 1) {
        bVar4 = bVar5 & 0xf8;
        goto LAB_100d4cf2;
      }
      bVar1 = *(byte *)(iVar3 + 0x39);
      if ((bVar4 == 2) || ((bVar1 & 2) != 0)) {
        *(byte *)((int)piVar6 + 0x3b) = bVar5 & 0xf8;
        *(byte *)(iVar3 + 0x3b) = *(byte *)(iVar3 + 0x3b) & 0xf8 | 1;
        if ((bVar1 & 2) == 0) {
          return 0;
        }
        uVar2 = *(undefined4 *)(iVar3 + 0xc);
        goto LAB_100d4cd4;
      }
    }
    else {
      if ((-1 < (int)((uint)*(byte *)(iVar3 + 0x45) << 0x1f)) &&
         (((int)((uint)*(byte *)(*DAT_100d4da8 + 0x31) << 0x1e) < 0 ||
          ((DAT_100d4dac & *(uint *)(iVar3 + 0x38)) != DAT_100d4db0)))) {
        if ((*(byte *)((int)piVar6 + 0x3b) & 7) == 1) {
          return 0;
        }
        *(byte *)((int)piVar6 + 0x3b) = *(byte *)((int)piVar6 + 0x3b) & 0xf8 | 1;
        if ((*(byte *)(iVar3 + 0x39) & 2) != 0) {
          bVar5 = 2;
        }
        *(byte *)(iVar3 + 0x3b) = *(byte *)(iVar3 + 0x3b) & 0xf8 | bVar5;
        uVar2 = piVar6[3];
LAB_100d4cd4:
        FUN_100d4440(0xca,0x20,uVar2);
        return 0;
      }
      bVar5 = *(byte *)((int)piVar6 + 0x3b);
    }
    bVar4 = 2;
  }
  bVar4 = bVar5 & 0xf8 | bVar4;
LAB_100d4cf2:
  *(byte *)((int)piVar6 + 0x3b) = bVar4;
  return 0;
}

