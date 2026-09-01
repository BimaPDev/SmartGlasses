/* FUN_10114ac0 @ 0x10114ac0 */

void FUN_10114ac0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10114af8;
  if (param_2 == DAT_10114af8) {
    FUN_10119dc2(DAT_10114b04,DAT_10114b00,DAT_10114afc,0x3b5,param_1,param_2);
    FUN_1011a1f0(DAT_10114afc,0x3b5,param_3,piVar1);
  }
  iVar2 = *param_2;
  piVar1 = (int *)param_2[1];
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

