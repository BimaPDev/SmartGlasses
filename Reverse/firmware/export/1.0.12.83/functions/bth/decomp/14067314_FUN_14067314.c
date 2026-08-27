/* FUN_14067314 @ 0x14067314 */

int FUN_14067314(uint param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ushort *local_24;
  int local_20;
  int local_1c;
  
  iVar4 = DAT_140673b0;
  local_1c = *DAT_140673b4;
  local_20 = *(int *)(DAT_140673b0 + 0x84);
  local_24 = (ushort *)0x0;
  iVar5 = FUN_140664f0(param_2,&local_20,&local_24);
  if (iVar5 != 0) goto LAB_14067350;
  if (*(byte *)(local_20 + 0xb) != param_1) {
    iVar5 = 0x43;
    goto LAB_14067350;
  }
  if (*local_24 >> 0xe == 0) {
    uVar2 = local_24[1];
    if (uVar2 < 0x2804) {
      if (0x27ff < uVar2) {
LAB_140673a6:
        iVar5 = 0x40;
        goto LAB_14067350;
      }
    }
    else if (uVar2 == 0x2900) goto LAB_140673a6;
  }
  *local_24 = (ushort)((uint)(param_3 << 0x12) >> 0x12) | *local_24 & 0xc000;
  sVar3 = *(short *)(local_20 + 4);
  bVar1 = *(byte *)(local_20 + 6);
  *(undefined1 *)(iVar4 + 0x96) = 0;
  FUN_1405bc78(sVar3,(ushort)bVar1 + sVar3 + -1);
LAB_14067350:
  if (*DAT_140673b4 == local_1c) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

