/* FUN_2c135458 @ 0x2c135458 */

undefined4 * FUN_2c135458(undefined4 *param_1,uint param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  int local_1c;
  
  local_1c = *DAT_2c135510;
  if ((param_1 != (undefined4 *)0x0) && (0x1f < param_2)) {
    if (*DAT_2c135514 == '\0') {
      uVar4 = DAT_2c135528[1];
      uVar1 = *(undefined2 *)(DAT_2c135528 + 2);
      *param_1 = *DAT_2c135528;
      param_1[1] = uVar4;
      *(undefined2 *)(param_1 + 2) = uVar1;
    }
    else {
      iVar3 = FUN_2c14486c();
      lVar2 = (ulonglong)(uint)(iVar3 - *DAT_2c135518) * 1000 + 0x2000;
      uVar6 = (uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12;
      uVar7 = (uint)((ulonglong)DAT_2c13551c * (ulonglong)uVar6 >> 0x26);
      uVar5 = uVar7 + *DAT_2c135520;
      local_48 = uVar5 + 0x7080;
      local_44 = DAT_2c135520[1] + (uint)CARRY4(uVar7,*DAT_2c135520) + (uint)(0xffff8f7f < uVar5);
      iVar3 = FUN_2c142350(&local_48,&local_40);
      if (iVar3 != 0) {
        FUN_2c142710(param_1,param_2,DAT_2c135524,local_30 + 1,uStack_34,local_38,uStack_3c,local_40
                     ,uVar6 + uVar7 * -1000);
      }
    }
  }
  if (*DAT_2c135510 == local_1c) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

