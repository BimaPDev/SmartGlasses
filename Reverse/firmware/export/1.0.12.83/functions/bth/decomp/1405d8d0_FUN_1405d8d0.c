/* FUN_1405d8d0 @ 0x1405d8d0 */

void FUN_1405d8d0(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_20;
  uint local_1c;
  
  iVar1 = DAT_1405d954;
  local_1c = *DAT_1405d950;
  if ((int)((*(uint *)(DAT_1405d954 + 0x9c) >> *(sbyte *)(param_1 + 0xc)) << 0x1f) < 0) {
    iVar3 = 0x4f;
  }
  else {
    if (param_2 < 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1405d964,0x14e,DAT_1405d960);
    }
    uVar4 = FUN_14063910(1,param_2,DAT_1405d958,&local_20);
    param_2 = (uint)((ulonglong)uVar4 >> 0x20);
    iVar3 = (int)uVar4;
    if (iVar3 == 0) {
      *(undefined1 *)(local_20 + 0xc) = *(undefined1 *)(param_1 + 0xc);
      uVar2 = DAT_1405d95c;
      *(undefined1 *)(local_20 + 0xd) = 1;
      *(undefined2 *)(local_20 + 0xe) = 1;
      *(undefined4 *)(local_20 + 8) = uVar2;
      *param_3 = local_20;
      param_2 = (uint)*(byte *)(param_1 + 0xc);
      *(uint *)(iVar1 + 0x9c) = 1 << param_2 | *(uint *)(iVar1 + 0x9c);
    }
  }
  if ((*DAT_1405d950 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(iVar3,param_2,*DAT_1405d950 ^ local_1c,0);
}

