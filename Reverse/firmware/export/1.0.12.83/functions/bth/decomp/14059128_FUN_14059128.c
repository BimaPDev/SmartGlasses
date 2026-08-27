/* FUN_14059128 @ 0x14059128 */

void FUN_14059128(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  
  local_14 = *DAT_140591e4;
  uVar1 = FUN_1405c284(*(undefined2 *)(param_2 + 2),param_2,param_3,0);
  if (uVar1 < 2) {
    iVar3 = *(int *)(DAT_140591e8 + uVar1 * 4);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x43) & 0x10) == 0)) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0;
  }
  local_20 = *(uint *)(param_2 + 4);
  local_1c = *(uint *)(param_2 + 8);
  local_18 = 1;
  local_16 = 1;
  iVar2 = FUN_14058ef0(uVar1,iVar3,&local_20,0,0);
  if (iVar2 == 0) {
    bVar4 = false;
    if (((((int)((uint)*(byte *)(iVar3 + 0x43) << 0x1e) < 0) &&
         ((ushort)(local_20._2_2_ - 6U) < 0xc7b)) && (((local_20 & 0xffff) - 6 & 0xffff) < 0xc7b))
       && ((ushort)(local_1c._2_2_ - 10U) < 0xc77)) {
      bVar4 = (local_1c & 0xffff) < 500;
    }
    FUN_14058c20(uVar1,bVar4,&local_20);
  }
  if (*DAT_140591e4 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

