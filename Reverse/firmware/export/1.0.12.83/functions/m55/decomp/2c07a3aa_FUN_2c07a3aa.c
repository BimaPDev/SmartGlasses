/* FUN_2c07a3aa @ 0x2c07a3aa */

void FUN_2c07a3aa(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(int *)(param_4 + 8) = param_1;
  *(int *)(param_2 + 8) = param_4;
  *(undefined4 *)(param_2 + 0xc) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x2c07a3be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(param_2 + 0x2c07a3d2))
            (param_1,param_2 + 0x10,*(undefined2 *)(param_1 + 0x34),param_4,param_1,param_4);
  return;
}

