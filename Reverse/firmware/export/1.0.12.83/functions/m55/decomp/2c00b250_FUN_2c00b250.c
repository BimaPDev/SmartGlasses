/* FUN_2c00b250 @ 0x2c00b250 */

undefined4 * FUN_2c00b250(undefined4 *param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  int local_24;
  
  local_24 = *DAT_2c00b31c;
  if ((param_1 != (undefined4 *)0x0) && (0x1f < param_2)) {
    if (*DAT_2c00b320 == '\0') {
      uVar4 = DAT_2c00b334[1];
      uVar1 = *(undefined2 *)(DAT_2c00b334 + 2);
      *param_1 = *DAT_2c00b334;
      param_1[1] = uVar4;
      *(undefined2 *)(param_1 + 2) = uVar1;
    }
    else {
      iVar3 = FUN_2c013858();
      uVar2 = (iVar3 - *DAT_2c00b324) * 1000 + 0x2000;
      uVar6 = (uint)((ulonglong)DAT_2c00b32c * (ulonglong)uVar2 >> 0x26);
      uVar5 = uVar6 + *DAT_2c00b328;
      local_50 = uVar5 + 0x7080;
      local_4c = DAT_2c00b328[1] + (uint)CARRY4(uVar6,*DAT_2c00b328) + (uint)(0xffff8f7f < uVar5);
      iVar3 = FUN_2c013e1c(&local_50,&local_48);
      if (iVar3 != 0) {
        FUN_2c013dac(param_1,param_2,DAT_2c00b330,local_38 + 1,uStack_3c,local_40,uStack_44,local_48
                     ,uVar2 + uVar6 * -1000);
      }
    }
  }
  if (*DAT_2c00b31c != local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return param_1;
}

