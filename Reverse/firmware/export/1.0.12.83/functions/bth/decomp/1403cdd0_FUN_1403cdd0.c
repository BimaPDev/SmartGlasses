/* FUN_1403cdd0 @ 0x1403cdd0 */

undefined4 * FUN_1403cdd0(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar6 = *DAT_1403ce68;
  iVar3 = FUN_1404ca68(param_2 & 0xff,param_2,param_3,0);
  local_24 = 0;
  local_20._0_2_ = 0;
  if (iVar3 == 0) {
    uVar5 = 0;
    uVar4 = 0xff;
    uVar7 = 0xffff;
    uVar2 = 0;
    uVar8 = 0;
  }
  else {
    local_24 = *(undefined4 *)(iVar3 + 0x10);
    uVar7 = *(undefined2 *)(iVar3 + 0x1c);
    local_20._0_2_ = (undefined2)*(undefined4 *)(iVar3 + 0x14);
    uVar8 = *(undefined1 *)(iVar3 + 0x4c);
    uVar2 = *(undefined1 *)(iVar3 + 0x4a);
    uVar4 = *(undefined1 *)(iVar3 + 0x52);
    uVar5 = *(undefined2 *)(iVar3 + 0x42);
  }
  local_20 = CONCAT22(uVar7,(undefined2)local_20);
  *param_1 = local_24;
  *(undefined2 *)(param_1 + 3) = uVar5;
  piVar1 = DAT_1403ce68;
  param_1[1] = local_20;
  param_1[2] = CONCAT13(uVar4,CONCAT12(uVar2,CONCAT11(uVar8,iVar3 != 0)));
  if (*piVar1 == iVar6) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

