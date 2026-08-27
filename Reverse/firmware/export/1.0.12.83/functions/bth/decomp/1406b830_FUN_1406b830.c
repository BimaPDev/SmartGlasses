/* FUN_1406b830 @ 0x1406b830 */

byte FUN_1406b830(int param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  char local_1d;
  int local_1c;
  
  local_1c = *DAT_1406b8a8;
  iVar5 = *(int *)(DAT_1406b8ac + (param_1 + 0x22) * 4);
  iVar2 = FUN_14069164(param_1,&local_1d);
  if ((iVar2 != 0) && (bVar1 = *(byte *)(iVar5 + 0x54), bVar4 = bVar1 & 8, (bVar1 & 8) == 0)) {
    if (*(char *)(param_2 + 0x10) == local_1d) {
      uVar3 = FUN_14066130();
      if (*(ushort *)(param_3 + 2) <= uVar3) {
        uVar3 = (uint)*(ushort *)(param_3 + 2);
      }
      *(short *)(param_2 + 0x18) = (short)uVar3;
      goto LAB_1406b86e;
    }
  }
  bVar4 = 4;
LAB_1406b86e:
  FUN_1406d250(param_1,param_2);
  FUN_1405be00(param_1,*param_3,0);
  if (*DAT_1406b8a8 == local_1c) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

