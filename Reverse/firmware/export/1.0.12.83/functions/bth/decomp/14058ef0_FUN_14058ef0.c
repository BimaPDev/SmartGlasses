/* FUN_14058ef0 @ 0x14058ef0 */

void FUN_14058ef0(undefined4 param_1,int param_2,short *param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int local_20;
  uint local_1c;
  
  local_1c = *DAT_14058fa0;
  if ((param_2 == 0) || (iVar2 = param_2, -1 < (int)((uint)*(byte *)(param_2 + 0x44) << 0x1e))) {
    uVar1 = 0;
    if (**(int **)(DAT_14058fa4 + 0x14) == 0) goto LAB_14058f2e;
    iVar2 = 0xc7a;
    if (((((ushort)(param_3[1] - 6U) < 0xc7b) && ((ushort)(*param_3 - 6U) < 0xc7b)) &&
        ((ushort)(param_3[3] - 10U) < 0xc77)) &&
       (((ushort)param_3[2] < 500 &&
        (uVar3 = FUN_1405b33c(param_1,0x1c,DAT_14058fa8,&local_20),
        iVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 == 0)))) {
      *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) | 1;
      *(char *)(local_20 + 0x14) = (char)param_1;
      param_2 = *(int *)(param_3 + 2);
      uVar1 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(local_20 + 8) = *(undefined4 *)param_3;
      *(int *)(local_20 + 0xc) = param_2;
      *(undefined4 *)(local_20 + 0x10) = uVar1;
      uVar1 = 1;
      *(undefined1 *)(local_20 + 0x17) = 0;
      *(undefined1 *)(local_20 + 0x18) = param_4;
      *(undefined1 *)(local_20 + 0x15) = param_5;
      goto LAB_14058f2e;
    }
  }
  param_2 = iVar2;
  uVar1 = 0;
LAB_14058f2e:
  if ((*DAT_14058fa0 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar1,param_2,*DAT_14058fa0 ^ local_1c,0);
}

