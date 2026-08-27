/* FUN_140c4a14 @ 0x140c4a14 */

int * FUN_140c4a14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 != 0) {
    FUN_140c4534(param_1,0,param_3,DAT_140c4a84);
    iVar3 = *param_1;
    uVar2 = *(int *)(iVar3 + -0xc) + param_3;
    if ((*(uint *)(iVar3 + -8) < uVar2) || (0 < *(int *)(iVar3 + -4))) {
      iVar1 = FUN_140c4550(param_1,param_2);
      if (iVar1 == 0) {
        FUN_140c4986(param_1,uVar2);
        param_2 = (param_2 - iVar3) + *param_1;
      }
      else {
        FUN_140c4986(param_1,uVar2);
      }
    }
    FUN_140c456c(*param_1 + *(int *)(*param_1 + -0xc) * 4,param_2,param_3);
    FUN_140c4634(*param_1 + -0xc,uVar2);
  }
  return param_1;
}

