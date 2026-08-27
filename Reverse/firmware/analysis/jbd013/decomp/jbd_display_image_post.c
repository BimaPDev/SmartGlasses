/* FUN_2c4993d0 @ 0x2c4993d0 */

void FUN_2c4993d0(uint param_1,undefined2 param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar2 = DAT_2c499458;
  piVar1 = DAT_2c499450;
  if (((*DAT_2c499450 != 0) && (param_4 != 0 && param_3 != 0)) && (param_5 != 0)) {
    FUN_2c644044(*(undefined4 *)(DAT_2c499458 + 0x4b038),0xffffffff);
    iVar4 = iVar2;
    if (param_5 != iVar2) {
      iVar4 = DAT_2c499454;
    }
    sVar3 = (short)(param_3 >> 1);
    if ((param_3 & 1) != 0) {
      sVar3 = sVar3 + 1;
    }
    *(short *)(iVar4 + 0x25800) = (short)(param_1 >> 1);
    *(undefined2 *)(iVar4 + 0x25802) = param_2;
    *(short *)(iVar4 + 0x25804) = sVar3;
    *(short *)(iVar4 + 0x25806) = (short)param_4;
    *(undefined1 *)(iVar4 + 0x25808) = 1;
    FUN_2c644080(*(undefined4 *)(iVar2 + 0x4b038));
    FUN_2c64723c(*piVar1);
    return;
  }
  return;
}

