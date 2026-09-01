/* FUN_10051b78 @ 0x10051b78 */

int FUN_10051b78(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_r3;
  undefined4 uVar5;
  
  piVar1 = DAT_10051c14;
  iVar3 = *DAT_10051c10;
  iVar4 = *DAT_10051c14;
  uVar5 = param_1;
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x10) != 0)) && (param_2 != 0)) goto LAB_10051bc2;
  uVar2 = (DAT_10051c18 - DAT_10051c1c) * 0x20 & 0xff00U | 0x9d0000;
  do {
    FUN_100a5b78(uVar2 | 0x11,DAT_10051c24,DAT_10051c20,DAT_10051c1c,uVar5);
    param_2 = -1;
    while( true ) {
      if (*DAT_10051c10 == iVar3) {
        return param_2;
      }
      FUN_1013cdc0();
      iVar4 = extraout_r3;
LAB_10051bc2:
      if (-1 < (int)((uint)*(byte *)(iVar4 + 4) << 0x1f)) break;
      FUN_10119dc2(DAT_10051c28);
      FUN_1011aab8(0);
      param_2 = FUN_100a07a0(*(undefined4 *)(*piVar1 + 0x10),param_1,param_2);
      FUN_1011aabe(0);
      FUN_10119dc2(DAT_10051c2c,param_2);
    }
    uVar2 = (DAT_10051c18 - DAT_10051c1c) * 0x20 & 0xff00U | 0xa20000;
  } while( true );
}

