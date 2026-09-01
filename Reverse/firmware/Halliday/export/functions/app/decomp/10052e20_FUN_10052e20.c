/* FUN_10052e20 @ 0x10052e20 */

int FUN_10052e20(int param_1,uint param_2,undefined2 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r3;
  uint unaff_r6;
  uint unaff_r8;
  int unaff_r11;
  
  iVar2 = DAT_10052eb0;
  iVar4 = *DAT_10052eac;
  if (((*(char *)(DAT_10052eb0 + 0x8c) == '\0') || (param_1 == 0)) || (param_3 == (undefined2 *)0x0)
     ) {
    iVar3 = -0x16;
    goto LAB_10052e66;
  }
  iVar3 = FUN_10113cfc(DAT_10052eb0 + 0x78,param_2,100,0,param_1,iVar4,param_3);
  if (iVar3 != 0) goto LAB_10052e66;
  unaff_r11 = 0x4c;
  uVar1 = *(ushort *)(iVar2 + 0x26);
  unaff_r8 = 0;
  do {
    unaff_r6 = (uint)uVar1;
    uVar5 = unaff_r8 & 0xffff;
    if (uVar5 < param_2) goto LAB_10052e74;
    do {
      *param_3 = (short)uVar5;
      FUN_10052804();
LAB_10052e66:
      if (*DAT_10052eac == iVar4) {
        return iVar3;
      }
      FUN_1013cdc0();
      uVar5 = extraout_r3;
LAB_10052e74:
    } while (*(ushort *)(iVar2 + 0x28) <= uVar5);
    FUN_1011ea40(unaff_r11 * unaff_r8 + param_1,unaff_r11 * unaff_r6 + *(int *)(iVar2 + 0x20),0x4c);
    uVar1 = (short)(unaff_r6 + 1) -
            *(ushort *)(iVar2 + 2) * (short)((unaff_r6 + 1) / (uint)*(ushort *)(iVar2 + 2));
    unaff_r8 = unaff_r8 + 1;
  } while( true );
}

