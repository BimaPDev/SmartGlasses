/* FUN_100a2c44 @ 0x100a2c44 */

int FUN_100a2c44(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *DAT_100a2d80;
  FUN_1011dbf4(iVar4 + 0x10,0xffffffff,param_3,DAT_100a2d80,param_1,param_2,param_3);
  if (*(char *)(iVar4 + 0x24) == '\0') {
    iVar1 = FUN_1013d44e(param_1,DAT_100a2d98);
    iVar3 = 0;
    if (iVar1 == 0) {
      if (2 < *(byte *)(iVar4 + 0x25)) {
        iVar1 = *(int *)(iVar4 + 4);
        FUN_1012d950((int *)(iVar4 + 4),iVar1);
        iVar3 = DAT_100a2d88;
        *(char *)(iVar4 + 0x25) = *(char *)(iVar4 + 0x25) + -1;
        FUN_100a5b78((iVar3 - DAT_100a2d84) * 0x20 & 0xff00U | 0x1f00011,DAT_100a2d94,DAT_100a2d9c,
                     iVar1 + 0x16);
        FUN_1012d1f4(iVar1);
      }
      iVar1 = FUN_1011ea10(param_1);
      iVar3 = 0;
      if (param_5 != 0) {
        iVar3 = FUN_1011ea10();
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar1 + 0x19 + iVar3;
      puVar2 = (undefined4 *)thunk_FUN_1009f30c(iVar3,DAT_100a2da0);
      if (puVar2 == (undefined4 *)0x0) {
        iVar3 = -0xc;
      }
      else {
        FUN_1011ea48(puVar2,0,iVar3);
        puVar2[2] = param_3;
        puVar2[3] = param_4;
        *(char *)(puVar2 + 5) = (char)param_2;
        FUN_1011e9f0((int)puVar2 + 0x16,param_1);
        if (param_5 != 0) {
          iVar3 = FUN_1011ea10(param_1);
          iVar3 = iVar3 + 0x19 + (int)puVar2;
          puVar2[4] = iVar3;
          FUN_1011e9f0(iVar3,param_5);
        }
        *puVar2 = 0;
        if (*(undefined4 **)(iVar4 + 8) == (undefined4 *)0x0) {
          *(undefined4 **)(iVar4 + 4) = puVar2;
          *(undefined4 **)(iVar4 + 8) = puVar2;
        }
        else {
          **(undefined4 **)(iVar4 + 8) = puVar2;
          *(undefined4 **)(iVar4 + 8) = puVar2;
        }
        iVar3 = 0;
        *(char *)(iVar4 + 0x25) = *(char *)(iVar4 + 0x25) + '\x01';
      }
    }
  }
  else {
    FUN_100a5b78(DAT_100a2d8c | (DAT_100a2d88 - DAT_100a2d84) * 0x20 & 0xff00U,DAT_100a2d94,
                 DAT_100a2d90,*(char *)(iVar4 + 0x24));
    iVar3 = -0x2e;
  }
  thunk_FUN_10113e2c(iVar4 + 0x10);
  if ((iVar3 == 0) && (*(int *)(iVar4 + 0xc) == 0)) {
    if ((param_2 & 0x10) != 0) {
      iVar4 = FUN_100a299c();
      return iVar4;
    }
    FUN_100a265c();
  }
  return iVar3;
}

