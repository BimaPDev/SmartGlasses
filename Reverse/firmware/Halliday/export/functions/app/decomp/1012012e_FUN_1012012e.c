/* FUN_1012012e @ 0x1012012e */

void FUN_1012012e(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_1011ff74();
    uVar2 = extraout_r1_00;
  }
  else {
    FUN_1007de78();
    uVar2 = extraout_r1;
  }
  iVar1 = FUN_1007ddd0(param_1,uVar2,param_1);
  if (iVar1 == 0) {
    uVar2 = 0x82;
  }
  else {
    uVar2 = 0xb0c;
  }
  *(undefined4 *)(*(int *)*extraout_r2 + 4) = uVar2;
  return;
}

