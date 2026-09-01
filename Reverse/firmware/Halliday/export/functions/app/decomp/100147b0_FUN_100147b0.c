/* FUN_100147b0 @ 0x100147b0 */

short * FUN_100147b0(short *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  iVar2 = *DAT_10014894;
  FUN_1011dbf4(DAT_10014898,0xffffffff,param_3,0,param_1);
  iVar3 = *DAT_1001489c;
  if (iVar3 == 0) {
    FUN_100a5b78((DAT_100148a4 - DAT_100148a0) * 0x20 & 0xff00U | 0x6b0021,DAT_100148ac,DAT_100148a8
                );
    *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 0xe7 | 0x10;
    psVar4 = (short *)0x0;
    while( true ) {
      FUN_10014674();
LAB_10014868:
      if (*DAT_10014894 == iVar2) break;
      FUN_1013cdc0();
      iVar3 = extraout_r1;
LAB_10014876:
      psVar4 = param_1 + 9;
      FUN_1011e9f8(psVar4,iVar3,0x200);
      *(undefined1 *)(param_1 + 0x109) = 0;
    }
    return psVar4;
  }
  if ((*(byte *)(param_1 + 1) & 0xfb) != 0) {
    *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 0xf8;
  }
  iVar3 = FUN_1012d572(iVar3,param_2,param_1 + 0x116);
  if (param_1[0x116] == *param_1) {
    *(byte *)((int)param_1 + 3) =
         *(byte *)((int)param_1 + 3) & 0xf8 | *(byte *)((int)param_1 + 3) + 1 & 7;
  }
  iVar1 = DAT_100148a4;
  if ((iVar3 != 0) && ((*(byte *)((int)param_1 + 3) & 7) < 3)) goto LAB_10014876;
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 0xe7 | 0x10;
  FUN_100a5b78((iVar1 - DAT_100148a0) * 0x20 & 0xff00U | 0x7b0021,DAT_100148ac,DAT_100148b0);
  psVar4 = (short *)0x0;
  FUN_10014674();
  goto LAB_10014868;
}

