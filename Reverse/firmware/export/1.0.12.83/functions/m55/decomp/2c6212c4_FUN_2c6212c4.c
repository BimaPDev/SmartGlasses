/* FUN_2c6212c4 @ 0x2c6212c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c6212c4(undefined4 param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_34;
  undefined1 auStack_30 [12];
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c6213c4;
  iVar1 = FUN_2c614f58(param_2,param_2,param_3,0);
  if (iVar1 == 1) {
    uVar3 = FUN_2c62e148(param_2);
    iVar2 = FUN_2c66b624(uVar3,_LAB_2c6213cc);
    if ((iVar2 == 0) && (iVar2 = FUN_2c62dd10(auStack_30,param_2,2), iVar2 == 0)) {
      FUN_2c62e030(auStack_30,0x10,0);
      FUN_2c62de74(auStack_30,&uStack_24,8,&iStack_34);
      FUN_2c62de2c(auStack_30);
      if (iStack_34 == 8) {
        *param_3 = ((uStack_24 >> 8 & 0xffffff00) + (uStack_24 >> 0x18) & 0x7ff) << 10 | 5 |
                   ((uStack_20 >> 8 & 0xffffff00) + (uStack_20 >> 0x18)) * 0x200000 |
                   *param_3 & 0x300;
        goto LAB_2c6212e6;
      }
    }
  }
  else if (iVar1 == 0) {
    uStack_1c = *_LAB_2c6213c8;
    uStack_18 = _LAB_2c6213c8[1];
    if ((7 < param_2[1]) && (iVar2 = FUN_2c66960c(&uStack_1c,param_2[2],8), iVar2 == 0)) {
      iVar1 = 1;
      *(byte *)param_3 = (byte)*param_3 & 0x1f;
      *(byte *)param_3 = (byte)*param_2 & 0x1f;
      *param_3 = *param_3 & 0xffe003ff | *param_2 & 0x1ffc00;
      *(ushort *)((int)param_3 + 2) =
           *(ushort *)((int)param_3 + 2) & 0x1f | *(ushort *)((int)param_2 + 2) & 0xffe0;
    }
    goto LAB_2c6212e6;
  }
  iVar1 = 0;
LAB_2c6212e6:
  if (*_LAB_2c6213c4 == iStack_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

