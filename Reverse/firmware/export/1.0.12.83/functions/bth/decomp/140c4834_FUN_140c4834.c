/* FUN_140c4834 @ 0x140c4834 */

int * FUN_140c4834(int *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_140c4514(param_1,param_2,DAT_140c4860);
  uVar2 = *(int *)(*param_1 + -0xc) - param_2;
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  FUN_140c4758(param_1,uVar1,uVar2,0);
  return param_1;
}

