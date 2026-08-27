/* FUN_2c612110 @ 0x2c612110 */

int FUN_2c612110(undefined4 param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined1 auStack_20 [12];
  int local_14;
  
  local_14 = *DAT_2c6121e0;
  iVar1 = FUN_2c614f58(param_2,param_2,param_3,0);
  if (iVar1 == 0) {
    if ((byte)(((byte)*param_2 & 0x1f) - 4) < 0x11) {
      iVar1 = 1;
      *param_3 = *param_3 & 0xffe003ff | *param_2 & 0x1ffc00;
      *(ushort *)((int)param_3 + 2) =
           *(ushort *)((int)param_3 + 2) & 0x1f | *(ushort *)((int)param_2 + 2) & 0xffe0;
      *(byte *)param_3 = (byte)*param_3 & 0xe0 | (byte)*param_2 & 0x1f;
    }
    goto LAB_2c612162;
  }
  if (iVar1 == 1) {
    uVar2 = FUN_2c62e148(param_2);
    iVar3 = FUN_2c66b624(uVar2,DAT_2c6121e8);
    if (iVar3 == 0) {
      iVar3 = FUN_2c62dd10(auStack_20,param_2,2);
      if (iVar3 == 0) {
        iVar3 = FUN_2c62de74(auStack_20,param_3,4,&local_24);
        FUN_2c62de2c(auStack_20);
        if ((iVar3 != 0) || (local_24 != 4)) goto LAB_2c61219c;
      }
      if (((byte)*param_3 + 0x1c & 0x1f) < 0x11) goto LAB_2c612162;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = 1;
    *param_3 = DAT_2c6121e4 | *param_3 & 0x3e0;
    goto LAB_2c612162;
  }
LAB_2c61219c:
  iVar1 = 0;
LAB_2c612162:
  if (*DAT_2c6121e0 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar1;
}

