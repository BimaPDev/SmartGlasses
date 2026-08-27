/* FUN_14064c90 @ 0x14064c90 */

void FUN_14064c90(undefined2 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 uVar4;
  short local_18;
  undefined2 local_16;
  int local_14;
  
  local_14 = *DAT_14064d14;
  uVar1 = *(undefined1 *)((int)param_1 + 5);
  uVar4 = *(undefined1 *)(param_1 + 2);
  uVar2 = param_1[1];
  if (param_1[3] == 0) {
    iVar3 = 1;
  }
  else {
    local_16 = param_1[5];
    local_18 = param_1[3];
    iVar3 = FUN_14064244(uVar1,uVar4,uVar2,0x88,0,0,0,0,param_1[4],1,&local_18);
    if (iVar3 == 0) {
      iVar3 = FUN_1406d4e0();
      *(undefined2 *)(iVar3 + 0x2c) = *param_1;
      goto LAB_14064cbc;
    }
    uVar2 = param_1[1];
    uVar1 = *(undefined1 *)((int)param_1 + 5);
    uVar4 = *(undefined1 *)(param_1 + 2);
  }
  FUN_140680a4(*param_1,uVar2,uVar1,param_2,uVar4,iVar3);
LAB_14064cbc:
  if (*DAT_14064d14 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

